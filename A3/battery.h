#pragma once
#include<iostream>
using namespace std;
class battery
{
	int capacity;
public:
	//battery(int capacity);
	battery();

	void setCapacity(int capacity);
	int getCapacity() ;
	friend istream& operator>> (istream& in, battery& b);
	friend ostream& operator<< (ostream& out, const battery& b);

};

