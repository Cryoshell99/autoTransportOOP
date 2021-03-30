#pragma once
#include "Transport.h"

class Bus : public Transport
{
	int mAbstractDT;
	double fuelConsumption;
public:
	void InData(ifstream& ifst); // ����
	void Out(ofstream& ofst); // �����
	void OutBus(ofstream& ofst);
	float WPRatio();
	Bus() {} // �������� ��� �������������.

	int GetmAbstractDT() { return mAbstractDT; }
	void SetmAbstractDT(int mAbstractDT) { this->mAbstractDT = mAbstractDT; }
};