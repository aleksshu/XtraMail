object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'XtraMail'
  ClientHeight = 444
  ClientWidth = 717
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  ShowHint = True
  OnClose = FormClose
  OnCreate = FormCreate
  DesignSize = (
    717
    444)
  PixelsPerInch = 96
  TextHeight = 13
  object Label2: TLabel
    Left = 85
    Top = 154
    Width = 51
    Height = 13
    Caption = 'AuthType:'
  end
  object Label32: TLabel
    Left = 148
    Top = 113
    Width = 39
    Height = 13
    Caption = 'UseTLS:'
  end
  object Label22: TLabel
    Left = 11
    Top = 185
    Width = 47
    Height = 13
    Caption = 'Available:'
  end
  object LMDSimpleLabel2: TLMDSimpleLabel
    Left = 213
    Top = 5
    Width = 28
    Height = 15
    Caption = 'User:'
    Options = []
  end
  object Label23: TLabel
    Left = 143
    Top = 39
    Width = 44
    Height = 13
    Caption = 'LMComp:'
  end
  object LMDSimpleLabel3: TLMDSimpleLabel
    Left = 206
    Top = 26
    Width = 36
    Height = 15
    Caption = 'Passw:'
    Options = []
  end
  object Label8: TLabel
    Left = 386
    Top = 26
    Width = 47
    Height = 13
    Caption = 'MailAgent'
  end
  object Label6: TLabel
    Left = 442
    Top = 86
    Width = 44
    Height = 13
    Anchors = [akTop, akRight]
    Caption = #1054#1090' '#1082#1086#1075#1086':'
    WordWrap = True
    ExplicitLeft = 324
  end
  object Label10: TLabel
    Left = 522
    Top = 3
    Width = 28
    Height = 13
    Anchors = [akTop, akRight]
    Caption = #1058#1077#1084#1072':'
    WordWrap = True
    ExplicitLeft = 404
  end
  object Label1: TLabel
    Left = 11
    Top = 3
    Width = 62
    Height = 13
    Caption = 'E-mail server'
  end
  object Label3: TLabel
    Left = 142
    Top = 3
    Width = 20
    Height = 13
    Caption = 'port'
  end
  object Label4: TLabel
    Left = 8
    Top = 169
    Width = 85
    Height = 13
    Caption = 'SASLMechanisms:'
  end
  object Label5: TLabel
    Left = 174
    Top = 185
    Width = 29
    Height = 13
    Caption = 'Work:'
  end
  object Label7: TLabel
    Left = 454
    Top = 108
    Width = 29
    Height = 13
    Anchors = [akTop, akRight]
    Caption = #1050#1086#1084#1091':'
    WordWrap = True
    ExplicitLeft = 336
  end
  object Label9: TLabel
    Left = 213
    Top = 273
    Width = 21
    Height = 13
    Caption = 'Log:'
  end
  object Label11: TLabel
    Left = 251
    Top = 113
    Width = 46
    Height = 13
    Caption = 'Message:'
  end
  object Label12: TLabel
    Left = 202
    Top = 53
    Width = 39
    Height = 13
    Caption = 'Domain:'
  end
  object Label13: TLabel
    Left = 143
    Top = 72
    Width = 129
    Height = 13
    Caption = 'Current domain\username:'
  end
  object Label14: TLabel
    Left = 396
    Top = 7
    Width = 36
    Height = 13
    Caption = 'Subject'
  end
  object Label15: TLabel
    Left = 336
    Top = 86
    Width = 28
    Height = 13
    Caption = 'From:'
  end
  object Label16: TLabel
    Left = 336
    Top = 108
    Width = 16
    Height = 13
    Caption = 'To:'
  end
  object Label17: TLabel
    Left = 561
    Top = 123
    Width = 40
    Height = 13
    Caption = 'SSL Port'
  end
  object Label18: TLabel
    Left = 556
    Top = 147
    Width = 64
    Height = 13
    Caption = 'Reuse socket'
  end
  object Label19: TLabel
    Left = 556
    Top = 175
    Width = 64
    Height = 13
    Caption = 'Read timeout'
  end
  object Label20: TLabel
    Left = 556
    Top = 201
    Width = 56
    Height = 13
    Caption = 'SSL Method'
  end
  object Label21: TLabel
    Left = 556
    Top = 228
    Width = 46
    Height = 13
    Caption = 'SSL Mode'
  end
  object Label24: TLabel
    Left = 556
    Top = 252
    Width = 60
    Height = 13
    Caption = 'SSL Versions'
  end
  object EditSMTP: TLMDEdit
    Left = 8
    Top = 17
    Width = 128
    Height = 21
    Bevel.Mode = bmWindows
    Caret.BlinkRate = 530
    TabOrder = 0
    CustomButtons = <>
    PasswordChar = #0
    Text = 'sng-msg-01v.oao.sng'
  end
  object LMDEdit3: TLMDEdit
    Left = 142
    Top = 17
    Width = 58
    Height = 21
    Bevel.Mode = bmWindows
    Caret.BlinkRate = 530
    TabOrder = 1
    CustomButtons = <>
    PasswordChar = #0
    Text = '25'
  end
  object CheckBox11: TCheckBox
    Left = 4
    Top = 108
    Width = 58
    Height = 17
    Caption = 'UseVerp'
    TabOrder = 2
  end
  object CheckBox10: TCheckBox
    Left = 4
    Top = 131
    Width = 134
    Height = 17
    Caption = 'ValidateAutoLoginCapab'
    TabOrder = 3
  end
  object EhloChkBox: TCheckBox
    Left = 64
    Top = 85
    Width = 61
    Height = 17
    Caption = 'UseEhlo'
    Checked = True
    State = cbChecked
    TabOrder = 4
  end
  object Button1: TButton
    Left = 75
    Top = 61
    Width = 61
    Height = 21
    Hint = 'Disconnect'
    Caption = 'Disconnect'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 5
    OnClick = Button1Click
  end
  object AuthChkBox: TCheckBox
    Left = 65
    Top = 108
    Width = 80
    Height = 17
    Hint = 'Use Authenticate method'
    Caption = 'Authenticate'
    TabOrder = 6
  end
  object CheckBox9: TCheckBox
    Left = 4
    Top = 85
    Width = 58
    Height = 17
    Caption = 'PipeLine'
    TabOrder = 7
  end
  object AvSASLBox: TListBox
    Left = 8
    Top = 201
    Width = 96
    Height = 88
    Enabled = False
    ItemHeight = 13
    TabOrder = 8
    OnDblClick = AvSASLBoxDblClick
  end
  object SmtpAuthTypeCombo: TComboBox
    Left = 142
    Top = 152
    Width = 77
    Height = 21
    TabOrder = 9
    Text = 'SASL'
    OnClick = SmtpAuthTypeComboClick
    Items.Strings = (
      'SASL'
      'Default'
      'None'
      '')
  end
  object TLSComBox: TComboBox
    Left = 142
    Top = 127
    Width = 77
    Height = 21
    TabOrder = 10
    Text = 'NoTLS'
    OnClick = TLSComBoxClick
    Items.Strings = (
      'NoTLS'
      'Explicit'
      'Implicit'
      'Require')
  end
  object AddSASLBtn: TButton
    Left = 71
    Top = 184
    Width = 19
    Height = 17
    Hint = 'Add SASL Mechanism'
    Caption = '->'
    TabOrder = 11
    OnClick = AddSASLBtnClick
  end
  object DelSASLBtn: TButton
    Left = 92
    Top = 184
    Width = 19
    Height = 17
    Hint = 'Remove SASL Mechanism'
    Caption = 'X'
    TabOrder = 12
    OnClick = DelSASLBtnClick
  end
  object UpSASLBtn: TButton
    Left = 117
    Top = 184
    Width = 19
    Height = 17
    Hint = 'Up'
    Caption = '^'
    TabOrder = 13
    OnClick = UpSASLBtnClick
  end
  object DownSASLBtn: TButton
    Left = 137
    Top = 184
    Width = 19
    Height = 17
    Hint = 'Down'
    Caption = 'v'
    TabOrder = 14
    OnClick = DownSASLBtnClick
  end
  object LMDEdit7: TLMDEdit
    Left = 247
    Top = 3
    Width = 133
    Height = 21
    Bevel.Mode = bmWindows
    Caret.BlinkRate = 530
    TabOrder = 15
    CustomButtons = <>
    PasswordChar = #0
  end
  object LMEdit: TLMDSpinEdit
    Left = 142
    Top = 50
    Width = 58
    Height = 21
    Hint = 'LM Compatibility for NTLM authentication'
    Bevel.Mode = bmWindows
    Caret.BlinkRate = 530
    TabOrder = 16
    AutoSelect = True
    CustomButtons = <>
    MaxValue = 5
    Value = 2
    Value = 2
  end
  object LMDEdit8: TLMDEdit
    Left = 247
    Top = 26
    Width = 133
    Height = 21
    Bevel.Mode = bmWindows
    Caret.BlinkRate = 530
    TabOrder = 17
    CustomButtons = <
      item
        Caption = 'ok'
        ParentFont = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        Index = 0
        DisplayName = 'TLMDSpecialButton'
        ImageIndex = 0
        ListIndex = 0
        OnClick = LMDEdit8CustomButtons0Click
        UsePngGlyph = False
      end>
    PasswordChar = '*'
  end
  object Edit2: TEdit
    Left = 440
    Top = 26
    Width = 113
    Height = 21
    TabOrder = 18
    Text = 'The Bat'
  end
  object LMDEdit2: TLMDEdit
    Left = 371
    Top = 81
    Width = 161
    Height = 21
    Bevel.Mode = bmWindows
    Caret.BlinkRate = 530
    TabOrder = 19
    CustomButtons = <>
    PasswordChar = #0
    Text = 'shulaev_av@surgutneftegas.ru'
  end
  object LMDEdit4: TLMDEdit
    Left = 439
    Top = 3
    Width = 114
    Height = 21
    Bevel.Mode = bmWindows
    Caret.BlinkRate = 530
    TabOrder = 20
    CustomButtons = <>
    PasswordChar = #0
    Text = 'Temperature Monitor'
  end
  object SASLMechCombo: TListBox
    Left = 110
    Top = 201
    Width = 97
    Height = 88
    Enabled = False
    ItemHeight = 13
    TabOrder = 21
    OnDblClick = SASLMechComboDblClick
  end
  object Memo1: TMemo
    Left = 8
    Top = 292
    Width = 493
    Height = 151
    Anchors = [akLeft, akTop, akBottom]
    Lines.Strings = (
      '')
    ScrollBars = ssVertical
    TabOrder = 22
  end
  object SendBtn: TButton
    Left = 478
    Top = 53
    Width = 75
    Height = 25
    Caption = 'Send'
    TabOrder = 23
    OnClick = SendBtnClick
  end
  object LMDEdit1: TLMDEdit
    Left = 371
    Top = 105
    Width = 161
    Height = 21
    Bevel.Mode = bmWindows
    Caret.BlinkRate = 530
    TabOrder = 24
    CustomButtons = <>
    PasswordChar = #0
    Text = 'shulaev_av@surgutneftegas.ru'
  end
  object Memo2: TMemo
    Left = 247
    Top = 127
    Width = 303
    Height = 159
    Lines.Strings = (
      #1057#1086#1086#1073#1097#1077#1085#1080#1077' '#1086#1090' 909-78F2 :'
      ' '#1055#1086#1084#1077#1097#1077#1085#1080#1077': '#9#1040#1058#1057'40 '#1072#1082#1082#1091#1084#1091#1083#1103#1090#1086#1088#1085#1072#1103
      ' '#1044#1072#1090#1072', '#1074#1088#1077#1084#1103': 29.06.2012 11:30:26'
      ' '#1057#1086#1073#1099#1090#1080#1077':'
      ' '#1087#1086#1082#1072#1079#1072#1085#1080#1077' '#1076#1072#1090#1095#1080#1082#1072' '#1085#1077' '#1074#1093#1086#1076#1080#1090' '#1074' '#1076#1086#1087#1091#1089#1090#1080#1084#1099#1077' '#1087#1088#1077#1076#1077#1083#1099':'#9#9
      '  '#1058#1077#1084#1087#1077#1088#1072#1090#1091#1088#1072': '#9'25,56 '#1075#1088#1072#1076#1091#1089#1086#1074' '#1062#1077#1083#1100#1089#1080#1103','
      ' '#1042#1083#1072#1078#1085#1086#1089#1090#1100': '#9'33,53 '#1087#1088#1086#1094#1077#1085#1090#1086#1074','
      ' '#1057#1086#1089#1090#1086#1103#1085#1080#1077': '#9#1046#1072#1088#1082#1086'!, '#1042#1083#1072#1078#1085#1086#1089#1090#1100' - '#1053#1086#1088#1084#1072)
    TabOrder = 25
  end
  object Edit3: TEdit
    Left = 247
    Top = 50
    Width = 133
    Height = 21
    TabOrder = 26
  end
  object Edit4: TEdit
    Left = 143
    Top = 86
    Width = 166
    Height = 21
    ReadOnly = True
    TabOrder = 27
  end
  object LMDRadioGroup1: TLMDRadioGroup
    Left = 566
    Top = 5
    Width = 143
    Height = 109
    Bevel.Mode = bmWindows
    BtnAlignment.Alignment = agCenterLeft
    Caption = 'Mail protocol'
    CaptionFont.Charset = DEFAULT_CHARSET
    CaptionFont.Color = clWindowText
    CaptionFont.Height = -11
    CaptionFont.Name = 'Tahoma'
    CaptionFont.Style = []
    TabOrder = 28
  end
  object RadioButtonSMTP: TRadioButton
    Left = 578
    Top = 25
    Width = 44
    Height = 17
    Caption = 'SMTP'
    Checked = True
    TabOrder = 29
    TabStop = True
    OnClick = RadioButtonSMTPClick
  end
  object RadioButtonIMAP: TRadioButton
    Left = 579
    Top = 48
    Width = 43
    Height = 17
    Caption = 'IMAP'
    TabOrder = 30
    OnClick = RadioButtonIMAPClick
  end
  object RadioButtonMAPI: TRadioButton
    Left = 579
    Top = 71
    Width = 43
    Height = 17
    Caption = 'MAPI'
    TabOrder = 31
  end
  object SaveChkBox: TCheckBox
    Left = 381
    Top = 53
    Width = 94
    Height = 17
    Hint = 'This is not safe!'
    Caption = 'Save password'
    Checked = True
    State = cbChecked
    TabOrder = 32
    OnClick = SaveChkBoxClick
  end
  object EditIMAP: TLMDEdit
    Left = 8
    Top = 39
    Width = 128
    Height = 21
    Bevel.Mode = bmWindows
    Caret.BlinkRate = 530
    TabOrder = 33
    CustomButtons = <>
    PasswordChar = #0
    Text = 'sng-msg-01v.oao.sng'
  end
  object Button3: TButton
    Left = 8
    Top = 61
    Width = 61
    Height = 21
    Hint = 'Connect'
    Caption = 'Connect'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 34
    OnClick = Button3Click
  end
  object SSLPortEdit: TEdit
    Left = 624
    Top = 120
    Width = 59
    Height = 21
    TabOrder = 35
    Text = '143'
  end
  object ReuseSockCmbBox: TComboBox
    Left = 626
    Top = 145
    Width = 89
    Height = 21
    TabOrder = 36
    Items.Strings = (
      'rsOSDependent'
      'rsFalse'
      'rsTrue')
  end
  object TimeoutEdit: TEdit
    Left = 624
    Top = 172
    Width = 59
    Height = 21
    TabOrder = 37
    Text = '-1'
  end
  object SSLMethodCmbBox: TComboBox
    Left = 624
    Top = 199
    Width = 89
    Height = 21
    TabOrder = 38
    Items.Strings = (
      'sslvSSLv2'
      'sslvSSLv23'
      'sslvSSLv3'
      'sslvTLSv1')
  end
  object SSLModeCmbBox: TComboBox
    Left = 624
    Top = 225
    Width = 89
    Height = 21
    TabOrder = 39
    Items.Strings = (
      'sslmBoth'
      'sslmClient'
      'sslmServer'
      'sslmUnassigned')
  end
  object SSLVersChkLstCmbBox: TLMDCheckListComboBox
    Left = 624
    Top = 252
    Width = 89
    Height = 21
    Bevel.Mode = bmWindows
    Caret.BlinkRate = 530
    TabOrder = 40
    DraggingAllowed = False
    Items.Strings = (
      'sslvSSLv2'
      'sslvSSLv23'
      'sslvSSLv3'
      'sslvSSLv1')
  end
  object SSLChkBox: TCheckBox
    Left = 587
    Top = 284
    Width = 53
    Height = 17
    Caption = 'SSL'
    TabOrder = 41
  end
  object IdUserPassProvider1: TIdUserPassProvider
    Left = 126
    Top = 390
  end
  object IdSASLAnonymous1: TIdSASLAnonymous
    Tag = 1
    Left = 18
    Top = 197
  end
  object IdSASLSKey1: TIdSASLSKey
    Tag = 1
    UserPassProvider = IdUserPassProvider1
    Left = 19
    Top = 370
  end
  object IdSASLCRAMMD51: TIdSASLCRAMMD5
    Tag = 1
    UserPassProvider = IdUserPassProvider1
    Left = 19
    Top = 238
  end
  object IdSASLDigest1: TIdSASLDigest
    Tag = 1
    UserPassProvider = IdUserPassProvider1
    Left = 15
    Top = 327
  end
  object IdSASLLogin1: TIdSASLLogin
    Tag = 1
    UserPassProvider = IdUserPassProvider1
    Left = 17
    Top = 282
  end
  object IdSASLCRAMSHA11: TIdSASLCRAMSHA1
    Tag = 1
    UserPassProvider = IdUserPassProvider1
    Left = 134
    Top = 201
  end
  object IdSASLExternal1: TIdSASLExternal
    Tag = 1
    Left = 131
    Top = 337
  end
  object IdSASLOTP1: TIdSASLOTP
    Tag = 1
    UserPassProvider = IdUserPassProvider1
    Left = 134
    Top = 247
  end
  object IdSASLPlain1: TIdSASLPlain
    Tag = 1
    UserPassProvider = IdUserPassProvider1
    Left = 132
    Top = 292
  end
  object IdSMTP1: TIdSMTP
    OnStatus = IdSMTP1Status
    IOHandler = IdSSLIOHandlerSocketOpenSSL1
    OnWork = IdSMTP1Work
    OnWorkBegin = IdSMTP1WorkBegin
    OnWorkEnd = IdSMTP1WorkEnd
    MailAgent = 'The Bat!'
    HeloName = 'HELLO'
    OnFailedRecipient = IdSMTP1FailedRecipient
    SASLMechanisms = <
      item
        SASL = IdSASLAnonymous1
      end
      item
        SASL = IdSASLSKey1
      end
      item
        SASL = IdSASLCRAMMD51
      end
      item
        SASL = IdSASLDigest1
      end
      item
        SASL = IdSASLLogin1
      end
      item
        SASL = IdSASLCRAMSHA11
      end
      item
        SASL = IdSASLExternal1
      end
      item
        SASL = IdSASLOTP1
      end
      item
        SASL = IdSASLPlain1
      end>
    OnTLSNotAvailable = IdSMTP1TLSNotAvailable
    Left = 312
    Top = 296
  end
  object IdMessage1: TIdMessage
    AttachmentEncoding = 'MIME'
    BccList = <>
    CharSet = 'windows-1251'
    CCList = <>
    ContentType = 'text'
    Encoding = meMIME
    FromList = <
      item
      end>
    NoDecode = True
    Recipients = <>
    ReplyTo = <>
    ConvertPreamble = True
    Left = 228
    Top = 393
  end
  object LMDMapiSendMail1: TLMDMapiSendMail
    Left = 315
    Top = 399
  end
  object IdSSLIOHandlerSocketOpenSSL1: TIdSSLIOHandlerSocketOpenSSL
    Destination = ':25'
    MaxLineAction = maSplit
    Port = 25
    DefaultPort = 0
    SSLOptions.Method = sslvSSLv23
    SSLOptions.SSLVersions = [sslvSSLv2, sslvSSLv3, sslvTLSv1]
    SSLOptions.Mode = sslmBoth
    SSLOptions.VerifyMode = [sslvrfPeer, sslvrfFailIfNoPeerCert, sslvrfClientOnce]
    SSLOptions.VerifyDepth = 0
    Left = 415
    Top = 240
  end
  object ElInputDialog1: TElInputDialog
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1087#1072#1088#1086#1083#1100' '#1076#1083#1103' SMTP '#1089#1077#1088#1074#1077#1088#1072
    IsHTML = True
    Position = poScreenCenter
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    PasswordChar = '*'
    Left = 231
    Top = 345
  end
  object LMDIniCtrl1: TLMDIniCtrl
    RegPath = 'Software\Alecom\Xtramail'
    EncKey = 54321
    Encoded = True
    Left = 233
    Top = 298
  end
  object IdIMAP41: TIdIMAP4
    IOHandler = IdSSLIOHandlerSocketOpenSSL1
    RetrieveOnSelect = rsHeaders
    SASLMechanisms = <
      item
        SASL = IdSASLAnonymous1
      end
      item
        SASL = IdSASLSKey1
      end
      item
        SASL = IdSASLCRAMMD51
      end
      item
        SASL = IdSASLDigest1
      end
      item
        SASL = IdSASLLogin1
      end
      item
        SASL = IdSASLCRAMSHA11
      end
      item
        SASL = IdSASLExternal1
      end
      item
        SASL = IdSASLOTP1
      end
      item
        SASL = IdSASLPlain1
      end>
    MilliSecsToWaitToClearBuffer = 10
    Left = 315
    Top = 348
  end
end
