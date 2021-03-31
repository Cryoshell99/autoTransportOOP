#pragma once
#include "Transport.h"

class Bus : public Transport
{
	int mPower;
	float mFuelConsumption;
public:
	void inData(vector<float>& tail); // ввод
	void Out(ofstream& ofst); // вывод
	void outBus(ofstream& ofst);
	float weightToPowerRatio();
	Bus() {} // создание без инициализации.

	int getmPower() { return mPower; }
	void setmPower(int mPower) { this->mPower = mPower; }
};