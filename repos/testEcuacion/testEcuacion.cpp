#include "pch.h"
#include "CppUnitTest.h"
#include "..\EcuaciónSegundoGrado_2\EcuaciónSegundoGrado_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testEcuacion
{
	TEST_CLASS(testEcuacion)
	{
	public:
		
		TEST_METHOD(Test2Soluciones)
		{
			 a = 1;
			 b = -3;
			 c = 2;
			 calcular();
			 Assert::AreEqual(2.0, x1, L"mal resultado");
			 Assert::AreEqual(1.0, x2, L"mal resultado");


		}
	};
}
