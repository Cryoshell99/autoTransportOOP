#pragma once
#include "Transport.h"

class Car : public Transport
{
	int tPower;
	float fuelConsumption;
public:
	void InData(vector<float>& tail); // ввод
	void Out(ofstream& ofst); // вывод
	float WPRatio();
	Car() {} // создание без инициализации.

	int GettPower() { return tPower; }
	void SettPower(int tPower) { this->tPower = tPower; }
};