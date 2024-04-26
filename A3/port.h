#pragma once
#include<iostream>
using namespace std;
class port
{
	string type;
	int baudRate;
public:
	//port(string t, int br);
	port();
	void setValues(string t, int br);
	friend ostream& operator<< (ostream& out, const port& p);

};

