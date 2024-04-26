#pragma once
#include "graphicCard.h"
#include<iostream>
using namespace std;
class appleGpu : public graphicCard
{
	
public:
	appleGpu();
	
	friend istream& operator>> (istream& in, appleGpu& appGpu);
	friend ostream& operator<< (ostream& out, const appleGpu& appGpu);
};

