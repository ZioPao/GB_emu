#include "CPU.h"

void CPU::init(){

    FILE* bootrom = fopen("bootrom.bin","rb");      //Opens the bootrom

    if (bootrom == NULL)
        fputs("File error", stderr);

    //Firmware loads, 256 byte
    //Picks nintendo logo from catridge from 0x104 to 0x133

}
void CPU::emulate_cycle(){
    int opcode = 2; //todo change it
    switch(opcode){

        case 1:
            break;

    }
}

void CPU::LD(char reg, char value){

    switch(reg){
        case 0x06:    //B Register
            break;
        case 0x0E:      //C register
            break;
    }
}

