object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 300
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object ButtonSend: TButton
    Left = 8
    Top = 26
    Width = 217
    Height = 65
    Caption = 'Envoi'
    TabOrder = 0
    OnClick = ButtonSendClick
  end
  object Memo1: TMemo
    Left = 240
    Top = 136
    Width = 387
    Height = 136
    TabOrder = 1
  end
  object Edit1: TEdit
    Left = 240
    Top = 26
    Width = 387
    Height = 83
    TabOrder = 2
    Text = 'Edit1'
  end
  object Button1: TButton
    Left = 8
    Top = 136
    Width = 217
    Height = 65
    Caption = 'Reception'
    TabOrder = 3
    OnClick = Button1Click
  end
end
