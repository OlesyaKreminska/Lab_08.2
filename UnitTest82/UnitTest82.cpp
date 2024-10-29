#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "../Lab_08.2/Lab_08.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			string input = "Hello!123 world";
			string expected = "HELLO!123 world";
			Assert::AreEqual(expected, ConvertToUppercaseUntilSpace(input));
		}

		TEST_METHOD(TestMethod2)
		{
			string input = "test case with no space";
			string expected = "TEST case with no space"; 
			Assert::AreEqual(expected, ConvertToUppercaseUntilSpace(input));
		}
	};
}