#pragma once
#include "Transport.h"
class Bus : public Transport
{
	int mData;
public:
	virtual void MultiMethod(Transport* other, ofstream& ofst);
	virtual void MmBus(ofstream& ofst);
	virtual void MmTruck(ofstream& ofst);
	void InData(ifstream& ifst); // ����
	void Out(ofstream& ofst); // �����
	Bus() {} // �������� ��� �������������.
};