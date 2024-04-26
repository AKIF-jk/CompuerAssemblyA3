#include "port.h"

port::port()
{
    type = "";
    baudRate = 4800;
}

void port::setValues(string t,int br)
{
    type = t;
    baudRate = br;
}


ostream& operator<<(ostream& out, const port& p)
{
    out << "port type: " << p.type << "\nbaud rate: " << p.baudRate << endl;
    return out;
}
