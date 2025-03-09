#include "Other/Headers/WinDef.h/WORD.h"
#include "Other/Headers/WinDef.h/BYTE.h"
#include "Other/Headers/WinDef.h/DWORD.h"
#include "Other/Headers/winnt.h/M128A[8].h"
#include "Other/Headers/winnt.h/M128A[16].h"
#include "Other/Headers/WinDef.h/BYTE[96].h"
struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A[8] FloatRegisters;
    M128A[16] XmmRegisters;
    BYTE[96] Reserved4;
}