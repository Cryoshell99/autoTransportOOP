#pragma once
#include "Transport.h"

class Truck : public Transport
{
	int tPower;
	float fuelConsumption;
public:
	void InData(vector<float>& tail); // ����
	void Out(ofstream& ofst); // �����
	float WPRatio();
	Truck() {};

	int GettPower() { return tPower; }
	void SettPower(int tPower) { this->tPower = tPower; }
};