#include "ALU.h"

ALU::ALU()
{
		NoOfAdders=1000;
		NoOfSubtractors = 1000;
		NoOfRegisters = 1000;
		SizeOfRegisters = 64;
}

ALU::ALU(int adders, int subtractors, int registers, int size)
{
	NoOfAdders = adders;
	NoOfSubtractors = subtractors;
	NoOfRegisters = registers;
	SizeOfRegisters = size;

}

int ALU::getNoOfAdders() const
{
	return NoOfAdders;
}

void ALU::setNoOfAdders(int adders)
{
	NoOfAdders = adders;
}

int ALU::getNoOfSubtractors() const
{
	return NoOfSubtractors;
}

void ALU::setNoOfSubtractors(int subtractors)
{
	NoOfSubtractors = subtractors;
}

int ALU::getNoOfRegisters() const
{
	return NoOfRegisters;
}

void ALU::setNoOfRegisters(int registers)
{
	NoOfRegisters = registers;
}

int ALU::getSizeOfRegisters() const
{
	return SizeOfRegisters;
}

void ALU::setSizeOfRegisters(int size)
{
	SizeOfRegisters = size;
}

ostream& operator<<(ostream& out, const ALU& alu)
{
	out << "--ALU--\nNo of Adders = " << alu.NoOfAdders << "\nNo of Subtractors = " << alu.NoOfSubtractors << "\nNo of Registers = " << alu.NoOfRegisters << "\nSize of Registers = " << alu.SizeOfRegisters << endl;
	return out;
}


