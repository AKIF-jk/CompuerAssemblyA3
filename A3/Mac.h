#pragma once
#include<iostream>
#include"computer.h"
#include"appleSilicon.h"
using namespace std;
class Mac : public computer
{
	appleSilicon appSil;
public:
	Mac();
	double getPrice();
	friend istream& operator>> (istream& in, Mac& mac);
	friend ostream& operator<< (ostream& out, const Mac& mac);
};

