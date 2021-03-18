#pragma once
#include "Transport.h"

class Car : public Transport
{
	int mAbstractDT;
	double fuelConsumption;
public:
	void InData(ifstream& ifst); // ввод
	void Out(ofstream& ofst); // вывод
	float WPRatio();
	Car() {} // создание без инициализации.
};