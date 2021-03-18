#include "Car.h"

void Car::InData(ifstream& ifst)
{
	ifst >> mAbstractDT;
	InCommon(ifst);
};

void Car::Out(ofstream& ofst)
{
	ofst << "It is Car : max speed = " << mAbstractDT
		<< ", ";
	OutCommon(ofst);
};

float Car::WPRatio()
{
	return (float)(4 * 75) / (float)mData;
};