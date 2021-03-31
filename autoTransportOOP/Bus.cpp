#include "Bus.h"
#include <vector>

void Bus::inData(vector<float>& tail)
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

void Bus::Out(ofstream& ofst)
{

	ofst << "It is Bus, passenger capacity = " << mPower
		<< ", ";
	outCommon(ofst);
};

float Bus::weightToPowerRatio()
{
	return (float)(75 * mPower) / (float)mData;
};

void Bus::outBus(ofstream& ofst)
{
	Out(ofst);
};