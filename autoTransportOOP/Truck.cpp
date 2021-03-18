#include "Truck.h"

void Truck::InData(ifstream& ifst)
{
	ifst >> mAbstractDT;
	InCommon(ifst);
};

void Truck::Out(ofstream& ofst)
{
	ofst << "It is Truck : carrying capacity = " << mAbstractDT
		<< ", ";
	OutCommon(ofst);
};

float Truck::WPRatio()
{
	return (float)(mAbstractDT) / (float)mData;
};