#pragma once
#include<iostream>
using namespace std;
class mainMemory
{
	int capacity;
	string technologyType;

public:
	//mainMemory(int c, string tp);
	mainMemory();
	friend istream& operator>> (istream& in, mainMemory& mm);
	friend ostream& operator<< (ostream& out, const mainMemory& mm);

};

