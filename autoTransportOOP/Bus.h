#pragma once
#include "Transport.h"
class Bus : public Transport
{
	int mData;
public:
	void MultiMethod(Transport* other, ofstream& ofst);
	void MmBus(ofstream& ofst);
	void MmTruck(ofstream& ofst);
	void MmCar(ofstream& ofst);
	void InData(ifstream& ifst); // ����
	void Out(ofstream& ofst); // �����
	Bus() {} // �������� ��� �������������.
};