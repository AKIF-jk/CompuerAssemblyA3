#pragma once
#include<iostream>
#include"computer.h"
#include"intelAmdCPU.h"
using namespace std;
class PC : public computer
{
	intelAmdCPU iaCpu;
public:
	PC();
	friend istream& operator>> (istream& in, PC& iaCpu);
	friend ostream& operator<< (ostream& out, const PC& iaCpu);
};

