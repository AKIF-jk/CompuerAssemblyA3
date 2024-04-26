#pragma once
#include<iostream>
#include"physicalMemory.h"
#include"motherBoard.h"

using namespace std;
class computer
{
protected:
	physicalMemory* pm;
	motherBoard* mb;


public:
	//computer(physicalMemory* pm, motherBoard* mb, CPU cpu);
	computer();
	friend istream& operator>> (istream& in, computer& comp);
	friend ostream& operator<< (ostream& out, const computer& comp);


};

