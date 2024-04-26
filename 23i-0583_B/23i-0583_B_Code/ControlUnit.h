#pragma once
#include<iostream>
using namespace std;
class ControlUnit
{
private:
	float clock;
public:
	ControlUnit();
	//ControlUnit(float time);

	float getclock();
	void setclock(float time);
	friend ostream& operator<< (ostream& out, const ControlUnit& cu);
};

