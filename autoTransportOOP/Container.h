#pragma once
#include "Transport.h"

class Container
{
	Container* Next;
	Transport* L;

	public:
		void MultiMethod(ofstream& ofst);
		void In(ifstream& ifst); // ����
		void Out(ofstream& ofst); // �����
		void Clear(); // ������� ���������� �� �����
		Container();
		~Container() { /*Clear();*/ }
};