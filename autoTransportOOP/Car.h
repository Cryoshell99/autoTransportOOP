#pragma once
#include "Transport.h"

class Car : public Transport
{
	int tPower;
	float fuelConsumption;
public:
	void InData(vector<float>& tail); // ����
	void Out(ofstream& ofst); // �����
	float WPRatio();
	Car() {} // �������� ��� �������������.

	int GettPower() { return tPower; }
	void SettPower(int tPower) { this->tPower = tPower; }
};