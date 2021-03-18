#include "Transport.h"
#include "Bus.h"
#include "Truck.h"
#include "Car.h"

Transport* Transport::In(ifstream& ifst)
{
	int k, error1, error2;
	Transport* tr;
	ifst >> k;
	switch (k)
	{
	case 1:
		tr = new Bus();
		break;
	case 2:
		tr = new Truck();
		break;
	case 3:
		tr = new Car();
		break;
	default:
		ifst >> error1 >> error2;
		return NULL;
	}
	tr->InData(ifst);
	return tr;
};

void Transport::InCommon(ifstream& ifst)
{
	ifst >> mData >> fuelConsumption;
};
void Transport::OutCommon(ofstream& ofst)
{
	ofst << " Engine power: " << mData << ", Fuel consumption per 100 km = " << fuelConsumption << endl;
	ofst << WPRatio() << " Weight to Power ratio" << endl;
};

bool Transport::Compare(Transport& second)
{
	return WPRatio() < second.WPRatio();
}

void Transport::OutBus(ofstream& ofst)
{
	ofst << endl; //empty line
};