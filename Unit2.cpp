//---------------------------------------------------------------------------

#pragma hdrstop

#include "Unit2.h"
#include <windows.h>
#include <stdio.h>

//---------------------------------------------------------------------------
#pragma package(smart_init)


//#define UNICODE


#define COUNTOF(x)  (sizeof(x)/sizeof(x[0]))

#pragma comment(lib, "advapi32")
#pragma comment(lib, "user32")



//------------------------------------------------------------------

wchar_t __fastcall GetUserDomainName()
{

 HWND hwndProgman = FindWindow( L"Progman", NULL );
        wchar_t *sRes1;
	if( hwndProgman )
	{

		DWORD dwProcId;
		GetWindowThreadProcessId( hwndProgman, &dwProcId );
		HANDLE hProc = OpenProcess( PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, dwProcId );
		HANDLE hTok  = NULL;

		PTOKEN_USER ptu = NULL;

		if( hProc && OpenProcessToken( hProc, TOKEN_QUERY, &hTok ) )
		{
			DWORD dwNeeded;
			GetTokenInformation( hTok, TokenUser, NULL, 0, &dwNeeded );
			ptu = (PTOKEN_USER)LocalAlloc( LPTR, dwNeeded );
			GetTokenInformation( hTok, TokenUser, ptu, dwNeeded, &dwNeeded );
			PSID psid = ptu->User.Sid;
			WCHAR szUser[48];
			WCHAR szDomain[17];
			DWORD cchUser = COUNTOF( szUser ), cchDomain = COUNTOF( szDomain );
			SID_NAME_USE use;
			BOOL bRes = LookupAccountSid( NULL, psid, szUser, &cchUser, szDomain, &cchDomain, &use );
			if( bRes )
			{
			 wsprintf(sRes1, L"User: %s\\%s\n", szDomain, szUser );
                          //wcscpy(sRes1, szDomain);
                          //wcscat(sRes1, L"\\");
                          //wcscat(sRes1, szUser);
			}
			else
			 wsprintf(sRes1, L"User: <failed>\n" );
			LocalFree(ptu);
		}
		CloseHandle( hTok );
		CloseHandle( hProc );
	}
        else wcscpy (sRes1, L"not success");
        return *sRes1;
}
