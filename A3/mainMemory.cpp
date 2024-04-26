#include "mainMemory.h"

mainMemory::mainMemory()
{
    capacity = 1;
    technologyType = "";
}


istream& operator>>(istream& in, mainMemory& b)
{
    cout << "\nSelect your main memory capacity:\n1 for 2GB. 2 for 4GB. 3 for 8GB. 4 for 16GB. 5 for 32 GB\n";
    int choice;
    in >> choice;
    switch (choice) {
    case 1:
        b.capacity = 2;

        break;
    case 2:
        b.capacity = 4;
        break;

    case 3:
        b.capacity = 8;
        break;

    case 4:
        b.capacity = 16;
        break;
    case 5:
        b.capacity = 32;
        break;
    default:
        cout << "wrong input";
        in >> b;
    }
    
    cout << "which type of technology you want in main memory\ntype 1 for semiconductor or type 2 for silicon\n";
    in >> choice;
    if (choice == 1)
        b.technologyType = "semiconductor";
    else if (choice == 2)
        b.technologyType = "Silicon";
    else
        in >> b;
    return in;
}

ostream& operator<<(ostream& out, const mainMemory& b)
{
    out << "---Main Memory---\n";
    out << "\ncapacity of main memory: ";
    out << b.capacity;
    out << "\ntechnology type used in main memory: ";
    out << b.technologyType;
    out << endl;
    return out;
}
