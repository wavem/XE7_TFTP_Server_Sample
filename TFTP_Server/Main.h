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
#include <IdContext.hpp>
#include <IdTrivialFTP.hpp>
#include <IdUDPBase.hpp>
#include <IdUDPClient.hpp>
//---------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:	// IDE-managed Components
	TAdvMemo *memo;
	TIdTrivialFTP *TFTP_Server;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall TFTP_ServerStatus(TObject *ASender, const TIdStatus AStatus, const UnicodeString AStatusText);
	void __fastcall TFTP_ServerConnected(TObject *Sender);
	void __fastcall TFTP_ServerDisconnected(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TFormMain(TComponent* Owner);

public: // START
	void __fastcall InitProgram();
    void __fastcall ExitProgram();
    void __fastcall PrintMsg(UnicodeString _str);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
#endif
