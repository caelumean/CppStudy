#include <iostream>
#include <cmath>

using namespace std;
int main()
{

	int x, y;
	cin >> x >> y;

	while (true)
	{

		cout << "Your input values are : " << x << " " << y << endl;

		if (x == y)
		{
			cout << "equal" << endl;
			break;
		}
		if (x != y)
		{
			cout << "not equal" << endl;
			break;
		}
		if (x > y)
		{
			cout << "x is greater than y" << endl;
			break;
		}
		if (x < y)
		{
			cout << "x is less than y" << endl;
			break;
		}
		if (x >= y)
		{
			cout << "x is greater than y or equal to y" << endl;
			break;
		}
		if (x <= y)
		{
			cout << "x is less than or equal to y" << endl;
			break;
		}
	}

	// int끼리의 비교는 문제가 없다
	// 그러나 부동소수점끼리의 비교는 문제가 생긴다.
	// 수치해석학 공부해두는 게 좋다
	double d1(100 - 99.99); // 0.001
	double d2(10 - 9.99);	//0.001

	cout << d1 << endl;
	cout << d2 << endl;
	// 둘 값의 차이가 얼마나 나는지 알기 위해 
	cout << std::abs(d1 - d2) << endl;
	// 이 정도의 차이는 같다고 했으면 좋겠다라고 범위를 주는 방법
	// 앱실론의 값을 결정하는 것은 그때 그때마다 다르다.
	const double epsilon = 1e-10;
	if (std::abs(d1 - d2) < epsilon)
	{
		cout << "Approximately equal" << endl;
	}
	else
	{
		cout << "Not equal" << endl;
	}
	

	if (d1 == d2)
	{
		cout << "equal" << endl;
	}
	else
	{
		cout << "not equal" << endl;

		if (d1 > d2)
		{
			cout << "d1 > d2" << endl;
		}
		else
		{
			cout << "d1 < d2" << endl;
		}
	}
	return 0;


}