/*
Programmer : Jp Martinez
Grade : Senior
Project : Virtual Machine LC3 Architecture
Resource : https://www.jmeiners.com/lc3-vm/
*/


#include <stdint.h>


// 65536 Memory Locations
#define MEMORY_MAX (1 << 16) // 1 bit shifted 16 times , 1 x 2^16
uint16_t memory[MEMORY_MAX];    

// Registers
enum
{

    R_R0 = 0,
    R_R1,
    R_R2,
    R_R3,
    R_R4,
    R_R5,
    R_R6,
    R_R7,
    R_PC, /*Program Counter*/
    R_COND,
    R_COUNT 
};

// Register Storage
uint16_t reg[R_COUNT];

// Instruction Set
enum
{
    OP_BR = 0, /* branch */
    OP_ADD,    /* add  */
    OP_LD,     /* load */
    OP_ST,     /* store */
    OP_JSR,    /* jump register */
    OP_AND,    /* bitwise and */
    OP_LDR,    /* load register */
    OP_STR,    /* store register */
    OP_RTI,    /* unused */
    OP_NOT,    /* bitwise not */
    OP_LDI,    /* load indirect */
    OP_STI,    /* store indirect */
    OP_JMP,    /* jump */
    OP_RES,    /* reserved (unused) */
    OP_LEA,    /* load effective address */
    OP_TRAP    /* execute trap */
};

