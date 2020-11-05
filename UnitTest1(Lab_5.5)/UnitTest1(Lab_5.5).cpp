#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.5/Lab_5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1Lab55
{
	TEST_CLASS(UnitTest1Lab55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int depth = 0;
			int g = f(20,1,depth);
			Assert::AreEqual(g, 9);
		}
	};
}
