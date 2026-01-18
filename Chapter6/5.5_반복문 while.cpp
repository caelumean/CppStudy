#include <iostream>

using namespace std;

int main()
{
	cout << "while-loop test" << endl;
	int count = 0;

	// () 안에는 조건이 들어간다.
	// 안에 들어가 있는 조건이 true이면 작동을 한다.
	while (count < 10)
	{
		// 굳이 안에서 변수를 사용하고 싶다면
		// static을 붙여서 사용하면 된다.
		// static int count = 0;
		cout << count << endl;

		++count;
	}

	cout << "------------------------------------" << endl;

	unsigned int count1 = 10;

	// unsigned int 는 감소해서 가는 경우는 위험하다.
	// 그러나 최적화에서는 unsigned를 많이 쓰는 경우가 있기 때문에
	// 잘 생각해서 써야한다.

	while (count1 >= 10)
	{
		if (count1 == 0)
		{
			cout << "Zero";
		}
		else
		{
			cout << count1 << " ";
		}

		// 오버플로우를 발생시킨다.
		count1--;
	}

	cout << "------------------------------------" << endl;

	int count2 = 1;

	while (count2 < 100)
	{
		if (count2 % 5 == 0)
		{
			cout << "Hello" << count2 << endl;
		}
		count2++;
	}

	cout << "------------------------------------" << endl;
	int outer_count = 1;

	while (outer_count <= 5)
	{
		int inner_count = 1;

		while (inner_count < outer_count)
		{
			cout << inner_count++ << " ";
		}

		cout << endl;
		++outer_count;
	}
	return 0;
}