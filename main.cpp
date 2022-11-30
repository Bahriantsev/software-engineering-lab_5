 #include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Артем\source\repos\ConsoleApplication1\ConsoleApplication1\ConsoleApplication1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(calc_test)
	{
	public:
		
		TEST_METHOD(calc_25returned)
		{
			int x = -5;
			int n = 2;
			int exp = 325;

			int act = calc(n, x);
			Assert::AreEqual(exp, act);
		}
	public:
	    
		TEST_METHOD(calc_get2and1_2returned)
		{
			int x = 2;
			int n = 1;
			int exp = 2;
			int act = calc(n, x);
			Assert::AreEqual(exp, act);
		}
	};
	TEST_CLASS(params_test)
	{
	public:
		TEST_METHOD(checkParams_get4_exceptionNotThrouwn)
		{
			int n = 4;
			try
			{
				ValidParams(n);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	public:

		TEST_METHOD(checkParams_get0_exceptionThrouwn)
		{
			int n = 0;
			try
			{
				ValidParams(n);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
  

	};
}
