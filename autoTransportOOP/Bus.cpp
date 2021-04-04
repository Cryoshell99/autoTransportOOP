#include "Bus.h"

void Bus::InData(ifstream& ifst)
{
	InCommon(ifst); 
	ifst >> mData;
};

void Bus::Out(ofstream& ofst)
{
	ofst << "It is Bus : passenger capacity = " << mData
		<< ", ";
	OutCommon(ofst);
};

void Bus::MultiMethod(Transport* other, ofstream& ofst)
{
	other->MmBus(ofst);
};

void Bus::MmBus(ofstream& ofst)
{
	ofst << "Bus and Bus." << endl;
};

void Bus::MmTruck(ofstream& ofst)
{
	ofst << "Truck and Bus." << endl;
};

void Bus::MmCar(ofstream& ofst)
{
	ofst << "Car and Bus." << endl;
};