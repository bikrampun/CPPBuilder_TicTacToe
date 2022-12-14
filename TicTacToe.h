//---------------------------------------------------------------------------
#ifndef TicTacToeH
#define TicTacToeH
//---------------------------------------------------------------------------
#include <vcl\Classes.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TButton *btnTic1;
        TButton *btnTic2;
        TButton *btnTic3;
        TButton *btnTic4;
        TButton *btnTic5;
        TButton *btnTic6;
        TButton *btnTic7;
        TButton *btnTic8;
        TButton *btnTic9;
        TButton *btnReset;
        TButton *btnNewGame;
        TButton *btnExit;
        TLabel *Label1;
        TLabel *lblPlayerX;
        TLabel *Label3;
        TLabel *lblPlayerO;
        TPanel *Panel2;
        void __fastcall btnExitClick(TObject *Sender);
        void __fastcall scoreKeeper(TObject *Sender);
        void __fastcall callEnable(TObject *Sender);
        void __fastcall btnNewGameClick(TObject *Sender);
        void __fastcall btnResetClick(TObject *Sender);
        
        void __fastcall btnTic1Click(TObject *Sender);
        void __fastcall btnTic2Click(TObject *Sender);
        void __fastcall btnTic3Click(TObject *Sender);
        void __fastcall btnTic4Click(TObject *Sender);
        void __fastcall btnTic5Click(TObject *Sender);
        void __fastcall btnTic6Click(TObject *Sender);
        void __fastcall btnTic7Click(TObject *Sender);
        void __fastcall btnTic8Click(TObject *Sender);
        void __fastcall btnTic9Click(TObject *Sender);

    
        
        
        
        
        
        
        
        
        
        
        
        
        
        
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
