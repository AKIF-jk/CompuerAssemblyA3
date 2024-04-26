#include "appleGpu.h"
appleGpu::appleGpu() 
{
	brand = "Apple GPU";
	price = 0;
	memorySize = 0;
}

istream& operator>>(istream& in, appleGpu& gc)
{
    cout << "\nSelect your GPU memory size:\n1 for 2GB (Rs 2000) . 2 for 4GB (Rs 4000) . 3 for 8GB (Rs 8000). 4 for 16GB (Rs 16000).\n";
    int choice;
    in >> choice;
    switch (choice) {
    case 1:
        gc.memorySize = 2;
        gc.price = 2000;
        break;
    case 2:
        gc.memorySize = 4;
        gc.price = 4000;
        break;

    case 3:
        gc.memorySize = 8;
        gc.price = 8000;
        break;

    case 4:
        gc.memorySize = 16;
        gc.price = 16000;
        break;

    default:
        cout << "wrong input";
        in >> gc;
        break;
    }
    return in;
}

ostream& operator<<(ostream& out, const appleGpu& appGpu)
{
    out << "\nGPU brand: " << appGpu.brand << "\nGPU Memory Size: " << appGpu.memorySize << endl;
    return out;
}
