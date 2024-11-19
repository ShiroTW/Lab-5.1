#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.1/Lab_5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double r = 1.0;
			double s = 1.0;

			double result = (g(1, r) + g(s * s - 1, r * r)) / (g(s, 1 + r));

			double expected = 1.22895;

			double epsilon = 1e-5;

			Assert::IsTrue(abs(result - expected) < epsilon, L"Result is not within the tolerance range.");
		}
	};
}