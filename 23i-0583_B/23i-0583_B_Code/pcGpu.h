#pragma once
#include "graphicCard.h"
#include<iostream>
using namespace std;
class pcGpu : public graphicCard
{
public:
	pcGpu();
	friend istream& operator>> (istream& in, pcGpu& pcg);
	friend ostream& operator<< (ostream& out, const pcGpu& pcg);
};

