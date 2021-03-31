#pragma once
#include <fstream>
#include <vector>

using namespace std;

class Transport
{
	public:
		static Transport* In(ifstream& ifst);
		virtual void inData(vector<float>& tail) = 0; // ввод
		virtual void Out(ofstream& ofst) = 0;
		virtual void outBus(ofstream& ofst);
		virtual float weightToPowerRatio() =0;
		bool Compare(Transport* second);

		void inCommon(vector<float>& tail);
		void outCommon(ofstream& ofst);

		void setmData(short int mData) { this->mData = mData; }
		void getmFuelConsumption(int mFuelConsumption) { this->mFuelConsumption = mFuelConsumption; }

		short int getmData() { return mData; }
		int getmFuelConsumption() { return mFuelConsumption; }
	protected:
		int mData;
		float mFuelConsumption;
		bool mIncorrectType = false;
};