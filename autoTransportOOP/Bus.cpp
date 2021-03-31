#include "Bus.h"
#include <vector>

void Bus::InData(vector<float>& tail)
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

	if (tail[0] > 0 || tail[0] < 103)
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

void Bus::Out(ofstream& ofst)
{

	ofst << "It is Bus, passenger capacity = " << tPower
		<< ", ";
	OutCommon(ofst);
};

float Bus::WPRatio()
{
	return (float)(75 * tPower) / (float)mData;
};

void Bus::OutBus(ofstream& ofst)
{
	Out(ofst);
};