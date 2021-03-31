#include "Truck.h"
#include <vector>

void Truck::InData(vector<float>& tail)
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
		tPower = tail[0];
	}
	else
	{
		mIncorrectType = true;
		return;
	}
	tail.erase(tail.begin() + 0);
	//ifst >> tPower;
	//InCommon(ifst);
	InCommon(tail);
};

void Truck::Out(ofstream& ofst)
{
	ofst << "It is Truck, carrying capacity = " << tPower
		<< ", ";
	OutCommon(ofst);
};

float Truck::WPRatio()
{
	return (float)(tPower) / (float)mData;
};