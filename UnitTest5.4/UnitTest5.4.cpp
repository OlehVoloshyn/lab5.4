#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			int i{};
			t = S0(0,5);
			Assert::AreEqual(t, (1. / i) + (sqrt(1 + sin(1. * i) * sin(1. * i))));
		}
	};
}
