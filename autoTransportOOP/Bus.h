#pragma once
#include "Transport.h"

class Bus : public Transport
{
	int mAbstractDT;
	double fuelConsumption;
public:
	void InData(ifstream& ifst); // ввод
	void Out(ofstream& ofst); // вывод
	void OutBus(ofstream& ofst);
	float WPRatio();
	Bus() {} // создание без инициализации.
};