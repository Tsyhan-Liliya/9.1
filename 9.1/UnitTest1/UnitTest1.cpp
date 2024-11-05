#include "pch.h"
#include "CppUnitTest.h"
#include "../9.1/var.cpp"
#include "../9.1/dod.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			nsVar::x = 2.0; 
			nsVar::n = 1;   
			nsVar::a = 1.0; 

			nsDod::dod();

			double expected_a = 1.0 * ((1 * 2.0) - 1) / ((1 * 2.0) + 2.0); //обчислення а

			Assert::AreEqual(expected_a, nsVar::a, 0.0001);

		}
	};
}
