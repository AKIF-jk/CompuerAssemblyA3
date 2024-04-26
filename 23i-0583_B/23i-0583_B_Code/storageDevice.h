#pragma once
#include<iostream>
using namespace std;
class storageDevice
{
	string type;
	int capacity;
	double price;
public:
	//storageDevice(string t, int c, double p);
	storageDevice();
	void setPrice(double price);
	double getPrice() const;
	int getCapacity();
	friend istream& operator>> (istream& in, storageDevice& sd);
	friend ostream& operator<< (ostream& out, const storageDevice& sd);
};

