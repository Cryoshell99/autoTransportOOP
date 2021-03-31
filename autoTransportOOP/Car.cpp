#include "Car.h"
#include <vector>

void Car::inData(vector<float>& tail)
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

	if (tail[0] > 0 || tail[0] < 490)
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

void Car::Out(ofstream& ofst)
{
	ofst << "It is Car, maximum speed = " << mPower
		<< ", ";
	outCommon(ofst);
};

float Car::weightToPowerRatio()
{
	return (float)(4 * 75) / (float)mData;
};