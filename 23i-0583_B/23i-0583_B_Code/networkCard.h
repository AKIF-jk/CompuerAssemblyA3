#pragma once
#include<iostream>
using namespace std;
class networkCard
{
	string type;
	int speed;
	double price;
public:
	//networkCard(string t, int s, double p);
	networkCard();
	double getPrice();
	friend istream& operator>> (istream& in, networkCard& nc);
	friend ostream& operator<< (ostream& out, const networkCard& nc);
};

