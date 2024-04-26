#include "Case.h"

Case::Case()
{
    formFactor = "";
    string color;
    price = 0;
}

double Case::getPrice()
{
    return price;
}

void Case::setPrice(double pri)
{
    price = pri;
}

istream& operator>>(istream& in, Case& c)
{
    cout << "Enter your choice for form Factor of case:\n 1 for ATX. 2 for Micro ATX\n";
    int choice;
    in >> choice;
    switch (choice)
    {
    case 1: 
        c.formFactor = "ATX";
        break;
    case 2:
        c.formFactor = "Micro ATX";
        break;
    default:
        cout << "wrong input";
        in >> c;
        break;
    }

    cout << "\nSelect your Case color:\n1 for black. 2 for grey. 3 for white. 4 for silver\n";
    in >> choice;
    switch (choice) {
    case 1:
        c.color = "Black";
        break;
    case 2:
        c.color = "Grey";
        break;

    case 3:
        c.color = "White";
        break;

    case 4:
        c.color = "Silver";
        break;

    default:
        cout << "wrong input";
        in >> c;
    }
    return in;
}

ostream& operator<<(ostream& out, const Case& c)
{
    out << "\n--Case--\n";
    out << "Form factor of the case: " << c.formFactor << "\ncolor of case: " << c.color << endl;
    return out;
   
}
