#include "Container.h"

Container::Container()
{
	Next = this;
	L = NULL;
}

void Container::In(ifstream& ifst)
{
	while (!ifst.eof())
	{
		Container* temp = new Container;
		if ((this == this->Next) && (!ifst.tellg()))
		{
			this->L = Transport::In(ifst);
		}
		else
		{	
			Container* counter = this->Next;
			while (counter->Next != this)
			{
				counter = counter->Next;
			}

			counter->Next = temp;
			temp->L = Transport::In(ifst);
			temp->Next = this;
		}
	}

};

void Container::Out(ofstream& ofst)
{
	if (this->Next != nullptr)
	{
		ofst << "Container contains that elements:" << endl;
		Container* temp;
		temp = this;
		int i = 0;
		do
		{
			ofst << i << ": ";
			if (temp->L == NULL)
			{
				ofst << "Incorrect type of transport!!!" << endl;
			}
			else
			{
				temp->L->Out(ofst);
			}
			temp = temp->Next;
			i++;
		} while (temp != this);
	}
	else
	{
		ofst << "Container is empty!" << endl;

	}
};

void Container::Clear()
{
	Container* temp;
	temp = this->Next;
	while (temp != this)
	{
		this->Next = temp->Next;
		delete temp;
		temp = this->Next;
	}
	this->Next = nullptr;
};
