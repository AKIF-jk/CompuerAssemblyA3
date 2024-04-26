#include "battery.h"

istream& operator>>(istream& in, battery& b)
{
    do {
        cout << "Enter capacity of the battery: (Range 10000 MAH - 150000 MAH) ";
        in >> b.capacity;
    } while (b.capacity > 150000 || b.capacity < 10000);
    return in;
}

ostream& operator<<(ostream& out, const battery& b)
{
    out << "\n--Battery--\n";
    out << "Battery capacity: " << b.capacity << " MAH" <<  endl;
    return out;
}

battery::battery()
{
    capacity = 20000;
}

void battery::setCapacity(int capacity)
{
    this->capacity = capacity;
}

int battery::getCapacity()
{
    return capacity;
}
