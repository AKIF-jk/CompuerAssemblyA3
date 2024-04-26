#include "pcGpu.h"

pcGpu::pcGpu() : graphicCard()
{
    brand = "";
}

istream& operator>>(istream& in, pcGpu& pcg)
{
    cout << "Enter your choice for brand:\n 1 for Nvidea. 2 for AMD\n";
    int choice;
    in >> choice;
    switch (choice)
    {
    case 1:
        pcg.brand = "Nvidea";
        break;
    case 2:
        pcg.brand = "AMD";
        break;
    default:
        in >> pcg;
        break;
    }
    cout << "\nSelect your GPU memory size:\n1 for 2GB (Rs 2000) . 2 for 4GB (Rs 4000) . 3 for 8GB (Rs 8000). 4 for 16GB (Rs 16000).\n";
    in >> choice;
    switch (choice) {
    case 1:
        pcg.memorySize = 2;
        pcg.price = 2000;
        break;
    case 2:
        pcg.memorySize = 4;
        pcg.price = 4000;
        break;

    case 3:
        pcg.memorySize = 8;
        pcg.price = 8000;
        break;

    case 4:
        pcg.memorySize = 16;
        pcg.price = 16000;
        break;

    default:
        cout << "wrong input";
        in >> pcg;
        break;
    }
    return in;
}

ostream& operator<<(ostream& out, const pcGpu& pcg)
{
    out << "\nGPU brand: " << pcg.brand << "\nGPU Memory Size: " << pcg.memorySize << endl;
    return out;
}
