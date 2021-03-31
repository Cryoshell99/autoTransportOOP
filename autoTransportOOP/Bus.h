#pragma once
#include "Transport.h"

class Bus : public Transport
{
	int mPower;
	float mFuelConsumption;
public:
	void inData(vector<float>& tail); // ����
	void Out(ofstream& ofst); // �����
	void outBus(ofstream& ofst);
	float weightToPowerRatio();
	Bus() {} // �������� ��� �������������.

	int getmPower() { return mPower; }
	void setmPower(int mPower) { this->mPower = mPower; }
};