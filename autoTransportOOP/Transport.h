#pragma once
#include <fstream>
using namespace std;
class Transport
{
	public:
		static Transport* In(ifstream& ifst);
		virtual void InData(ifstream& ifst) = 0; // ввод
		virtual void Out(ofstream& ofst) = 0;

		virtual void MultiMethod(Transport* other, ofstream& ofst) = 0;
		virtual void MmBus(ofstream& ofst) = 0;
		virtual void MmTruck(ofstream& ofst) = 0;
		virtual void MmCar(ofstream& ofst) = 0;

		void InCommon(ifstream& ifst);
		void OutCommon(ofstream& ofst);
	protected:
		int mPower;
};