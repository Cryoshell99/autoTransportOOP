#include "Transport.h"
#include "Bus.h"
#include "Truck.h"
#include "Car.h"

#include <vector>
#include <string>

Transport* Transport::In(ifstream& ifst)
{
	//read full row
	//and if it s ok send to inData(vector<float>)
	Transport* tr;

	float k;
	bool flag = true;
	vector<float> tail;
	do
	{
		ifst >> k;
		if (ifst.fail())
		{
			//Восстановили поток
			ifst.clear();
			ifst.ignore(numeric_limits<streamsize>::max(), '\n');
			flag = false;
			break;
		}
		if (k >= 0)
		{
			tail.push_back(k);
		}
		else
		{
			ifst.ignore(numeric_limits<streamsize>::max(), '\n');
			flag = false;
			break;
			//сделать окончание ввода до конца
		}
	} while (!ifst.eof() && ifst.peek() != '\n');//ifst.peek() != ' ' two space in a row
	
	if (flag && !tail.empty())
	{
		ifst.ignore(numeric_limits<streamsize>::max(), '\n');
		switch ((int)tail[0])
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
			return NULL;
		}
		tail.erase(tail.begin() + 0);
		tr->inData(tail);

		if (tr->mIncorrectType)
			return NULL;
		else
			return tr;
	}
	else
	{
		return NULL;
	}
};

void Transport::inCommon(vector<float>& tail)
{
	if (tail.size() == 2)
	{
		mData = tail[0];
		mfuelConsumption = tail[1];
	}
	else
	{
		mIncorrectType = true;
		return;
	}
	//ifst >> mData >> mfuelConsumption;
};
void Transport::outCommon(ofstream& ofst)
{
	ofst << "Engine power = " << mData << ", Fuel consumption per 100 km = " << mfuelConsumption << endl;
	ofst << weightToPowerRatio() << " Weight to Power ratio" << endl<< endl;
};

bool Transport::Compare(Transport* second)
{
	if (this != NULL && second != NULL)
	{
		return weightToPowerRatio() < second->weightToPowerRatio();
	}
	return false;

}

void Transport::outBus(ofstream& ofst)
{
	ofst << endl << endl; //empty line
};