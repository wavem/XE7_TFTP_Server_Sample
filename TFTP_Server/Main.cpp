//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvMemo"
#pragma resource "*.dfm"
TFormMain *FormMain;
//---------------------------------------------------------------------------
__fastcall TFormMain::TFormMain(TComponent* Owner)
	: TForm(Owner)
{
	InitProgram();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::InitProgram() {
	TFTP_Server->Active = true;

	PrintMsg(L"Init Complete");
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::FormClose(TObject *Sender, TCloseAction &Action)
{
	ExitProgram();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::ExitProgram() {
	// EXIT Routine
    if(TFTP_Server->Active) {
        TFTP_Server->Active = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::PrintMsg(UnicodeString _str) {
	int t_Idx = memo->Lines->Add(_str);
    memo->SetCursor(0, t_Idx);
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::TFTP_ServerStatus(TObject *ASender, const TIdStatus AStatus,
          const UnicodeString AStatusText)
{
	UnicodeString tempStr = L"";
    tempStr = L"[STATUS] : ";
    tempStr += AStatusText;
    PrintMsg(tempStr);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::TFTP_ServerConnected(TObject *Sender)
{
	PrintMsg(L"On Connected");
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::TFTP_ServerDisconnected(TObject *Sender)
{
	PrintMsg(L"On Disconnected");
}
//---------------------------------------------------------------------------

