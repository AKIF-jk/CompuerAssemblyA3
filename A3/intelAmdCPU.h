#pragma once
#include"CPU.h"
class intelAmdCPU : public CPU 
{
	string architechture;
public:
	intelAmdCPU();
	friend ostream& operator<< (ostream& out, const intelAmdCPU& intel);

};

