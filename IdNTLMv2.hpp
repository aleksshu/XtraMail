// CodeGear C++Builder
// Copyright (c) 1995, 2011 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdNTLMv2.pas' rev: 23.00 (Win32)

#ifndef Idntlmv2HPP
#define Idntlmv2HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <IdGlobal.hpp>	// Pascal unit
#include <IdStruct.hpp>	// Pascal unit
#include <IdCTypes.hpp>	// Pascal unit
#include <IdSSLOpenSSLHeaders.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Idntlmv2
{
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<char, 8> ProtocolArray;

typedef System::StaticArray<char, 8> nonceArray;

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 IdNTLMSSP_NEGOTIATE_UNICODE = System::Int8(0x1);
static const System::Int8 IdNTLM_NEGOTIATE_OEM = System::Int8(0x2);
static const System::Int8 IdNTLMSSP_REQUEST_TARGET = System::Int8(0x4);
static const System::Int8 IdNTLM_Unknown1 = System::Int8(0x8);
static const System::Int8 IdNTLMSSP_NEGOTIATE_SIGN = System::Int8(0x10);
static const System::Int8 IdNTLMSSP_NEGOTIATE_SEAL = System::Int8(0x20);
static const System::Int8 IdNTLMSSP_NEGOTIATE_DATAGRAM = System::Int8(0x40);
static const System::Byte IdNTLMSSP_NEGOTIATE_LM_KEY = System::Byte(0x80);
static const System::Word IdNTLMSSP_NEGOTIATE_NETWARE = System::Word(0x100);
static const System::Word IdNTLMSSP_NEGOTIATE_NTLM = System::Word(0x200);
static const System::Word IdNTLMSSP_NEGOTIATE_NT_ONLY = System::Word(0x400);
static const System::Word IdNTLMSSP_ANONYMOUS = System::Word(0x800);
static const System::Word IdNTLMSSP_NEGOTIATE_OEM_DOMAIN_SUPPLIED = System::Word(0x1000);
static const System::Word IdNTLMSSP_NEGOTIATE_OEM_WORKSTATION_SUPPLIED = System::Word(0x2000);
static const System::Word IdNTLMSSP_NEGOTIATE_LOCAL_CALL = System::Word(0x4000);
static const System::Word IdNTLMSSP_NEGOTIATE_ALWAYS_SIGN = System::Word(0x8000);
static const int IdNTLMSSP_TARGET_TYPE_DOMAIN = int(0x10000);
static const int IdNTLMSSP_TARGET_TYPE_SERVER = int(0x20000);
static const int IdNTLMSSP_TARGET_TYPE_SHARE = int(0x40000);
static const int IdNTLMSSP_NEGOTIATE_EXTENDED_SESSIONSECURITY = int(0x80000);
static const int IdNTLMSSP_NEGOTIATE_IDENTIFY = int(0x100000);
static const int IdNTLMSSP_REQUEST_ACCEPT_RESPONSE = int(0x200000);
static const int IdIdNTLMSSP_REQUEST_NON_NT_SESSION_KEY = int(0x400000);
static const int IdNTLMSSP_NEGOTIATE_TARGET_INFO = int(0x800000);
static const int IdNTLM_Unknown4 = int(0x1000000);
static const int IdNTLMSSP_NEGOTIATE_VERSION = int(0x2000000);
static const int IdNTLM_Unknown6 = int(0x4000000);
static const int IdNTLM_Unknown7 = int(0x8000000);
static const int IdNTLM_Unknown8 = int(0x10000000);
static const int IdNTLMSSP_NEGOTIATE_128 = int(0x20000000);
static const int IdNTLMSSP_NEGOTIATE_KEY_EXCH = int(0x40000000);
static const unsigned IdNTLMSSP_NEGOTIATE_56 = unsigned(0x80000000);
static const int IdNTLM_TYPE1_FLAGS_LC2 = int(0x80007);
static const int IdNTLM_TYPE1_FLAGS = int(0x80207);
extern PACKAGE unsigned IdNTLM_TYPE1_MARKER;
extern PACKAGE unsigned IdNTLM_TYPE2_MARKER;
extern PACKAGE unsigned IdNTLM_TYPE3_MARKER;
static const System::Int8 IdNTLM_NTLMSSP_DES_KEY_LENGTH = System::Int8(0x7);
static const System::Int8 IdNTLM_NTLMSSP_CHALLENGE_SIZE = System::Int8(0x8);
static const System::Int8 IdNTLM_LM_HASH_SIZE = System::Int8(0x10);
static const System::Int8 IdNTLM_LM_SESS_HASH_SIZE = System::Int8(0x10);
static const System::Int8 IdNTLM_LM_RESPONSE_SIZE = System::Int8(0x18);
static const System::Int8 IdNTLM_NTLMSSP_HASH_SIZE = System::Int8(0x10);
static const System::Int8 IdNTLM_NTLMSSP_RESPONSE_SIZE = System::Int8(0x18);
static const System::Int8 IdNTLM_NTLMSSP_V2_HASH_SIZE = System::Int8(0x6);
static const System::Int8 IdNTLM_NTLMSSP_V2_RESPONSE_SIZE = System::Int8(0x10);
static const System::Int8 IdNTLM_NONCE_LEN = System::Int8(0x8);
static const System::Int8 IdNTLM_TYPE2_TNAME_LEN_OFS = System::Int8(0xc);
static const System::Int8 IdNTLM_TYPE2_TNAME_OFFSET_OFS = System::Int8(0x10);
static const System::Int8 IdNTLM_TYPE2_FLAGS_OFS = System::Int8(0x14);
static const System::Int8 IdNTLM_TYPE2_NONCE_OFS = System::Int8(0x18);
static const System::Int8 IdNTLM_TYPE2_TINFO_LEN_OFS = System::Int8(0x28);
static const System::Int8 IdNTLM_TYPE2_TINFO_OFFSET_OFS = System::Int8(0x2c);
static const System::Int8 IdNTLM_TYPE3_DOM_OFFSET = System::Int8(0x40);
static const System::Int8 IdNTLM_WINDOWS_MAJOR_VERSION_5 = System::Int8(0x5);
static const System::Int8 IdNTLM_WINDOWS_MAJOR_VERSION_6 = System::Int8(0x6);
static const System::Int8 IdNTLM_WINDOWS_MINOR_VERSION_0 = System::Int8(0x0);
static const System::Int8 IdNTLM_WINDOWS_MINOR_VERSION_1 = System::Int8(0x1);
static const System::Int8 IdNTLM_WINDOWS_MINOR_VERSION_2 = System::Int8(0x2);
static const System::Word IdNTLM_WINDOWS_BUILD_ORIG_VISTA = System::Word(0x1770);
extern PACKAGE System::DynamicArray<System::Byte> IdNTLM_SSP_SIG;
// System::TArray__1<System::Byte>  IdNTLM_SSP_SIG;
extern PACKAGE System::TDateTime UnixEpoch;
extern PACKAGE char * __cdecl (*GRC4_Options)(void);
extern PACKAGE void __cdecl (*GRC4_set_key)(PRC4_KEY key, int len, char * data);
extern PACKAGE void __cdecl (*GRC4)(PRC4_KEY key, unsigned len, char * indata, char * outdata);
extern PACKAGE System::UnicodeString __fastcall DumpFlags(const System::DynamicArray<System::Byte> ABytes)/* overload */;
extern PACKAGE System::UnicodeString __fastcall DumpFlags(const unsigned AFlags)/* overload */;
extern PACKAGE void __fastcall GetDomain(const System::UnicodeString AUserName, System::UnicodeString &VUserName, System::UnicodeString &VDomain);
extern PACKAGE bool __fastcall NTLMFunctionsLoaded(void);
extern PACKAGE bool __fastcall LoadRC4(void);
extern PACKAGE bool __fastcall RC4FunctionsLoaded(void);
extern PACKAGE System::DynamicArray<System::Byte> __fastcall BuildType1Msg(const System::AnsiString ADomain = System::AnsiString(), const System::AnsiString AHost = System::AnsiString(), const unsigned ALMCompatibility = (unsigned)(0x0));
extern PACKAGE void __fastcall ReadType2Msg(const System::DynamicArray<System::Byte> AMsg, unsigned &VFlags, System::DynamicArray<System::Byte> &VTargetName, System::DynamicArray<System::Byte> &VTargetInfo, System::DynamicArray<System::Byte> &VNonce);
extern PACKAGE System::DynamicArray<System::Byte> __fastcall BuildType3Msg(const System::UnicodeString ADomain, const System::UnicodeString AHost, const System::UnicodeString AUsername, const System::UnicodeString APassword, const unsigned AFlags, const System::DynamicArray<System::Byte> AServerNonce, const System::DynamicArray<System::Byte> ATargetName, const System::DynamicArray<System::Byte> ATargetInfo, const unsigned ALMCompatibility = (unsigned)(0x0));
extern PACKAGE void __fastcall TestNTLM(void);

}	/* namespace Idntlmv2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDNTLMV2)
using namespace Idntlmv2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Idntlmv2HPP
