#include "Transport.h"
#include "Bus.h"
#include "Truck.h"
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
	default:
		ifst >> error1 >> error2;
		return NULL;
	}
	tr->InData(ifst);
	return tr;
};

void Transport::InCommon(ifstream& ifst)
{
	ifst >> mPower;
};
void Transport::OutCommon(ofstream& ofst)
{
	ofst << " Engine power: " << mPower << endl;
};

