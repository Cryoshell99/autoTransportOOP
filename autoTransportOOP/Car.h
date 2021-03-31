#pragma once
#include "Transport.h"

class Car : public Transport
{
	int mPower;
	float mfuelConsumption;
public:
	void inData(vector<float>& tail); // ввод
	void Out(ofstream& ofst); // вывод
	float weightToPowerRatio();
	Car() {} // создание без инициализации.

	int getmPower() { return mPower; }
	void setmPower(int mPower) { this->mPower = mPower; }
};