#pragma once
#include "Transport.h"

class Truck : public Transport
{
	int mPower;
	float mfuelConsumption;
public:
	void inData(vector<float>& tail); // ввод
	void Out(ofstream& ofst); // вывод
	float weightToPowerRatio();
	Truck() {};

	int getmPower() { return mPower; }
	void setmPower(int mPower) { this->mPower = mPower; }
};