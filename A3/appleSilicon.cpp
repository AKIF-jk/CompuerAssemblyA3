#include "appleSilicon.h"

appleSilicon::appleSilicon() : CPU()
{
	
	architecture = "Apple Silicon";
	appGpu = appleGpu();
}

double appleSilicon::getPrice()
{
	return appGpu.getPrice();
}

istream& operator>>(istream& in, appleSilicon& appGpu)
{
	
	in >> appGpu.appGpu;
	return in;
}

ostream& operator<<(ostream& out, const appleSilicon& appGpu)
{
	out << "\n--CPU--\n";
	out << "\nArchitecture: " << appGpu.architecture;
	out << "\n--Graphic card--\n";
	out << appGpu.appGpu ;
	return out;
}
