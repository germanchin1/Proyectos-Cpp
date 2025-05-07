#include "pch.h"
#include "CppUnitTest.h"
#include "..\Calculadora2\Calculadora2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestCalculator
{
	TEST_CLASS(UnitTestCalculator)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			 x = 5;
			 y = 7;
			 sumar();
			 Assert::AreEqual(12, sum, L"Reslutado incorrecto");

		}
		TEST_METHOD(TestMethod1)
		{
			 x = 10;
			 y = 5;
			 restar();
			 Assert::AreEqual(5, res, L"Reslutado incorrecto");

		}

		TEST_METHOD(TestMethod1)
		{
			 x = 10;
			 y = 5;
			 multiplicar();
			 Assert::AreEqual(50, multi, L"Reslutado incorrecto");

		}
	};
}
