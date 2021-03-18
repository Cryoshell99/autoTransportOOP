#pragma once
#include "Transport.h"

class Truck : public Transport
{
	int mAbstractDT;
	double fuelConsumption;
public:
	void InData(ifstream& ifst); // ввод
	void Out(ofstream& ofst); // вывод
	float WPRatio();
	Truck() {};
};