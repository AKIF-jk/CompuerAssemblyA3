#include "computerAssembly.h"

computerAssembly::computerAssembly()
{

    int choice;
    do {
        cout << "\nSelect your option:\n1 for mac\n2 for PC\n";
        cin >> choice;
    } while (choice != 1 && choice != 2);
    switch (choice)
    {
    case 1:
        mc = Mac();
        typeCheck = true;
        cin >> mc;
        
        break;
    case 2:
        pc = PC();
        compGpu = pcGpu();
        cin >> pc;
        typeCheck = false;
        cin >> compGpu;
        break;
    default:
        
        break;
    }
    compCase = Case();
    compBattery = battery();
    compNetCard = networkCard();
    compSD = storageDevice();
    compPowSupp = powerSupply();
    cin >> compPowSupp; 
    cin >> compBattery;
    cin >> compCase;
    cin >> compNetCard;
    cin >> compSD;
    cout << "Select your preference:\n1. for laptop\n2. for tabelet\n3 for desktop computer (additional RS 2000 for case) \n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        break;
    case 2: 
        break;
    case 3:
        compCase.setPrice(2000);
        break;
    default:
        break;
    }
    totalPrice = 50000;  // BASE PRICE 
}

double computerAssembly::getTotalPrice()
{
    totalPrice += compCase.getPrice() + compGpu.getPrice()+ compPowSupp.getPrice() + compSD.getPrice()+compNetCard.getPrice()+ mc.getPrice() ;
    return totalPrice;
}

void computerAssembly::display()
{
    
    cout << "\n\n\n\t\tDESCRIPTION: " << endl;
    if (typeCheck)
        cout << mc << endl;
    else {
        cout << pc << endl;
        cout << compGpu;
    }
    cout << compBattery;
    cout << compCase;
 
    cout << compNetCard;
    cout << compSD;
    cout << "\n\n\t\t|| PRICE : Rs " << getTotalPrice() << " ||" << endl;
}




