#pragma once
#include "Transport.h"

class Bus : public Transport
{
	int tPower;
	float fuelConsumption;
public:
	void InData(vector<float>& tail); // ����
	void Out(ofstream& ofst); // �����
	void OutBus(ofstream& ofst);
	float WPRatio();
	Bus() {} // �������� ��� �������������.

	int GettPower() { return tPower; }
	void SettPower(int tPower) { this->tPower = tPower; }
};