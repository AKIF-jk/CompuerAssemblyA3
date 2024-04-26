#include "powerSupply.h"

powerSupply::powerSupply()
{
    wattage =0;
    efficiencyRating = "";
    price = 0;
}

void powerSupply::setPrice(double price)
{
    this->price = price * wattage;  // parameter price is according to price per wattage
}

double powerSupply::getPrice() const
{
    return price;
}

istream& operator>>(istream& in, powerSupply& ps)
{
    do {
        cout << "input the wattage of power Supply (Range 20 - 200) (price : Rs10 per wattage) : \n";
        in >> ps.wattage;
        ps.price = ps.wattage * 10;
    } while (ps.wattage > 200 || ps.wattage < 20);
    cout << "which efficiency rating you want for your power supply\ntype 1 for 80 plus Bronze (Rs 500) \ntype 2 for 80 plus Gold (Rs 1000)\n";
    int choice;
    in >> choice;
    switch (choice) {
    case 1:
        ps.efficiencyRating = "80 plus Bronze";
        ps.price = 500;
        break;
    case 2:
        ps.efficiencyRating = "80 plus Gold";
        ps.price = 1000;
        break;
    default:
        cout << "wrong input\n";
        in >> ps;
        break;
    }
    return in;
}

ostream& operator<<(ostream& out, const powerSupply& ps)
{
    out << "\nwattage of your supply: " << ps.wattage << "\nefficeny rating of your supply: " << ps.efficiencyRating << endl;
    return out;
}
