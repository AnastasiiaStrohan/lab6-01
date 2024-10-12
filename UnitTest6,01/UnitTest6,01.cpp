#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6,01/lab6,01.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;



namespace UnitTest601
{
	TEST_CLASS(UnitTest601)
	{
	public:

		TEST_METHOD(TestGenerateArray)
		{
			int expectedArray[SIZE] = { 17, 8, -14, 13, -9, 25, 0, 6, 11, -3, 4, -1, 5, 22, 10, 20, 3, 18, 19, -7, 0, 1, 2 };
			int actualArray[SIZE];

			
			GenerateArray(actualArray, SIZE);

			
			for (int i = 0; i < SIZE; i++) {
				Assert::AreEqual(expectedArray[i], actualArray[i]);
			}
		}

		TEST_METHOD(TestCountAndSumElements)
		{
			int testArray[SIZE] = { 17, 8, -14, 13, -9, 25, 0, 6, 11, -3, 4, -1, 5, 22, 10, 20, 3, 18, 19, -7, 0, 1, 2 };
			int count = 0, sum = 0;

			
			CountAndSumElements(testArray, SIZE, count, sum);

			
			Assert::AreEqual(13, count);  
			Assert::AreEqual(152, sum);   
		}

		TEST_METHOD(TestReplaceElementsWithZero)
		{
			int testArray[SIZE] = { 17, 8, -14, 13, -9, 25, 0, 0, 11, -3, 4, -1, 5, 22, 10, 20, 3, 18, 19, -7, 0, 1, 2 };
			int expectedArray[SIZE] = { 0, 8, -14, 0, -9, 0, 0, 0, 0, -3, 4, -1, 0, 0,0, 20, 0, 0, 0, -7, 0, 0, 0 };

			
			ReplaceElementsWithZero(testArray, SIZE);

			
			for (int i = 0; i < SIZE; i++) {
				Assert::AreEqual(expectedArray[i], testArray[i]);
			}
		}
	};
}