#ifndef GB_EMU_CPU_H
#define GB_EMU_CPU_H


#include <cstdio>

class CPU {

    unsigned char* screen[160 * 144];

    ///To access it we have to reference E000-FE00
    unsigned char RAM[8000];            //8 kb
    unsigned char internal_RAM[8000];   //8 kb
    unsigned char VRAM[8000];           //8 kb
    unsigned char ROM[256000];          //todo wrong
    unsigned char A, B, C, D, E, F, H, L;       //8 bit registers
    unsigned short SP, PC;                      //16 bit registers


    //We can combine some 8 bit registers to form a 16 bit one
    //The stack pointer keeps track of the top of the stack


    //For F register
    //Z: math operation is zero or two values match when using the CP op
    //N: last operation was a subtraction
    //H: half carry, a carry occured from the lower nibble in the last math op
    //C: carry, if register A is the smaller value when executing the CP instruction



    //Temp opcode stuff

public:
    void init();
    void emulate_cycle();
    void LD(char reg, char value);



};


#endif
