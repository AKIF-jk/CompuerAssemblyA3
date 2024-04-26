#include "storageDevice.h"

storageDevice::storageDevice()
{
    type = "";
    capacity= 100;
    price = 5000;
}

void storageDevice::setPrice(double price)
{
    this->price = price * capacity;
}

double storageDevice::getPrice() const
{
    return price;
}

int storageDevice::getCapacity()
{
    if (type == "SDD")
        return capacity;            // deduction after looking online physical memory only uses SSD storage
    else
        return 0;
}

istream& operator>>(istream& in, storageDevice& sd)
{
    cout << "Select storage device type\n1 for HDD ( Rs 1000 ). 2 for SSD ( Rs 3000 )\n";
    int choice;
    in >> choice;
    switch (choice)
    {
    case 1:
        sd.type = "HDD";
        sd.price = 1000;
        break;
    case 2:
        sd.type = "SDD";
        sd.price = 3000;
        break;
    default:
        in >> sd;
        break;
    }
   
    cout << "\nSelect your storage device capacity:\n1 for 64GB (Rs 2000). 2 for 128GB(Rs 4000). 3 for 256GB(Rs 5000). 4 for 512GB(Rs 6000). 5 for 1024 GB(Rs 7000)\n";

    in >> choice;
    switch (choice) {
    case 1:
        sd.capacity = 64;
        sd.price += 2000;
        break;
    case 2:
        sd.capacity = 128;
        sd.price += 4000;
        break;

    case 3:
        sd.capacity = 256;
        sd.price += 5000;
        break;

    case 4:
        sd.capacity = 512;
        sd.price += 6000;
        break;
    case 5:
        sd.capacity = 1024;
        sd.price += 7000;
        break;
    default:
        cout << "wrong input";
        in >> sd;
    }
    return in;
}

ostream& operator<<(ostream& out, const storageDevice& sd)
{
    out << "\nStorage Device type: " <<sd.type << "\nStorage Device capacity: " << sd.capacity << " GB " << endl;
    return out;
}
