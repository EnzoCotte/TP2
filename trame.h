//---------------------------------------------------------------------------

#ifndef trameH
#define trameH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <vector>
#include "RS232.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TButton *ButtonSend;
	TMemo *Memo1;
	TEdit *Edit1;
	TButton *Button1;

	void __fastcall ButtonSendClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button1Click(TObject *Sender);
private:	// Déclarations utilisateur
	RS232 port;
	//OVERLAPPED over;
	std::vector<char> received;
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
