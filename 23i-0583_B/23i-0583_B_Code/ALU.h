#pragma once
#include<iostream>
using namespace std;
class ALU
{
private:
	int NoOfAdders;
	int NoOfSubtractors;
	int NoOfRegisters;
	int SizeOfRegisters;
public:
	ALU(); 
	ALU(int adders, int subtractors, int registers, int size);

	int getNoOfAdders() const;
	void setNoOfAdders(int adders);

	int getNoOfSubtractors() const;
	void setNoOfSubtractors(int subtractors);

	int getNoOfRegisters() const;
	void setNoOfRegisters(int registers);

	int getSizeOfRegisters() const;
	void setSizeOfRegisters(int size);
	friend ostream& operator << (ostream& out, const ALU& alu);
};

