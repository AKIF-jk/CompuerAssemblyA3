#include "motherBoard.h"

motherBoard::motherBoard()
{
    mm = new mainMemory();
    
    ports = new port[5]();
    ports[0].setValues("VGI port",9600);
    ports[1].setValues("I/O port", 14400);
    ports[2].setValues("I/O port", 14400);
    ports[3].setValues("HDMI port", 9600);
    ports[4].setValues("USB port", 4800);
}





istream& operator>>(istream& in, motherBoard& mb)
{
    in >> *(mb.mm);
    return in;
}

ostream& operator<<(ostream& out, const motherBoard& b)
{
    out << "\n--MotherBoard--\n";
    out << *(b.mm);
    out << "\n--Ports--\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nPort NO: " << i+1 << endl;
        out << b.ports[i];
    }
    out << endl;
    return out;
}
