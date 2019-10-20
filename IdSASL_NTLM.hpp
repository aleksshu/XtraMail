// CodeGear C++Builder
// Copyright (c) 1995, 2011 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdSASL_NTLM.pas' rev: 23.00 (Win32)

#ifndef Idsasl_ntlmHPP
#define Idsasl_ntlmHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <IdSASL.hpp>	// Pascal unit
#include <IdSASLUserPass.hpp>	// Pascal unit
#include <IdBaseComponent.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Idsasl_ntlm
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TIdSASLNTLM;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TIdSASLNTLM : public Idsasluserpass::TIdSASLUserPass
{
	typedef Idsasluserpass::TIdSASLUserPass inherited;
	
protected:
	System::UnicodeString FDomain;
	unsigned FLMCompatibility;
	virtual void __fastcall InitComponent(void);
	
public:
	__classmethod virtual Idsasl::TIdSASLServiceName __fastcall ServiceName();
	virtual System::UnicodeString __fastcall StartAuthenticate(const System::UnicodeString AChallenge, const System::UnicodeString AHost, const System::UnicodeString AProtocolName);
	virtual System::UnicodeString __fastcall ContinueAuthenticate(const System::UnicodeString ALastResponse, const System::UnicodeString AHost, const System::UnicodeString AProtocolName);
	virtual bool __fastcall IsReadyToStart(void);
	__property System::UnicodeString Domain = {read=FDomain, write=FDomain};
	__property unsigned LMCompatibility = {read=FLMCompatibility, write=FLMCompatibility, default=2};
public:
	/* TIdSASL.Destroy */ inline __fastcall virtual ~TIdSASLNTLM(void) { }
	
public:
	/* TIdBaseComponent.Create */ inline __fastcall TIdSASLNTLM(System::Classes::TComponent* AOwner)/* overload */ : Idsasluserpass::TIdSASLUserPass(AOwner) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 DEF_LMCompatibility = System::Int8(0x2);

}	/* namespace Idsasl_ntlm */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDSASL_NTLM)
using namespace Idsasl_ntlm;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Idsasl_ntlmHPP
