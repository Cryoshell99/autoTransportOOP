#pragma once
#include <fstream>

using namespace std;

class Transport
{
	public:
		static Transport* In(ifstream& ifst);
		virtual void InData(ifstream& ifst) = 0; // ввод
		virtual void Out(ofstream& ofst) = 0;
		virtual void OutBus(ofstream& ofst);
		virtual float WPRatio() =0;
		bool Compare(Transport& second);
		void InCommon(ifstream& ifst);
		void OutCommon(ofstream& ofst);
	protected:
		int mData;
		double fuelConsumption;
};