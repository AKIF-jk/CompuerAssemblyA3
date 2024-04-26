#pragma once
#include<iostream>
#include"mainMemory.h"
#include"port.h"
using namespace std;
class motherBoard
{
	mainMemory* mm;
	port* ports;
public:
	//motherBoard(mainMemory mm, port* port);
	motherBoard();
	friend istream& operator>> (istream& in, motherBoard& mb);
	friend ostream& operator<< (ostream& out, const motherBoard& mb);

};

