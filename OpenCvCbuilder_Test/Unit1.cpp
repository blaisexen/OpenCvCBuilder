#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#pragma package(smart_init)
#pragma resource "*.dfm"

#include "CBuilderExtern.c"
#pragma comment(lib,"lib32/OpenCvCbuilder.LiB")


TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}

void __fastcall TForm1::FormCreate(TObject *Sender)
{
int gpuCnt = getCudaEnabledDeviceCount();
if (gpuCnt<=0) {
ShowMessage("Application Running CPU");
}
else
{
ShowMessage("Application Running CUDA");
}

}

