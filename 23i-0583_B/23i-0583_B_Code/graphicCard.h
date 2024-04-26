#pragma once
#include<iostream>
using namespace std;
class graphicCard
{
protected:
	string brand;
	int memorySize;
	double price;
public:
	//graphicCard(string brand, int memorySize, double price);
	graphicCard();
	double getPrice();
	

};

