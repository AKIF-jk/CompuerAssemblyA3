#include "physicalMemory.h"

physicalMemory::physicalMemory()
{
    capacity = 1;

}

istream& operator>>(istream& in, physicalMemory& pm)
{
    cout << "Enter the Physical memory (RAM) capacity : ";
    in >> pm.capacity;
    return in;
}

ostream& operator<<(ostream& out, const physicalMemory& pm)
{
    out << "\nPhysical memory (RAM) capacity: " << pm.capacity << endl;
    return out;
}
