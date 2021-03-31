#include "Truck.h"
#include <vector>

void Truck::inData(vector<float>& tail)
{
	if (tail.size() < 1)
	{
		mIncorrectType = true;
		return;
	}
	else if (tail.size() > 3)
	{
		mIncorrectType = true;
		return;
	}

	if (tail[0] > 0 || tail[0] < 450)
	{
		mPower = tail[0];
	}
	else
	{
		mIncorrectType = true;
		return;
	}
	tail.erase(tail.begin() + 0);
	inCommon(tail);
};

void Truck::Out(ofstream& ofst)
{
	ofst << "It is Truck, carrying capacity = " << mPower
		<< ", ";
	outCommon(ofst);
};

float Truck::weightToPowerRatio()
{
	return (float)(mPower) / (float)mData;
};