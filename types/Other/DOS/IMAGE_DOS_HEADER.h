#include "char[2].h"
#include "word[4].h"
#include "word[10].h"
#include "byte[64].h"
struct IMAGE_DOS_HEADER {
    char[2] e_magic; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word[4] e_res[4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word[10] e_res2[10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte[64] e_program; // Actual DOS program
}