/*
for문은 반복 횟수가 정해진 경우에 쓰기 좋다.

*/

#include <iostream>

using namespace std;

int pow(int base, int exponent)
{
	int result = 1;

	for (int count = 0; count < exponent; ++count)
	{
		result *= base;
	}

	return result;
}

int main()
{

	for (int count = 0; count < 10; ++count)
	{
		cout << count << endl;
	}

	cout << "---------------------------" << endl;

	int count = 0;
	for (; count < 10; ++count)
	{
		cout << count << endl;
	}
	cout << count << endl;

	cout << "---------------------------" << endl;

	int count1 = 0;
	// 무한 루프1
	for (; true; ++count1)
	{
		cout << count << endl;
	}

	// 무한 루프2
	for (; ; ++count1)
	{
		cout << count << endl;
	}

	cout << pow(2, 4) << endl;

	cout << "---------------------------" << endl;

	// 등호를 있을 때 없을 때 비교도 해보기
	for (int count = 9; count >= 0; --count)
	{
		cout << count << endl;
	}

	cout << "---------------------------" << endl;

	for (int i = 0, j = 0; i < 10; ++i, --j)
	{
		cout << i << " " << j << endl;
	}

	cout << "---------------------------" << endl;

	for (int i = 0, j = 0; (i + j) < 10; ++i, j += 2)
	{
		cout << i << " " << j << endl;
	}

	cout << "---------------------------" << endl;

	for (int j = 0; j < 9; ++j)
	{
		for (int i = 0; i < 9; ++i)
		{
			cout << i << " " << j << endl;
		}
	}

	cout << "---------------------------" << endl;

	// while문과 동일하게 unsigned int는 문제가 생긴다
	// 왜 그러는 지 생각 해볼 것
	for (unsigned int i = 9; i >= 0; --i)
	{
		cout << i << endl;
	}

	return 0;

}