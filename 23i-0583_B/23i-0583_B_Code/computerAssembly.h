#pragma once
#include<iostream>
#include"PC.h"
#include"Mac.h"
#include"Case.h"
#include"pcGpu.h"
#include"battery.h"
#include"storageDevice.h"
#include"powerSupply.h"
#include"networkCard.h"
using namespace std;
class computerAssembly
{
	PC pc;
	Mac mc;
	Case compCase;
	battery compBattery;
	powerSupply compPowSupp;
	networkCard compNetCard;
	storageDevice compSD;
	pcGpu compGpu;
	bool typeCheck;
	double totalPrice;
public:
	computerAssembly();
	double getTotalPrice();
	void display();
};

