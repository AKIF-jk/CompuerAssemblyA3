#include "CPU.h"

CPU::CPU()
{
    alu =  ALU();
    cu = ControlUnit();
}
//
//CPU::CPU(ALU alucopy , ControlUnit cucopy)
//{
//    alu = alucopy;
//    cu = cucopy;
//}

ALU CPU::getalu()
{
    return alu;
}

ControlUnit CPU::getcu()
{
    return cu;
}

void CPU::setalu(ALU alucopy)
{
    alu = alucopy;
}



void CPU::setcu(ControlUnit cucopy)
{
    cu = cucopy;
}



