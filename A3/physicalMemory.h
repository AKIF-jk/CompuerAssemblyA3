#pragma once
#include<iostream>
using namespace std;
class physicalMemory
{
	int capacity;
public:
	physicalMemory();
	//physicalMemory(int c);
	friend istream& operator>> (istream& in, physicalMemory& pm);
	friend ostream& operator<< (ostream& out, const physicalMemory& pm);
};

