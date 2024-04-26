#pragma once
#include<iostream>
using namespace std;
class powerSupply
{
	int wattage;
	string efficiencyRating;
	double price;
public:
	//powerSupply(int w, string er, double p);
	powerSupply();
	void setPrice(double price);
	double getPrice() const;
	friend istream& operator>> (istream& in, powerSupply& ps);
	friend ostream& operator<< (ostream& out, const powerSupply& ps);


};

