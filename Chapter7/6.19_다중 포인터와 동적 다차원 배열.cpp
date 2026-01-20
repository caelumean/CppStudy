/*
동적 메모리 할당을 통해서 다차원 배열을 만드는 방법

*/
#include <iostream>

using namespace std;

int main()
{
	int* ptr = nullptr;
	int** ptrptr = nullptr;

	int value = 5;

	ptr = &value;
	// ptrptr에 ptr의 주소를 넣음
	ptrptr = &ptr;

	// value의 주소 / ptr주소의 값 / ptr 자신의 주소
	cout << ptr << " " << *ptr << " " << &ptr << endl;
	// ptr의 주소 / ptrptr주소의 값(ptr의 주소에 있는 값 = value의 주소) / ptrptr 자신의 주소 
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
	// ptrptr이 가리키고 있는 ptr이 가리키는 값
	cout << **ptrptr << " " << endl;

	// 3중 4중도 되지만 거의 안쓴다.

	int*** ppptr;

	// 5개의 원소가 3줄 있는 것이다.
	const int row = 3;
	const int col = 5;

	const int s2da[row][col] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	

	{
		int* r1 = new int[col] {1, 2, 3, 4, 5};
		int* r2 = new int[col] {6, 7, 8, 9, 10};
		int* r3 = new int[col] {11, 12, 13, 14, 15};

		int** rows = new int* [row] {r1, r2, r3};

		for (int r = 0; r < row; ++r)
		{
			for (int c = 0; c < col; ++c)
			{
				cout << rows[r][c] << " ";
			}
			cout << endl;
		}

		delete[] r1;
		delete[] r2;
		delete[] r3;
		delete[] rows;
	}
	
	// 이중 포인터 for문으로 바꾸는 방법
	int** matrix = new int* [row];

	for (int r = 0; r < row; ++r)
	{
		matrix[r] = new int[col];
	}
	
	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			matrix[r][c] = s2da[r][c];
		}
		cout << endl;
	}

	// print all elements
	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			cout << matrix[r][c] << " ";
		}
		cout << endl;
	}

	// delete
	for (int r = 0; r < row; ++r)
	{
		delete [] matrix[r];
	}
	delete[] matrix;

	// 또 다른 방법
	{
		// 이차원 array인 것 처럼 1차원array를 사용해야한다.
		int* matrix = new int[row * col];

		for (int r = 0; r < row; ++r)
		{
			for (int c = 0; c < col; ++c)
			{
				// 첫번째 row에 두번째 값
				// 생각해보기
				matrix[c + col * r] = s2da[r][c];
			}
			cout << endl;
		}

		// print all elements
		for (int r = 0; r < row; ++r)
		{
			for (int c = 0; c < col; ++c)
			{
				cout << matrix[c + col * r] << " ";
			}
			cout << endl;
		}

	}

	return 0;
}