#include "ControlUnit.h"

ControlUnit::ControlUnit()
{
	clock = 1;
}

//ControlUnit::ControlUnit(float time)
//{
//	clock = time;
//}

float ControlUnit::getclock()
{
	return clock;
}

void ControlUnit::setclock(float time)
{
	clock = time;
}


ostream& operator<<(ostream& out, const ControlUnit& cu)
{
	cout << "clock:\n";
	out << cu.clock;
	return out;
}
