#include "PC.h"

PC::PC() : computer()
{
    iaCpu = intelAmdCPU();
}

istream& operator>>(istream& in, PC& iaCpu)
{
    in >> *(iaCpu.mb);
    return in;
}

ostream& operator<<(ostream& out, const PC& iaCpu)
{
    out << *iaCpu.mb;

    out << iaCpu.iaCpu << endl;
    return out;
}
