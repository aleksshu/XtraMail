//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "LMDBaseControl.hpp"
#include "LMDBaseEdit.hpp"
#include "LMDBaseGraphicControl.hpp"
#include "LMDBaseLabel.hpp"
#include "LMDControl.hpp"
#include "LMDCustomBevelPanel.hpp"
#include "LMDCustomComponent.hpp"
#include "LMDCustomControl.hpp"
#include "LMDCustomEdit.hpp"
#include "LMDCustomExtSpinEdit.hpp"
#include "LMDCustomMaskEdit.hpp"
#include "LMDCustomPanel.hpp"
#include "LMDCustomSimpleLabel.hpp"
#include "LMDEdit.hpp"
#include "LMDMapi.hpp"
#include "LMDSimpleLabel.hpp"
#include "LMDSpinEdit.hpp"
#include "LMDWebBase.hpp"
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdExplicitTLSClientServerBase.hpp>
#include <IdIOHandler.hpp>
#include <IdIOHandlerSocket.hpp>
#include <IdIOHandlerStack.hpp>
#include <IdMessage.hpp>
#include <IdMessageClient.hpp>
#include <IdSASL.hpp>
#include <IdSASL_CRAM_MD5.hpp>
#include <IdSASL_CRAM_SHA1.hpp>
#include <IdSASL_CRAMBase.hpp>
#include <IdSASLAnonymous.hpp>
#include <IdSASLDigest.hpp>
#include <IdSASLExternal.hpp>
#include <IdSASLLogin.hpp>
#include <IdSASLOTP.hpp>
#include <IdSASLPlain.hpp>
#include <IdSASLSKey.hpp>
#include <IdSASLUserPass.hpp>
#include <IdSMTP.hpp>
#include <IdSMTPBase.hpp>
#include <IdSSL.hpp>
#include <IdSSLOpenSSL.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <IdUserPassProvider.hpp>

#include "IdSASL_NTLM.hpp"
#include "ElComponent.hpp"
#include "ElInputDlg.hpp"
#include "LMDIniCtrl.hpp"
#include "LMDCustomButtonGroup.hpp"
#include "LMDCustomGroupBox.hpp"
#include "LMDCustomParentPanel.hpp"
#include "LMDCustomRadioGroup.hpp"
#include "LMDRadioGroup.hpp"
#include <IdIMAP4.hpp>
#include "LMDCheckListComboBox.hpp"
#include "LMDCustomExtCombo.hpp"

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLMDEdit *EditSMTP;
	TLMDEdit *LMDEdit3;
	TCheckBox *CheckBox11;
	TCheckBox *CheckBox10;
	TCheckBox *EhloChkBox;
	TButton *Button1;
	TCheckBox *AuthChkBox;
	TCheckBox *CheckBox9;
	TListBox *AvSASLBox;
	TLabel *Label2;
	TComboBox *SmtpAuthTypeCombo;
	TLabel *Label32;
	TComboBox *TLSComBox;
	TLabel *Label22;
	TButton *AddSASLBtn;
	TButton *DelSASLBtn;
	TButton *UpSASLBtn;
	TButton *DownSASLBtn;
	TLMDEdit *LMDEdit7;
	TLMDSimpleLabel *LMDSimpleLabel2;
	TLabel *Label23;
	TLMDSpinEdit *LMEdit;
	TLMDSimpleLabel *LMDSimpleLabel3;
	TLMDEdit *LMDEdit8;
	TLabel *Label8;
	TEdit *Edit2;
	TLabel *Label6;
	TLabel *Label10;
	TLMDEdit *LMDEdit2;
	TLMDEdit *LMDEdit4;
	TLabel *Label1;
	TLabel *Label3;
	TListBox *SASLMechCombo;
	TIdUserPassProvider *IdUserPassProvider1;
	TIdSASLAnonymous *IdSASLAnonymous1;
	TIdSASLSKey *IdSASLSKey1;
	TIdSASLCRAMMD5 *IdSASLCRAMMD51;
	TIdSASLDigest *IdSASLDigest1;
	TIdSASLLogin *IdSASLLogin1;
	TIdSASLCRAMSHA1 *IdSASLCRAMSHA11;
	TIdSASLExternal *IdSASLExternal1;
	TIdSASLOTP *IdSASLOTP1;
	TIdSASLPlain *IdSASLPlain1;
	TIdSMTP *IdSMTP1;
	TIdMessage *IdMessage1;
	TLMDMapiSendMail *LMDMapiSendMail1;
	TIdSSLIOHandlerSocketOpenSSL *IdSSLIOHandlerSocketOpenSSL1;
	TLabel *Label4;
	TLabel *Label5;
	TMemo *Memo1;
	TButton *SendBtn;
	TLMDEdit *LMDEdit1;
	TLabel *Label7;
	TMemo *Memo2;
	TLabel *Label9;
	TLabel *Label11;
	TElInputDialog *ElInputDialog1;
	TLMDIniCtrl *LMDIniCtrl1;
	TEdit *Edit3;
	TLabel *Label12;
	TEdit *Edit4;
	TLabel *Label13;
	TLMDRadioGroup *LMDRadioGroup1;
	TRadioButton *RadioButtonSMTP;
	TRadioButton *RadioButtonIMAP;
	TRadioButton *RadioButtonMAPI;
	TCheckBox *SaveChkBox;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TIdIMAP4 *IdIMAP41;
	TLMDEdit *EditIMAP;
	TButton *Button3;
	TEdit *SSLPortEdit;
	TLabel *Label17;
	TComboBox *ReuseSockCmbBox;
	TLabel *Label18;
	TEdit *TimeoutEdit;
	TLabel *Label19;
	TLabel *Label20;
	TComboBox *SSLMethodCmbBox;
	TComboBox *SSLModeCmbBox;
	TLabel *Label21;
	TLMDCheckListComboBox *SSLVersChkLstCmbBox;
	TLabel *Label24;
	TCheckBox *SSLChkBox;
	void __fastcall SendBtnClick(TObject *Sender);
	void __fastcall IdSMTP1FailedRecipient(TObject *Sender, const UnicodeString AAddress,
          const UnicodeString ACode, const UnicodeString AText,
          bool &VContinue);
	void __fastcall IdSMTP1Status(TObject *ASender, const TIdStatus AStatus, const UnicodeString AStatusText);
	void __fastcall IdSMTP1TLSNotAvailable(TObject *Asender, bool &VContinue);
	void __fastcall IdSMTP1Work(TObject *ASender, TWorkMode AWorkMode, __int64 AWorkCount);
	void __fastcall IdSMTP1WorkBegin(TObject *ASender, TWorkMode AWorkMode, __int64 AWorkCountMax);
	void __fastcall IdSMTP1WorkEnd(TObject *ASender, TWorkMode AWorkMode);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall AvSASLBoxDblClick(TObject *Sender);
	void __fastcall SASLMechComboDblClick(TObject *Sender);
	void __fastcall DownSASLBtnClick(TObject *Sender);
	void __fastcall UpSASLBtnClick(TObject *Sender);
	void __fastcall DelSASLBtnClick(TObject *Sender);
	void __fastcall AddSASLBtnClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall LMDEdit8CustomButtons0Click(TObject *Sender, int index);
	void __fastcall SmtpAuthTypeComboClick(TObject *Sender);
	void __fastcall TLSComBoxClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall SaveChkBoxClick(TObject *Sender);
	void __fastcall RadioButtonIMAPClick(TObject *Sender);
	void __fastcall RadioButtonSMTPClick(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);





private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
//UnicodeString __fastcall GetSysUserDomainName();
UnicodeString __fastcall GetUserDomainName();
#endif
