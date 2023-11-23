#include "pch.h"
#include "CppUnitTest.h"
#include "../Project7.2.іт/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int rows = 3;
			int cols = 3;
			int** matrix = new int* [rows];
			for (int i = 0; i < rows; i++) {
				matrix[i] = new int[cols];
			}
			matrix[0][0] = 1;
			matrix[1][0] = -2;
			matrix[2][0] = 5;

			matrix[0][1] = 2;
			matrix[1][1] = 3;
			matrix[2][1] = 1;

			matrix[0][2] = -3;
			matrix[1][2] = 0;
			matrix[2][2] = 4;

			int minInEvenCol = SearchMaxPoss(matrix, rows, cols);
			Assert::AreEqual(minInEvenCol, 1);
			for (int i = 0; i < rows; i++) {
				delete[] matrix[i];
			}
			delete[] matrix;
		}
	};
}
