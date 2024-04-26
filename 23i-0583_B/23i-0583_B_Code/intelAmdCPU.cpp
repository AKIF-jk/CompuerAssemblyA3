#include "intelAmdCPU.h"

intelAmdCPU::intelAmdCPU() : CPU()
{
    architechture = "x86";
}



ostream& operator<<(ostream& out, const intelAmdCPU& intel)
{
    out << "\nArchitecture: " << intel.architechture;
    return out;
}
