#include "Truck.h"

void Truck::InData(ifstream& ifst)
{
	InCommon(ifst);
	ifst >> mData;
};

void Truck::Out(ofstream& ofst)
{
	ofst << "It is Truck: carrying capacity = " << mData
		<< ", ";
	OutCommon(ofst);
};

void Truck::MultiMethod(Transport* other, ofstream& ofst)
{
	other->MmTruck(ofst);
};

void Truck::MmBus(ofstream& ofst)
{
	ofst << "Bus and Truck." << endl;
};

void Truck::MmTruck(ofstream& ofst)
{
	ofst << "Truck and Truck." << endl;
};

void Truck::MmCar(ofstream& ofst)
{
	ofst << "Car and Truck." << endl;
};