#include "computer.h"

computer::computer()
{
    pm = new physicalMemory();
   
    mb = new motherBoard();
}



istream& operator>>(istream& in, computer& comp)
{
    in >> *(comp.mb);
    return in;
}

ostream& operator<<(ostream& out, const computer& comp)
{
    out  << *(comp.mb) << endl;
    return out;
}
