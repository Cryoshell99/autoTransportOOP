﻿#include <iostream>
#include <fstream>
#include <string>
#include "Container.h"

using namespace std;

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		cout << "incorrect command line! "
			"Waited: command in_file out_file"
			<< endl;
		exit(1);
	}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	cout << "Start" << endl;
	Container cnt;
	cnt.In(ifst);
	ofst << "Filled container. " << endl;
	cnt.Out(ofst);
	cnt.MultiMethod(ofst);
	cnt.Clear();
	ofst << "Empty container. " << endl;
	cnt.Out(ofst);
	cout << "Stop" << endl;
	system("pause");

	return 0;
}