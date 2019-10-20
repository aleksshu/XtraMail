//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "LMDBaseControl"
#pragma link "LMDBaseEdit"
#pragma link "LMDBaseGraphicControl"
#pragma link "LMDBaseLabel"
#pragma link "LMDControl"
#pragma link "LMDCustomBevelPanel"
#pragma link "LMDCustomComponent"
#pragma link "LMDCustomControl"
#pragma link "LMDCustomEdit"
#pragma link "LMDCustomExtSpinEdit"
#pragma link "LMDCustomMaskEdit"
#pragma link "LMDCustomPanel"
#pragma link "LMDCustomSimpleLabel"
#pragma link "LMDEdit"
#pragma link "LMDMapi"
#pragma link "LMDSimpleLabel"
#pragma link "LMDSpinEdit"
#pragma link "LMDWebBase"
#pragma link "ElComponent"
#pragma link "ElInputDlg"
#pragma link "LMDIniCtrl"
#pragma link "LMDCustomButtonGroup"
#pragma link "LMDCustomGroupBox"
#pragma link "LMDCustomParentPanel"
#pragma link "LMDCustomRadioGroup"
#pragma link "LMDRadioGroup"
#pragma link "LMDCheckListComboBox"
#pragma link "LMDCustomExtCombo"
#pragma resource "*.dfm"

#define COUNTOF(x)  (sizeof(x)/sizeof(x[0]))

#pragma comment(lib, "advapi32")

TForm1 *Form1;

TIdSASLNTLM *IdSASLNTLM1;
int po;
 String Str;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
 /*
 LMDIniCtrl1->IniFile = Application->ExeName.SubString(1,
   Application->ExeName.Length()-4) + ".ini";
 if(!FileExists) FileCreate(LMDIniCtrl1->IniFile);
 */

 EditSMTP->Text = LMDIniCtrl1->ReadString("Server", "Host", "");
 EditIMAP->Text = LMDIniCtrl1->ReadString("ServerIMAP", "Host", "");
 LMDEdit3->Text = LMDIniCtrl1->ReadString("Server", "Port", "");
 Str = LMDIniCtrl1->ReadString("Server", "Type", "");
 if(Str == "SMTP")
    RadioButtonSMTP->Checked = true;
 else if(Str == "IMAP") RadioButtonIMAP->Checked = true;
 else if(Str == "MAPI") RadioButtonMAPI->Checked = true;
 SaveChkBox->Checked = LMDIniCtrl1->ReadBool("Server", "Save", false);
 LMDEdit7->Text = LMDIniCtrl1->ReadString("Server", "User", "");
 if(SaveChkBox->Checked) {
  IdUserPassProvider1->Password = LMDIniCtrl1->ReadString("Server", "Password", "");
 }
 LMDEdit4->Text = LMDIniCtrl1->ReadString("Server", "Subject", "");
 Edit2->Text = LMDIniCtrl1->ReadString("Server", "Mailagent", "");
 LMDEdit2->Text = LMDIniCtrl1->ReadString("Server", "From", "");
 LMDEdit1->Text = LMDIniCtrl1->ReadString("Server", "To", "");

 AuthChkBox->Checked = LMDIniCtrl1->ReadBool("SMTP", "Authenticate", false);
 CheckBox9->Checked = LMDIniCtrl1->ReadBool("SMTP", "PipeLine", false);
 CheckBox11->Checked = LMDIniCtrl1->ReadBool("SMTP", "UseVerp", false);
 EhloChkBox->Checked = LMDIniCtrl1->ReadBool("SMTP", "UseEHLO", false);
 CheckBox10->Checked = LMDIniCtrl1->ReadBool("SMTP", "ValidateAutoLoginCapab", false);
 SmtpAuthTypeCombo->Text = LMDIniCtrl1->ReadString("SMTP", "AuthType", "");
 TLSComBox->Text = LMDIniCtrl1->ReadString("SMTP", "UseTLS", "");
 LMEdit->Value = LMDIniCtrl1->ReadInteger("SMTP", "LMCompat", 2);
 Edit3->Text = LMDIniCtrl1->ReadString("SMTP", "Domain", "");

 IdSASLNTLM1 = new TIdSASLNTLM(Application);



 IdUserPassProvider1->Username = LMDEdit7->Text;
 IdSMTP1->Username = IdUserPassProvider1->Username;

 //-------- добавление в IdSMTP1 список SASL механизмов

 IdSMTP1->SASLMechanisms->Clear();
 IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLAnonymous1;
 IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLCRAMMD51;
 IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLCRAMSHA11;
 IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLDigest1;
 IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLExternal1;
 IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLLogin1;
 IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLNTLM1;
 IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLOTP1;
 IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLPlain1;
 IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLSKey1;

 //-------- добавление в IdIMAP41 список SASL механизмов
 IdIMAP41->SASLMechanisms->Clear();
 IdIMAP41->SASLMechanisms->Add()->SASL = IdSASLAnonymous1;
 IdIMAP41->SASLMechanisms->Add()->SASL = IdSASLCRAMMD51;
 IdIMAP41->SASLMechanisms->Add()->SASL = IdSASLCRAMSHA11;
 IdIMAP41->SASLMechanisms->Add()->SASL = IdSASLDigest1;
 IdIMAP41->SASLMechanisms->Add()->SASL = IdSASLExternal1;
 IdIMAP41->SASLMechanisms->Add()->SASL = IdSASLLogin1;
 IdIMAP41->SASLMechanisms->Add()->SASL = IdSASLNTLM1;
 IdIMAP41->SASLMechanisms->Add()->SASL = IdSASLOTP1;
 IdIMAP41->SASLMechanisms->Add()->SASL = IdSASLPlain1;
 IdIMAP41->SASLMechanisms->Add()->SASL = IdSASLSKey1;

 AvSASLBox->Clear();
 for(int i=0;i<IdSMTP1->SASLMechanisms->Count;i++) {
  AvSASLBox->Items->Add(AnsiString(IdSMTP1->SASLMechanisms->Items[i]->SASL->ServiceName()));
 }

 SASLMechCombo->Clear();
 for(int i=0;i<IdSMTP1->SASLMechanisms->Count;i++) {
  SASLMechCombo->Items->Add(AnsiString(IdSMTP1->SASLMechanisms->Items[i]->SASL->ServiceName()));
 }


 //------------ применение свойства IdSMTP AuthType
 SmtpAuthTypeComboClick(Application);

 //--------- применение свойства IdSMTP UseTLS
 TLSComBoxClick(Application);

 //--------- применение свойства IdSMTP UseEhlo
 IdSMTP1->UseEhlo = true;

 //------- применение свойства IdSMTP MailAgent
 IdSMTP1->MailAgent = Edit2->Text;


 //------------ работа с паролем
 Str = IntToStr(Application->GetHashCode());
 //-----------------------------------------
 po = Str.Length();
 for (int i=1; i<po;i++) {
  Str = Str + Str.SubString(i+1,i-1);
 }
 //IdUserPassProvider1->Password = IdSASLCRAMMD51->BuildKeydAuth(Str, LMDEdit7->Text);

 for (int i=1; i<po;i++) {
  Str = Str + Str.SubString(i+1,i-1);
 }
 //IdUserPassProvider1->Password = IdSASLCRAMMD51->BuildKeydAuth(IdUserPassProvider1->Password + Str, LMDEdit7->Text);
  //==========================================

 IdUserPassProvider1->Username = LMDEdit7->Text;


 if(SaveChkBox->Checked) {
  //-------------------------------------------
  for (int i=1; i<po;i++) {
   Str = Str + Str.SubString(i+1,i-1);
  }
  //==========================================
  try {
  long int key = (long int) Str[12] / (LMDEdit8->Text !=
   IdSASLCRAMMD51->BuildKeydAuth(IdUserPassProvider1->Password, LMDEdit7->Text))? 16: 0;
  }
  catch(...) {
   IdSMTP1->Password = IdUserPassProvider1->Password;
  }
 }
// получение имени пользователя и домена

 /*
 wchar_t lpBufUserName[257];
 //wchar_t  wDomain_User;
 DWORD  szBufSize;
 szBufSize = sizeof(lpBufUserName);
 GetUserName(lpBufUserName, &szBufSize);
 Str = (String) lpBufUserName;
 */

 //Str = (UnicodeString) GetSysUserDomainName();
 //Str = GetSysUserDomainName();
 //wDomain_User =  GetSysUserDomainName();

 Str =  GetUserDomainName();
 //wDomain_User =  GetUserDomainName();
 Edit4->Text = Str;
}

//---------------------------------------------------------------------------

void __fastcall TForm1::SendBtnClick(TObject *Sender)  // Send mail
{
 bool bAuth = true;

 try{
 IdSSLIOHandlerSocketOpenSSL1->Port = StrToInt(SSLPortEdit->Text);
 } catch(...) {IdSSLIOHandlerSocketOpenSSL1->Port = 143; }
 try{
 IdSSLIOHandlerSocketOpenSSL1->ReadTimeout = StrToInt(TimeoutEdit->Text);
 } catch(...) {IdSSLIOHandlerSocketOpenSSL1->ReadTimeout = -1; }
 //IdSSLIOHandlerSocketOpenSSL1->SSLOptions->Method = SSLMethodCmbBox->Text;
 //IdSSLIOHandlerSocketOpenSSL1->SSLOptions->Mode = SSLModeCmbBox->Text;
 //IdSSLIOHandlerSocketOpenSSL1->SSLOptions->SSLVersions = SSLVersChkLstCmbBox->Items;

 if(!SaveChkBox->Checked) {  // если не сохранен пароль
  ElInputDialog1->Prompt = "пользователь:	" + LMDEdit7->Text + "\nпароль:";

  if(ElInputDialog1->Execute())   {
   IdUserPassProvider1->Password = ElInputDialog1->Value;
   ElInputDialog1->Value = "";
  }
 }

 IdSASLNTLM1->Domain = Edit3->Text;
 Memo1->Lines->Add("NTLM Domain: " + Edit3->Text);
 IdSASLNTLM1->UserPassProvider = IdUserPassProvider1;
 IdSASLNTLM1->LMCompatibility = LMEdit->Value;
 Memo1->Lines->Add("NTLM LMCompatibility: " + IntToStr(LMEdit->Value));
 if(IdSASLNTLM1->IsReadyToStart()) {
  Memo1->Lines->Add("NTLM is ready to start");
 }
 else Memo1->Lines->Add("NTLM not ready to start");

  IdMessage1->Recipients->EMailAddresses = LMDEdit1->Text;
  IdMessage1->From->Text = LMDEdit2->Text;
  IdMessage1->From->Address = LMDEdit2->Text;
  IdMessage1->Subject = LMDEdit4->Text;
  IdMessage1->Body->Text = Memo2->Text;
  IdMessage1->Priority = mpHigh;
  Memo1->Lines->Add("Send e-mail to: " + LMDEdit1->Text);

 if (RadioButtonSMTP->Checked) {
  //IdUserPassProvider1->Password = LMDEdit8->Text;
  IdSMTP1->Password = IdUserPassProvider1->Password;
  IdSMTP1->Host = EditSMTP->Text;
  try {
   IdSMTP1->Port = StrToInt(LMDEdit3->Text);
  } catch (...) { IdSMTP1->Port = 25;  }

  if(IdSMTP1->Connected()) IdSMTP1->Disconnect();
  IdSMTP1->Connect();
  if(AuthChkBox->Checked) {
   bAuth = IdSMTP1->Authenticate();
   if(!bAuth) {
     Memo1->Lines->Add("Not Authenticate");
   }
  }
  IdSMTP1->Send(IdMessage1);
  if(IdSMTP1->Connected()) {
    IdSMTP1->Disconnect();
  }
 }

 else if(RadioButtonIMAP->Checked) {
  int iMsgID;
  //IdIMAP41->CloseMailBox();
  IdIMAP41->Username = LMDEdit7->Text;
  IdIMAP41->Password = IdUserPassProvider1->Password;
  try {
  IdIMAP41->Port = StrToInt(LMDEdit3->Text);
  } catch (...) { IdIMAP41->Port = 143;  }
  IdIMAP41->Host = EditIMAP->Text;

  IdIMAP41->IOHandler->Close();

  if(SSLChkBox->Checked) IdIMAP41->IOHandler = IdSSLIOHandlerSocketOpenSSL1;

  //TCollectionItemClass *CollectionItemClass1 = new TCollectionItemClass();
  //TIdMessageCollection *IdMessageColection1 = new TIdMessageCollection(*CollectionItemClass1);
  //IdIMAP41->RetrieveAllHeaders(IdMessageColection1);

  IdIMAP41->Connect();

  IdIMAP41->Login();
  IdIMAP41->SendMsg(IdMessage1);
 }

 else if(RadioButtonMAPI->Checked) {
   LMDMapiSendMail1->SendMail();
 }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdSMTP1FailedRecipient(TObject *Sender, const UnicodeString AAddress,
          const UnicodeString ACode, const UnicodeString AText,
          bool &VContinue)
{
 Memo1->Lines->Add("SMTP FailedRecipient: " + AAddress);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::IdSMTP1Status(TObject *ASender, const TIdStatus AStatus, const UnicodeString AStatusText)

{
 Memo1->Lines->Add("SMTP Status: " + AStatusText);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::IdSMTP1TLSNotAvailable(TObject *Asender, bool &VContinue)

{
 Memo1->Lines->Add("SMTP TLSNotAvailable");
 VContinue = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::IdSMTP1Work(TObject *ASender, TWorkMode AWorkMode, __int64 AWorkCount)

{
 Memo1->Lines->Add("SMTP Work");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::IdSMTP1WorkBegin(TObject *ASender, TWorkMode AWorkMode, __int64 AWorkCountMax)

{
 Memo1->Lines->Add("SMTP WorkBegin");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::IdSMTP1WorkEnd(TObject *ASender, TWorkMode AWorkMode)
{
 Memo1->Lines->Add("SMTP WorkEnd");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
  if(RadioButtonSMTP->Checked && IdSMTP1->Connected()) IdSMTP1->Disconnect(true);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AvSASLBoxDblClick(TObject *Sender)
{
  AddSASLBtnClick(Application);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SASLMechComboDblClick(TObject *Sender)
{
 DelSASLBtnClick(Application);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DownSASLBtnClick(TObject *Sender)
{
  int ind = SASLMechCombo->ItemIndex;
 if (ind < SASLMechCombo->Count) {
  String Str7;
  Str7 = SASLMechCombo->Items->Strings[ind];

  //SASLMechCombo->Items->Strings[ind] = SASLMechCombo->Items->Strings[ind+1];
  //SASLMechCombo->Items->Strings[ind+1] = Str7;

  //ind=ind+2; // нумерация SASL с 1, а нумерация SASLMechCombo с 0
  ind = ind +1;

  if (Pos(AnsiString(IdSASLAnonymous1->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLAnonymous1));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLAnonymous1;
  }

  if (Pos(AnsiString(IdSASLCRAMMD51->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLCRAMMD51));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLCRAMMD51;
  }

  if (Pos(AnsiString(IdSASLCRAMSHA11->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLCRAMSHA11));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLCRAMSHA11;
  }

  if (Pos(AnsiString(IdSASLDigest1->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLDigest1));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLDigest1;
  }

  if (Pos(AnsiString(IdSASLExternal1->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLExternal1));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLExternal1;
  }

  if (Pos(AnsiString(IdSASLLogin1->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLLogin1));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLLogin1;
  }

  if (Pos(AnsiString(IdSASLNTLM1->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLNTLM1));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLNTLM1;
   LMEdit->Enabled = false;
   Label23->Enabled = false;
   Label12->Enabled = false;
   Edit3->Enabled = false;
  }

  if (Pos(AnsiString(IdSASLOTP1->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLOTP1));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLOTP1;
  }

  if (Pos(AnsiString(IdSASLPlain1->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLPlain1));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLPlain1;
  }

  if (Pos(AnsiString(IdSASLSKey1->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLSKey1));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLSKey1;
  }


  SASLMechCombo->Clear();
  for(int i=0;i<IdSMTP1->SASLMechanisms->Count;i++) {
   SASLMechCombo->Items->Add(AnsiString(IdSMTP1->SASLMechanisms->Items[i]->SASL->ServiceName()));
  }


  if(ind < SASLMechCombo->Count) SASLMechCombo->ItemIndex = ind;
  else SASLMechCombo->ItemIndex = SASLMechCombo->Count;
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::UpSASLBtnClick(TObject *Sender)
{
  int ind = SASLMechCombo->ItemIndex;
 if (ind > 0) {
  String Str7;
  Str7 = SASLMechCombo->Items->Strings[ind];

  ind = ind -1;

  if (Pos(AnsiString(IdSASLAnonymous1->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLAnonymous1));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLAnonymous1;

  }

  if (Pos(AnsiString(IdSASLCRAMMD51->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLCRAMMD51));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLCRAMMD51;
  }

  if (Pos(AnsiString(IdSASLCRAMSHA11->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLCRAMSHA11));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLCRAMSHA11;
  }

  if (Pos(AnsiString(IdSASLDigest1->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLDigest1));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLDigest1;
  }

  if (Pos(AnsiString(IdSASLExternal1->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLExternal1));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLExternal1;
  }

  if (Pos(AnsiString(IdSASLLogin1->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLLogin1));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLLogin1;
  }

  if (Pos(AnsiString(IdSASLNTLM1->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLNTLM1));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLNTLM1;
   LMEdit->Enabled = false;
   Label23->Enabled = false;
   Label12->Enabled = false;
   Edit3->Enabled = false;
  }

  if (Pos(AnsiString(IdSASLOTP1->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLOTP1));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLOTP1;
  }

  if (Pos(AnsiString(IdSASLPlain1->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLPlain1));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLPlain1;
  }

  if (Pos(AnsiString(IdSASLSKey1->ServiceName()), Str7)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLSKey1));
   IdSMTP1->SASLMechanisms->Insert(ind)->SASL = IdSASLSKey1;
  }


  SASLMechCombo->Clear();
  for(int i=0;i<IdSMTP1->SASLMechanisms->Count;i++) {
   SASLMechCombo->Items->Add(AnsiString(IdSMTP1->SASLMechanisms->Items[i]->SASL->ServiceName()));
  }


  SASLMechCombo->ItemIndex = ind;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DelSASLBtnClick(TObject *Sender)
{
   int ind;
  ind = SASLMechCombo->ItemIndex;

  if (ind >= 0) {
  String Str9;

  Str9 = SASLMechCombo->Items->Strings[ind];

  //AvSASLBox->Items->Add(Str9);


  if (Pos(AnsiString(IdSASLAnonymous1->ServiceName()), Str9)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLAnonymous1));
  }

  if (Pos(AnsiString(IdSASLCRAMMD51->ServiceName()), Str9)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLCRAMMD51));
  }

  if (Pos(AnsiString(IdSASLCRAMSHA11->ServiceName()), Str9)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLCRAMSHA11));
  }

  if (Pos(AnsiString(IdSASLDigest1->ServiceName()), Str9)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLDigest1));
  }

  if (Pos(AnsiString(IdSASLExternal1->ServiceName()), Str9)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLExternal1));
  }

  if (Pos(AnsiString(IdSASLLogin1->ServiceName()), Str9)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLLogin1));
  }

  if (AnsiString(IdSASLNTLM1->ServiceName()) == Str9) {
   //IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLNTLM1));

   for(int i=0;i<IdSMTP1->SASLMechanisms->Count;i++) {
   if( Str9 == AnsiString(IdSMTP1->SASLMechanisms->Items[i]->SASL->ServiceName()) ) {
    IdSMTP1->SASLMechanisms->Delete(i);
   }
  }
   Label23->Enabled = false;
   LMEdit->Enabled = false;
   Label12->Enabled = false;
   Edit3->Enabled = false;
  }

  if (Pos(AnsiString(IdSASLOTP1->ServiceName()), Str9)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLOTP1));
  }

  if (Pos(AnsiString(IdSASLPlain1->ServiceName()), Str9)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLPlain1));
  }

  if (Pos(AnsiString(IdSASLSKey1->ServiceName()), Str9)) {
   IdSMTP1->SASLMechanisms->Delete(IdSMTP1->SASLMechanisms->IndexOfComp(IdSASLSKey1));
  }

  //SASLMechCombo->Items->Delete(SASLMechCombo->ItemIndex);

  SASLMechCombo->Clear();
  for(int i=0;i<IdSMTP1->SASLMechanisms->Count;i++) {
   SASLMechCombo->Items->Add(AnsiString(IdSMTP1->SASLMechanisms->Items[i]->SASL->ServiceName()));
  }

  if(ind > 0) SASLMechCombo->ItemIndex = ind - 1;
  else SASLMechCombo->ItemIndex = 0;

 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AddSASLBtnClick(TObject *Sender)
{
  int ind;
 bool bPresent = false;

 ind = AvSASLBox->ItemIndex;

 if (ind >= 0) {
  String Str8;
  Str8 = AvSASLBox->Items->Strings[ind];

  //SASLMechCombo->Items->Add(Str8);

  if (Str8 == AnsiString(IdSASLAnonymous1->ServiceName())) {
    for(int i=0; i<SASLMechCombo->Count; i++) {
      if( AnsiString(IdSASLAnonymous1->ServiceName()) ==
       SASLMechCombo->Items->Strings[i] ) {
     	bPresent = true;
     	break;
      }
      else bPresent = false;
    }
    if(!bPresent) IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLAnonymous1;
  }

  if (Pos(AnsiString(IdSASLCRAMMD51->ServiceName()), Str8)) {
   for(int i=0; i<SASLMechCombo->Count; i++) {
     if( AnsiString(IdSASLCRAMMD51->ServiceName()) ==
       SASLMechCombo->Items->Strings[i] ) {
     	bPresent = true;
     	break;
     }
     else bPresent = false;
   }
   if(!bPresent)IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLCRAMMD51;
  }

  if (Pos(AnsiString(IdSASLCRAMSHA11->ServiceName()), Str8)) {
    for(int i=0; i<SASLMechCombo->Count; i++) {
      if( AnsiString(IdSASLCRAMSHA11->ServiceName()) ==
       SASLMechCombo->Items->Strings[i] ) {
     	bPresent = true;
     	break;
      }
      else bPresent = false;
    }
    if(!bPresent)IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLCRAMSHA11;
  }

  if (Pos(AnsiString(IdSASLDigest1->ServiceName()), Str8)) {
    for(int i=0; i<SASLMechCombo->Count; i++) {
      if( AnsiString(IdSASLDigest1->ServiceName()) ==
       SASLMechCombo->Items->Strings[i] ) {
     	bPresent = true;
     	break;
      }
      else bPresent = false;
    }
    if(!bPresent)IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLDigest1;
  }

  if (Pos(AnsiString(IdSASLExternal1->ServiceName()), Str8)) {
    for(int i=0; i<SASLMechCombo->Count; i++) {
      if( AnsiString(IdSASLExternal1->ServiceName()) == SASLMechCombo->Items->Strings[i] ) {
     	bPresent = true;
     	break;
      }
      else bPresent = false;
    }
    if(!bPresent)IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLExternal1;
  }

  if (Pos(AnsiString(IdSASLLogin1->ServiceName()), Str8)) {
    for(int i=0; i<SASLMechCombo->Count; i++) {
      if( AnsiString(IdSASLLogin1->ServiceName()) ==
       SASLMechCombo->Items->Strings[i] ) {
     	bPresent = true;
     	break;
      }
      else bPresent = false;
    }
    if(!bPresent)IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLLogin1;
  }

  if (Pos(AnsiString(IdSASLNTLM1->ServiceName()), Str8)) {
   for(int i=0; i<SASLMechCombo->Count; i++) {
      if( AnsiString(IdSASLNTLM1->ServiceName()) ==
       SASLMechCombo->Items->Strings[i] ) {
     	bPresent = true;
     	break;
      }
      else bPresent = false;
    }
   if(!bPresent) {
    IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLNTLM1;
    LMEdit->Enabled = true;
    Label23->Enabled = true;
    Label12->Enabled = true;
    Edit3->Enabled = true;
   }
  }

  if (Pos(AnsiString(IdSASLOTP1->ServiceName()), Str8)) {
    for(int i=0; i<SASLMechCombo->Count; i++) {
      if( AnsiString(IdSASLOTP1->ServiceName()) ==
       SASLMechCombo->Items->Strings[i] ) {
     	bPresent = true;
     	break;
      }
      else bPresent = false;
    }
    if(!bPresent) IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLOTP1;
  }

  if (Pos(AnsiString(IdSASLPlain1->ServiceName()), Str8)) {
    for(int i=0; i<SASLMechCombo->Count; i++) {
      if( AnsiString(IdSASLPlain1->ServiceName()) ==
       SASLMechCombo->Items->Strings[i] ) {
     	bPresent = true;
     	break;
      }
      else bPresent = false;
    }
    if(!bPresent) IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLPlain1;
  }

  if (Pos(AnsiString(IdSASLSKey1->ServiceName()), Str8)) {
    for(int i=0; i<SASLMechCombo->Count; i++) {
      if( AnsiString(IdSASLSKey1->ServiceName()) ==
       SASLMechCombo->Items->Strings[i] ) {
     	bPresent = true;
     	break;
      }
      else bPresent = false;
    }
    if(!bPresent) IdSMTP1->SASLMechanisms->Add()->SASL = IdSASLSKey1;
  }

  //AvSASLBox->Items->Delete(AvSASLBox->ItemIndex);

  SASLMechCombo->Clear();
  for(int i=0;i<IdSMTP1->SASLMechanisms->Count;i++) {
   SASLMechCombo->Items->Add(AnsiString(IdSMTP1->SASLMechanisms->Items[i]->SASL->ServiceName()));
  }
  SASLMechCombo->ItemIndex = ind;
 }

}




//---------------------------------------------------------------------------
void __fastcall TForm1::LMDEdit8CustomButtons0Click(TObject *Sender, int index)
{
 if (!LMDEdit8->Text.IsEmpty()) {
  SaveChkBox->Checked = true;
  LMDEdit8->Text = IdSASLCRAMMD51->BuildKeydAuth(LMDEdit8->Text, LMDEdit7->Text);

  // работа с паролем
  String str0, str1;
  //-----------------------------------------
  str0 = IntToStr(Application->GetHashCode());
  str1 = IntToStr(Application->GetHashCode() | Application->DesignInfo);
  po = str0.Length();
  for (int i=1; i<po;i++) {
   str0 = str0 + str0.SubString(i+1,i-1);
  }
  IdUserPassProvider1->Password = IdSASLCRAMMD51->BuildKeydAuth(Str, LMDEdit7->Text);

  po = str0.Length();
  for (int i=1; i<po;i++) {
   str0 = str0 + str0.SubString(i-1,i+1);
  }
  IdUserPassProvider1->Password = IdSASLCRAMMD51->BuildKeydAuth(IdUserPassProvider1->Password + Str, LMDEdit7->Text);
  //==========================================

  IdUserPassProvider1->Username = LMDEdit7->Text;

  ElInputDialog1->Prompt = "еще раз.\nПользователь:	" + LMDEdit7->Text + "\nПароль:";
  ElInputDialog1->Value = "";

  if(ElInputDialog1->Execute())   {
   IdUserPassProvider1->Password = ElInputDialog1->Value;
   ElInputDialog1->Value = "";
  }

  //-------------------------------------------
  for (int i=1; i<po;i++) {
   str0 = str0 + Str.SubString(i+1,i-1);
  }
  //==========================================
  try {
  long int key = (long int) str0[12] / (LMDEdit8->Text !=
   IdSASLCRAMMD51->BuildKeydAuth(IdUserPassProvider1->Password, LMDEdit7->Text))? 16: 0;
  }
  catch(...) {
   IdSMTP1->Password = IdUserPassProvider1->Password;
  }
 }
}

//---------------------------------------------------------------------------

void __fastcall TForm1::SmtpAuthTypeComboClick(TObject *Sender)
{
 if(SmtpAuthTypeCombo->Text == "SASL") {
  IdSMTP1->AuthType = satSASL;
  AvSASLBox->Enabled = true;
  SASLMechCombo->Enabled = true;
  AddSASLBtn->Enabled = true;
  DelSASLBtn->Enabled = true;
  UpSASLBtn->Enabled = true;
  DownSASLBtn->Enabled = true;
  Label22->Enabled = true;
  Label23->Enabled = true;
  LMEdit->Enabled = true;
  Label12->Enabled = true;
  Edit3->Enabled = true;
 }
 if(SmtpAuthTypeCombo->Text == "Default") {
  IdSMTP1->AuthType = satDefault;
  AvSASLBox->Enabled = false;
  SASLMechCombo->Enabled = false;
  AddSASLBtn->Enabled = false;
  DelSASLBtn->Enabled = false;
  UpSASLBtn->Enabled = false;
  DownSASLBtn->Enabled = false;
  Label22->Enabled = false;
  Label23->Enabled = false;
  LMEdit->Enabled = false;
  Label12->Enabled = false;
  Edit3->Enabled = false;
 }
 if(SmtpAuthTypeCombo->Text == "None") {
  IdSMTP1->AuthType = satNone;
  AvSASLBox->Enabled = false;
  SASLMechCombo->Enabled = false;
  AddSASLBtn->Enabled = false;
  DelSASLBtn->Enabled = false;
  UpSASLBtn->Enabled = false;
  DownSASLBtn->Enabled = false;
  Label22->Enabled = false;
  Label23->Enabled = false;
  LMEdit->Enabled = false;
  Label12->Enabled = false;
  Edit3->Enabled = false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TLSComBoxClick(TObject *Sender)
{

 if(TLSComBox->Text == "NoTLS") {
  if(RadioButtonSMTP->Checked) {
  IdSMTP1->UseTLS = utNoTLSSupport;
  }
  else if(RadioButtonIMAP->Checked) {
   IdIMAP41->UseTLS = utUseRequireTLS;
  }
 }
 if(TLSComBox->Text == "Explicit")  {
  if(RadioButtonSMTP->Checked) {
  IdSMTP1->UseTLS = utUseExplicitTLS;
  IdSMTP1->UseEhlo = true;
  EhloChkBox->Checked = true;
  }
  else if(RadioButtonIMAP->Checked) {
   IdIMAP41->UseTLS = utUseRequireTLS;
  }
 }
 if(TLSComBox->Text == "Implicit") {
  if(RadioButtonSMTP->Checked) {
  IdSMTP1->UseTLS = utUseImplicitTLS;
  }
  else if(RadioButtonIMAP->Checked) {
   IdIMAP41->UseTLS = utUseImplicitTLS;
  }
 }
 if(TLSComBox->Text == "Require") {
  if(RadioButtonSMTP->Checked) {
  IdSMTP1->UseTLS = utUseRequireTLS;
  IdSMTP1->UseEhlo = true;
  EhloChkBox->Checked = true;
  }
   else if(RadioButtonIMAP->Checked) {
   IdIMAP41->UseTLS = utUseRequireTLS;
  }
 }

}

//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  LMDIniCtrl1->WriteString("Server", "Host", EditSMTP->Text);
  LMDIniCtrl1->WriteString("ServerIMAP", "Host", EditIMAP->Text);
  LMDIniCtrl1->WriteString("Server", "Port", LMDEdit3->Text);
  if(RadioButtonSMTP->Checked)    LMDIniCtrl1->WriteString("Server", "Type", "SMTP");
  else if(RadioButtonIMAP->Checked) LMDIniCtrl1->WriteString("Server", "Type", "IMAP");
  else if(RadioButtonMAPI->Checked) LMDIniCtrl1->WriteString("Server", "Type", "MAPI");


  LMDIniCtrl1->WriteString("Server", "User", LMDEdit7->Text);
  if(SaveChkBox->Checked) {
   LMDIniCtrl1->WriteString("Server", "Password", IdUserPassProvider1->Password); //LMDEdit8->Text);
  }
  LMDIniCtrl1->WriteBool("Server", "Save", SaveChkBox->Checked);
  LMDIniCtrl1->WriteString("Server", "Subject", LMDEdit4->Text);
  LMDIniCtrl1->WriteString("Server", "Mailagent", Edit2->Text);
  LMDIniCtrl1->WriteString("Server", "From", LMDEdit2->Text);
  LMDIniCtrl1->WriteString("Server", "To", LMDEdit1->Text);

  LMDIniCtrl1->WriteBool("SMTP", "Authenticate", AuthChkBox->Checked);
  LMDIniCtrl1->WriteBool("SMTP", "PipeLine", CheckBox9->Checked);
  LMDIniCtrl1->WriteBool("SMTP", "UseVerp", CheckBox11->Checked);
  LMDIniCtrl1->WriteBool("SMTP", "UseEHLO", EhloChkBox->Checked);
  LMDIniCtrl1->WriteBool("SMTP", "ValidateAutoLoginCapab", CheckBox10->Checked);
  LMDIniCtrl1->WriteString("SMTP", "AuthType", SmtpAuthTypeCombo->Text);
  LMDIniCtrl1->WriteString("SMTP", "UseTLS", TLSComBox->Text);
  LMDIniCtrl1->WriteInteger("SMTP", "LMCompat", LMEdit->Value);
  LMDIniCtrl1->WriteString("SMTP", "Domain", Edit3->Text);
  LMDIniCtrl1->Save();
}
//---------------------------------------------------------------------------
/*
UnicodeString __fastcall GetSysUserDomainName()
{
    //wchar_t * sRes;
    UnicodeString sRes;
    PSID psid = NULL;
	SID_IDENTIFIER_AUTHORITY ntAuth = SECURITY_NT_AUTHORITY;
	AllocateAndInitializeSid( &ntAuth, 1, SECURITY_LOCAL_SYSTEM_RID, 0, 0, 0, 0, 0, 0, 0, &psid );

	WCHAR szUser[48];
	WCHAR szDomain[17];
	DWORD cchUser = COUNTOF( szUser ), cchDomain = COUNTOF( szDomain );

	SID_NAME_USE use;

	BOOL bRes = LookupAccountSid( NULL, psid, szUser, &cchUser, szDomain, &cchDomain, &use );
	if( bRes )
	{
		//wsprintf(sRes, L"LocalSystemUser: %s\\%s\n", szDomain, szUser );
          sRes.cat_sprintf(L"LocalSystemUser: %s\\%s\n", szDomain, szUser);
	}
	else  {
                //wsprintf(sRes, L"LocalSystemUser: <failed>\n" );
                sRes = L"LocalSystemUser: <failed>\n";
             }


	FreeSid(psid);
        return sRes;

}
*/

//---------------------------------------------------------------------------

UnicodeString __fastcall GetUserDomainName()
{

 HWND hwndProgman = FindWindow( L"Progman", NULL );
        UnicodeString sRes;
        PSID psid = NULL;
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
			psid = ptu->User.Sid;
			WCHAR szUser[48];
			WCHAR szDomain[17];
			DWORD cchUser = COUNTOF( szUser ), cchDomain = COUNTOF( szDomain );
			SID_NAME_USE use;
			BOOL bRes = LookupAccountSid( NULL, psid, szUser, &cchUser, szDomain, &cchDomain, &use );
			if( bRes )
			{
			 //wsprintf(sRes1, L"User: %s\\%s\n", szDomain, szUser );
                         sRes.cat_sprintf(L"%s\\%s", szDomain, szUser);
                          //wcscpy(sRes1, szDomain);
                          //wcscat(sRes1, L"\\");
                          //wcscat(sRes1, szUser);
			}
			else
			 //wsprintf(sRes1, L"User: <failed>\n" );
                         sRes = L"User: <failed>";
			LocalFree(ptu);
		}
		CloseHandle( hTok );
		CloseHandle( hProc );
	}
        else  //wcscpy (sRes1, L"not success");
            sRes = L"User: <not success>\n";
        FreeSid(psid);
        return sRes;
}

void __fastcall TForm1::SaveChkBoxClick(TObject *Sender)
{
 if(!SaveChkBox->Checked) {
  LMDIniCtrl1->WriteString("Server", "Password", "");
  LMDEdit8->Text = "";
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButtonIMAPClick(TObject *Sender)
{
 IdIMAP41->UseTLS = utUseRequireTLS;
 if(TLSComBox->Text == "NoTLS") LMDEdit3->Text = "143";
 EditSMTP->Enabled = false;
 EditIMAP->Enabled = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::RadioButtonSMTPClick(TObject *Sender)
{
 EditSMTP->Enabled = true;
 EditIMAP->Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
 if(RadioButtonSMTP->Checked && !IdSMTP1->Connected()) IdSMTP1->Connect();
}
//---------------------------------------------------------------------------


