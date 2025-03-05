
struct _XSAVE_FORMAT {
    WinDef.h/WORD ControlWord;
    WinDef.h/WORD StatusWord;
    WinDef.h/BYTE TagWord;
    WinDef.h/BYTE Reserved1;
    WinDef.h/WORD ErrorOpcode;
    WinDef.h/DWORD ErrorOffset;
    WinDef.h/WORD ErrorSelector;
    WinDef.h/WORD Reserved2;
    WinDef.h/DWORD DataOffset;
    WinDef.h/WORD DataSelector;
    WinDef.h/WORD Reserved3;
    WinDef.h/DWORD MxCsr;
    WinDef.h/DWORD MxCsr_Mask;
    winnt.h/M128A[8] FloatRegisters;
    winnt.h/M128A[16] XmmRegisters;
    WinDef.h/BYTE[96] Reserved4;
}