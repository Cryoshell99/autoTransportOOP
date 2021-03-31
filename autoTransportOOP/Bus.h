#pragma once
#include "Transport.h"

class Bus : public Transport
{
	int tPower;
	float fuelConsumption;
public:
	void InData(vector<float>& tail); // ввод
	void Out(ofstream& ofst); // вывод
	void OutBus(ofstream& ofst);
	float WPRatio();
	Bus() {} // создание без инициализации.

	int GettPower() { return tPower; }
	void SettPower(int tPower) { this->tPower = tPower; }
};