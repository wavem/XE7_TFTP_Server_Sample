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


	PrintMsg(L"Init Complete");
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::PrintMsg(UnicodeString _str) {
	int t_Idx = memo->Lines->Add(_str);
    memo->SetCursor(0, t_Idx);
}
//---------------------------------------------------------------------------
