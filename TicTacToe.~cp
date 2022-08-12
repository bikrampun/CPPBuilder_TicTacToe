/*
Class project 2022
BE Software "Day"
*/
//---------------------------------------------------------------------------
#include <vcl\vcl.h>
#pragma hdrstop

#include "TicTacToe.h"
//---------------------------------------------------------------------------
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
//here, checker is used to check the button enable or not.
bool checker=false;
//---------------------------------------------------------------------------
void __fastcall TForm1::callEnable(TObject *Sender)
{
        btnTic1->Enabled = false;
        btnTic2->Enabled = false;
        btnTic3->Enabled = false;
        btnTic3->Enabled = false;
        btnTic4->Enabled = false;
        btnTic5->Enabled = false;
        btnTic6->Enabled = false;
        btnTic7->Enabled = false;
        btnTic8->Enabled = false;
        btnTic9->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::scoreKeeper(TObject *Sender)
{
        Integer i,j;
        //here, i,j are variable to keep value of score
        i = StrToInt(lblPlayerX->Caption);
        j = StrToInt(lblPlayerO->Caption);

        //here, we check the player has win or not.
        if(((btnTic1->Caption=="X") && (btnTic2->Caption=="X") && (btnTic3->Caption=="X"))
                || ((btnTic4->Caption=="X") && (btnTic5->Caption=="X") && (btnTic6->Caption=="X"))
                || ((btnTic7->Caption=="X") && (btnTic8->Caption=="X") && (btnTic9->Caption=="X"))
                || ((btnTic1->Caption=="X") && (btnTic4->Caption=="X") && (btnTic7->Caption=="X"))
                || ((btnTic2->Caption=="X") && (btnTic5->Caption=="X") && (btnTic8->Caption=="X"))
                || ((btnTic3->Caption=="X") && (btnTic6->Caption=="X") && (btnTic9->Caption=="X"))
                || ((btnTic1->Caption=="X") && (btnTic5->Caption=="X") && (btnTic9->Caption=="X"))
                || ((btnTic7->Caption=="X") && (btnTic5->Caption=="X") && (btnTic3->Caption=="X")))
        {
                lblPlayerX->Caption = IntToStr(i+1);
                ShowMessage("The Winner is Player X");
                callEnable(Sender);
        }
        if(((btnTic1->Caption=="O") && (btnTic2->Caption=="O") && (btnTic3->Caption=="O"))
                || ((btnTic4->Caption=="O") && (btnTic5->Caption=="O") && (btnTic6->Caption=="O"))
                || ((btnTic7->Caption=="O") && (btnTic8->Caption=="O") && (btnTic9->Caption=="O"))
                || ((btnTic1->Caption=="O") && (btnTic4->Caption=="O") && (btnTic7->Caption=="O"))
                || ((btnTic2->Caption=="O") && (btnTic5->Caption=="O") && (btnTic8->Caption=="O"))
                || ((btnTic3->Caption=="O") && (btnTic6->Caption=="O") && (btnTic9->Caption=="O"))
                || ((btnTic1->Caption=="O") && (btnTic5->Caption=="O") && (btnTic9->Caption=="O"))
                || ((btnTic7->Caption=="O") && (btnTic5->Caption=="O") && (btnTic3->Caption=="O")))
        {
                lblPlayerO->Caption = IntToStr(j+1);
                ShowMessage("The Winner is Player O");
                callEnable(Sender);
        }

}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnTic1Click(TObject *Sender)
{
     if(!(btnTic1->Caption=='X'|| btnTic1->Caption=="O")){
     //it will give only one time click i.e not to change whenever clicked.
        if(checker==false)
        //check which player turn is up.
        {
                btnTic1->Caption="X";
                checker=true;
        }
        else if(checker==true)
        {
                btnTic1->Caption="O";
                checker=false;
        }
        scoreKeeper(Sender);
        //passes the values everytime to check the player won or not.
     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnTic2Click(TObject *Sender)
{
     if(!(btnTic2->Caption=='X'|| btnTic2->Caption=="O")){
        if(checker==false)
        {
                btnTic2->Caption="X";
                checker=true;
        }
        else if(checker==true)
        {
                btnTic2->Caption="O";
                checker=false;
        }
        scoreKeeper(Sender);
     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnTic3Click(TObject *Sender)
{
     if(!(btnTic3->Caption=='X'|| btnTic3->Caption=="O")){
        if(checker==false)
        {
                btnTic3->Caption="X";
                checker=true;
        }
        else if(checker==true)
        {
                btnTic3->Caption="O";
                checker=false;
        }
        scoreKeeper(Sender);
     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnTic4Click(TObject *Sender)
{
     if(!(btnTic4->Caption=='X'|| btnTic4->Caption=="O")){
        if(checker==false)
        {
                btnTic4->Caption="X";
                checker=true;
        }
        else if(checker==true)
        {
                btnTic4->Caption="O";
                checker=false;
        }
        scoreKeeper(Sender);
     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnTic5Click(TObject *Sender)
{
     if(!(btnTic5->Caption=='X'|| btnTic5->Caption=="O")){
        if(checker==false)
        {
                btnTic5->Caption="X";
                checker=true;
        }
        else if(checker==true)
        {
                btnTic5->Caption="O";
                checker=false;
        }
        scoreKeeper(Sender);
     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnTic6Click(TObject *Sender)
{
     if(!(btnTic6->Caption=='X'|| btnTic6->Caption=="O")){
        if(checker==false)
        {
                btnTic6->Caption="X";
                checker=true;
        }
        else if(checker==true)
        {
                btnTic6->Caption="O";
                checker=false;
        }
        scoreKeeper(Sender);
     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnTic7Click(TObject *Sender)
{
     if(!(btnTic7->Caption=='X'|| btnTic7->Caption=="O")){
        if(checker==false)
        {
                btnTic7->Caption="X";
                checker=true;
        }
        else if(checker==true)
        {
                btnTic7->Caption="O";
                checker=false;
        }
        scoreKeeper(Sender);
     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnTic8Click(TObject *Sender)
{
     if(!(btnTic8->Caption=='X'|| btnTic8->Caption=="O")){
        if(checker==false)
        {
                btnTic8->Caption="X";
                checker=true;
        }
        else if(checker==true)
        {
                btnTic8->Caption="O";
                checker=false;
        }
        scoreKeeper(Sender);
     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnTic9Click(TObject *Sender)
{
     if(!(btnTic9->Caption=='X'|| btnTic9->Caption=="O")){
        if(checker==false)
        {
                btnTic9->Caption="X";
                checker=true;
        }
        else if(checker==true)
        {
                btnTic9->Caption="O";
                checker=false;
        }
        scoreKeeper(Sender);
     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnExitClick(TObject *Sender)
{
 Close();
 //exit the program.
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnNewGameClick(TObject *Sender)
{
//new game continue with previous record.
        btnTic1->Caption="";
        btnTic2->Caption="";
        btnTic3->Caption="";
        btnTic4->Caption="";
        btnTic5->Caption="";
        btnTic6->Caption="";
        btnTic7->Caption="";
        btnTic8->Caption="";
        btnTic9->Caption="";

        btnTic1->Enabled = true;
        btnTic2->Enabled = true;
        btnTic3->Enabled = true;
        btnTic3->Enabled = true;
        btnTic4->Enabled = true;
        btnTic5->Enabled = true;
        btnTic6->Enabled = true;
        btnTic7->Enabled = true;
        btnTic8->Enabled = true;
        btnTic9->Enabled = true;
        //this will change the player turn by which the previous data
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnResetClick(TObject *Sender)
{
//clear the record and start with new game.
        lblPlayerX->Caption = "0";
        lblPlayerO->Caption = "0";

        btnNewGameClick(Sender);
}
//---------------------------------------------------------------------------
