#include "Car.h"

void Car::InData(ifstream& ifst)
{
	InCommon(ifst);
	ifst >> mData;
};

void Car::Out(ofstream& ofst)
{
	ofst << "It is Car: maximum speed = " << mData
		<< ", ";
	OutCommon(ofst);
};

void Car::MultiMethod(Transport* other, ofstream& ofst)
{
	other->MmCar(ofst);
};

void Car::MmBus(ofstream& ofst)
{
	ofst << "Bus and Car." << endl;
};

void Car::MmTruck(ofstream& ofst)
{
	ofst << "Truck and Car." << endl;
};

void Car::MmCar(ofstream& ofst)
{
	ofst << "Car and Car." << endl;
};