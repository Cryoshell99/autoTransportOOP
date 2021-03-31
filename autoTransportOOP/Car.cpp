#include "Car.h"
#include <vector>

void Car::InData(vector<float>& tail)
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
		tPower = tail[0];
	}
	else
	{
		mIncorrectType = true;
		return;
	}
	tail.erase(tail.begin() + 0);
	InCommon(tail);
};

void Car::Out(ofstream& ofst)
{
	ofst << "It is Car, maximum speed = " << tPower
		<< ", ";
	OutCommon(ofst);
};

float Car::WPRatio()
{
	return (float)(4 * 75) / (float)mData;
};