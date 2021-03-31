#include "pch.h"
#include "stdafx.h"
#include "CppUnitTest.h"
#include "../autoTransportOOP/Container.h"
#include "../autoTransportOOP/Car.h"
#include "../autoTransportOOP/Transport.h"
#include "../autoTransportOOP/Truck.h"
#include "../autoTransportOOP/Bus.h"

#include "../autoTransportOOP/Container.cpp"
#include "../autoTransportOOP/Car.cpp"
#include "../autoTransportOOP/Transport.cpp"
#include "../autoTransportOOP/Truck.cpp"
#include "../autoTransportOOP/Bus.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(weightToPowerRatioT)
		{
			Truck transport;
			transport.setmData(25);
			transport.setmPower(25);
			float actual = transport.weightToPowerRatio();
			float expected = transport.getmPower() / transport.getmData();
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(weightToPowerRatioB)
		{
			Bus transport;
			transport.setmData(25);
			transport.setmPower(25);
			float actual = transport.weightToPowerRatio();
			float expected = transport.getmPower()*75 / transport.getmData();
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(weightToPowerRatioC)
		{
			Car transport;
			transport.setmData(25);
			//transport.setmPower(25);
			float actual = transport.weightToPowerRatio();
			float expected = 4*75 / transport.getmData();
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestCompareM)
		{
			Car transport_new;
			Bus transport_old;
			transport_new.setmData(1);
			transport_new.setmPower(25);
			transport_old.setmData(1);
			transport_old.setmPower(25);
			//75*1/25 < 75*4/25
			bool actual = transport_new.Compare(transport_old);
			bool expected = true;
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(BusInputM)
		{
			ifstream fin("D:\\GitHub\\autoTransportOOP\\UnitTest\\In_Bus_Test.txt");
			if (fin.is_open())
			{
				Bus actual;
				actual.inData(fin);
				Bus expected;
				expected.setmPower(9);
				expected.setmData(7);
				expected.getmFuelConsumption(2);
				Assert::AreEqual(expected.getmPower(), actual.getmPower());
				Assert::AreEqual(expected.getmData(), actual.getmData());
				Assert::AreEqual(expected.getmFuelConsumption(), actual.getmFuelConsumption());
			}
		}

		TEST_METHOD(BusOutput)
		{
			ofstream fout("D:\\GitHub\\autoTransportOOP\\UnitTest\\Out_Bus_Test_Act.txt");
			Bus act;
			act.setmPower(5);
			act.setmData(100);
			act.getmFuelConsumption(12);

			act.Out(fout);
			fout.close();
			ifstream fin_act("D:\\GitHub\\autoTransportOOP\\UnitTest\\Out_Bus_Test_Act.txt");
			ifstream fin_exp("D:\\GitHub\\autoTransportOOP\\UnitTest\\Out_Bus_Test_Exp.txt");
			string expected, actual;
			getline(fin_act, actual, '\0');
			getline(fin_exp, expected, '\0');
			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(ContainerStream)
		{
			ifstream fin("D:\\GitHub\\autoTransportOOP\\UnitTest\\ContainerOutputIn.txt");
			ofstream fout("D:\\GitHub\\autoTransportOOP\\UnitTest\\ContainerOutput.txt");
			if (fin.is_open())
			{
				Container c;
				c.In(fin);
				c.Out(fout);
				fout.close();
			}
			ifstream fin_exp("D:\\GitHub\\autoTransportOOP\\UnitTest\\ContainerOutputExp.txt");
			ifstream fin_act("D:\\GitHub\\autoTransportOOP\\UnitTest\\ContainerOutput.txt");
			string expected((std::istreambuf_iterator<char>(fin_exp)), std::istreambuf_iterator<char>());
			string actual((std::istreambuf_iterator<char>(fin_act)), std::istreambuf_iterator<char>());
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(SortContainer)
		{
			ifstream fin("D:\\GitHub\\autoTransportOOP\\UnitTest\\ContainerOutputIn.txt");
			ofstream fout("D:\\GitHub\\autoTransportOOP\\UnitTest\\ContainerOutput.txt");
			Container c;
			c.In(fin);
			c.Sort();
			c.Out(fout);
			fout.close();
			ifstream fin_exp("D:\\GitHub\\autoTransportOOP\\UnitTest\\SortContainerExp.txt");
			ifstream fin_act("D:\\GitHub\\autoTransportOOP\\UnitTest\\ContainerOutput.txt");
			string expected((std::istreambuf_iterator<char>(fin_exp)), std::istreambuf_iterator<char>());
			string actual((std::istreambuf_iterator<char>(fin_act)), std::istreambuf_iterator<char>());
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(OnlyBus)
		{
			ifstream fin("D:\\GitHub\\autoTransportOOP\\UnitTest\\ContainerOutputIn.txt");
			ofstream fout("D:\\GitHub\\autoTransportOOP\\UnitTest\\ContainerOutput.txt");
			Container c;
			c.In(fin);
			c.outBus(fout);
			fout.close();
			ifstream fin_exp("D:\\GitHub\\autoTransportOOP\\UnitTest\\OnlyBusExp.txt");
			ifstream fin_act("D:\\GitHub\\autoTransportOOP\\UnitTest\\ContainerOutput.txt");
			string expected((std::istreambuf_iterator<char>(fin_exp)), std::istreambuf_iterator<char>());
			string actual((std::istreambuf_iterator<char>(fin_act)), std::istreambuf_iterator<char>());
			Assert::AreEqual(expected, actual);
		}
	};
}
