//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "trame.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	port.Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonSendClick(TObject *Sender)
{
	char * texte = new char[Edit1->Text.Length()];
	wcstombs(texte, Edit1->Text.w_str(), Edit1->Text.Length() + 1);
	port.Write(texte, strlen(texte) + 1);
	Edit1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
    port.Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if(port.Read())
	{
		std::deque<char> & buf = port.getBuffer();

		UnicodeString str = "";
		for(int i = 0; i < buf.size() ; i++)
			str = buf[i];

		Memo1->Lines->Add(str);

	}
	else
	{
		//unsigned long errorCode = GetLastError();
		MessageBox(NULL, "Fail", "Fail", 0);
	}
}
//---------------------------------------------------------------------------


