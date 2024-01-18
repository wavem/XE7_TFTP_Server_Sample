//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvMemo.hpp"
#include <IdBaseComponent.hpp>
#include <IdCmdTCPServer.hpp>
#include <IdComponent.hpp>
#include <IdCustomTCPServer.hpp>
#include <IdExplicitTLSClientServerBase.hpp>
#include <IdFTPServer.hpp>
#include <IdTCPServer.hpp>
//---------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:	// IDE-managed Components
	TAdvMemo *memo;
	TIdFTPServer *TFTP_Server;
private:	// User declarations
public:		// User declarations
	__fastcall TFormMain(TComponent* Owner);

public: // START
	void __fastcall InitProgram();
    void __fastcall PrintMsg(UnicodeString _str);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
#endif
