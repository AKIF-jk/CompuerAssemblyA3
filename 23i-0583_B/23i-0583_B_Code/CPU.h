#pragma once
#include"ALU.h"
#include"ControlUnit.h"
#include<iostream>
using namespace std;
class CPU
{
protected:
	ALU alu;
	ControlUnit cu;
public:
	CPU();
//	CPU(ALU, ControlUnit);
	ALU getalu();
	ControlUnit getcu();
	void setalu(ALU);
	void setcu(ControlUnit);
};

