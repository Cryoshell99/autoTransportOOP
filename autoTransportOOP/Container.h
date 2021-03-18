#pragma once
#include "Transport.h"

class Container
{
	Container* Next;
	Transport* L;

	public:
		void In(ifstream& ifst); // ввод
		void Out(ofstream& ofst); // вывод
		void OutBus(ofstream& ofst);
		void Clear(); // очистка контейнера от фигур
		void Sort();
		void Swap(Container* first, Container* second);
		Container();
		~Container() { /*Clear();*/ }
};