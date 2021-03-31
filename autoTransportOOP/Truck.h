#pragma once
#include "Transport.h"

class Truck : public Transport
{
	int mPower;
	float mfuelConsumption;
public:
	void inData(vector<float>& tail); // ����
	void Out(ofstream& ofst); // �����
	float weightToPowerRatio();
	Truck() {};

	int getmPower() { return mPower; }
	void setmPower(int mPower) { this->mPower = mPower; }
};