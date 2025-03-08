
struct _XSAVE_FORMAT {
    Other/Headers/WinDef.h/WORD ControlWord;
    Other/Headers/WinDef.h/WORD StatusWord;
    Other/Headers/WinDef.h/BYTE TagWord;
    Other/Headers/WinDef.h/BYTE Reserved1;
    Other/Headers/WinDef.h/WORD ErrorOpcode;
    Other/Headers/WinDef.h/DWORD ErrorOffset;
    Other/Headers/WinDef.h/WORD ErrorSelector;
    Other/Headers/WinDef.h/WORD Reserved2;
    Other/Headers/WinDef.h/DWORD DataOffset;
    Other/Headers/WinDef.h/WORD DataSelector;
    Other/Headers/WinDef.h/WORD Reserved3;
    Other/Headers/WinDef.h/DWORD MxCsr;
    Other/Headers/WinDef.h/DWORD MxCsr_Mask;
    Other/Headers/winnt.h/M128A[8] FloatRegisters;
    Other/Headers/winnt.h/M128A[16] XmmRegisters;
    Other/Headers/WinDef.h/BYTE[96] Reserved4;
}