#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.4/lab_5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		int N = 1;
		TEST_METHOD(TestMethod_S0)
		{
			double res = round(S1(N, N)*10000)/10000;
			Assert::AreEqual(res, 22.7051);
		}
		TEST_METHOD(TestMethod_S1)
		{
			double res = round(S1(N, N) * 10000) / 10000;
			Assert::AreEqual(res, 22.7051);
		}
		TEST_METHOD(TestMethod_S2)
		{
			double res = round(S2(N, 22) * 10000) / 10000;
			Assert::AreEqual(res, 22.7051);
		}
		TEST_METHOD(TestMethod_S3)
		{
			double res = round(S3(N, N, 0) * 10000) / 10000;
			Assert::AreEqual(res, 22.7051);
		}
		TEST_METHOD(TestMethod_S4)
		{
			double res = round(S4(N, 22, 0) * 10000) / 10000;
			Assert::AreEqual(res, 22.7051);
		}
	};
}
