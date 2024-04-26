#pragma once
#include"CPU.h"
#include"appleGpu.h"
class appleSilicon : public CPU
{
	string architecture;
	appleGpu appGpu;
public:
	appleSilicon();
	double getPrice();
	friend istream& operator>> (istream& in, appleSilicon& appGpu);
	friend ostream& operator<< (ostream& out, const appleSilicon& appGpu);


};

