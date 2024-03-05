#include "pch.h"
#include "CppUnitTest.h"
#include "..//2Slab1.6.test/pair.h"
#include "..//2Slab1.6.test/pair.cpp"
#include "..//2Slab1.6.test/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestPairDifference)
		{
			Pair p1(10, 8);
			Pair p2(3, 2);
			Pair difference = p1 - p2;
			Assert::AreEqual(-4, difference.getNumerator());
			Assert::AreEqual(16, difference.getDenominator());
		}
		
	};
}
