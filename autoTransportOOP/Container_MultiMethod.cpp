#include "Container.h"

void Container::MultiMethod(ofstream& ofst)
{
	if (this->Next != nullptr)
	{
		ofst << endl << "Multimethod:" << endl;
		Container* first;
		Container* second;
		first = this;
		while (first->Next != this)
		{
			second = first->Next;
			while (second != this)
			{
				if (first->L != NULL && second->L != NULL)
				{

					first->L->MultiMethod(second->L, ofst);
					first->L->Out(ofst);
					second->L->Out(ofst);
					ofst << endl;
				}
				second = second->Next;
			}

			first = first->Next;
		}
	}
	else
	{
		ofst << "Container is empty!" << endl;
	}
}