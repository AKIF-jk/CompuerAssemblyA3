#pragma once
#include<iostream>
using namespace std;
class Case
{
	string formFactor;
	string color;
	double price;
public:
	Case();
	double getPrice();
	void setPrice(double pri);
	friend istream& operator>> (istream& in, Case& c);
	friend ostream& operator<< (ostream& out, const Case& b);
};

