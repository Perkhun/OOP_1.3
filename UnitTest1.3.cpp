#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_1.3/Money.h"
#include "../lab_1.3/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest13
{
	TEST_CLASS(UnitTest13)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money s;
			s.Init(500, 3);
			Assert::IsTrue(s.getCurrency(500) == 3);
		}
	};
}
