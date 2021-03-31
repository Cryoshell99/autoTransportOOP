#pragma once
#include <fstream>
#include <vector>

using namespace std;

class Transport
{
	public:
		static Transport* In(ifstream& ifst);
		virtual void inData(vector<float>& tail) = 0; // ����
		virtual void Out(ofstream& ofst) = 0;
		virtual void outBus(ofstream& ofst);
		virtual float weightToPowerRatio() =0;
		bool Compare(Transport* second);

		void inCommon(vector<float>& tail);
		void outCommon(ofstream& ofst);

		void setmData(short int mData) { this->mData = mData; }
		void getmfuelConsumption(int mfuelConsumption) { this->mfuelConsumption = mfuelConsumption; }

		short int getmData() { return mData; }
		int getmfuelConsumption() { return mfuelConsumption; }
	protected:
		int mData;
		float mfuelConsumption;
		bool mIncorrectType = false;
};