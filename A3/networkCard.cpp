#include "networkCard.h"

networkCard::networkCard()
{
    type = "";
    speed = 0;
    price = 0;
}

double networkCard::getPrice()
{
    return price;
}

istream& operator>>(istream& in, networkCard& nc)
{
    cout << "Select type of networkCard\n1 for Wi-fi. 2 for Ethernet\n ";
    int choice;
    in >> choice;
    switch (choice)
    {
    case 1:
        nc.type = "Wi-fi";
        break;
    case 2:
        nc.type = "Ethernet";
        break;
    default:
        in >> nc;
        break;
    }
   
    do {
        cout << "\nEnter speed of Netword card (range 1- 20) (Rs300 charges for every MB per seconds) : ";
        in >> nc.speed;
        nc.price = nc.speed * 300;
    } while (nc.speed > 20 || nc.speed < 1);
    return in;
}

ostream& operator<<(ostream& out, const networkCard& nc)
{
    out << "\n--Network Card--\n";
    out << "\nnetwork type: " << nc.type << "\nnetwork speed: " << nc.speed << " MB per seconds" << endl;
    return out;
}
