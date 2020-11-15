#include "pch.h"
#include "CppUnitTest.h"
#include "../лаб 6,3/лаб 6,3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
	TEST_CLASS(UnitTest63)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			int t;
			const int n = 4;
			int r[n] = { 20, 1, -5, 6 };
			t = Sum(r, n);
			Assert::AreEqual(t, 7);

		}
	};
}
