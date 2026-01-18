#include <iostream>

using namespace std;
int min(int x, int y)
{
	if (x > y)
	{
		return y;
	}
	else
	{
		return x;
	}

	// 이렇게도 가능하다
	// return (x > y) ? y : x;
}

int main()
{
	int x;
	cin >> x;

	if (x > 10)
	{
		cout << x << " is greater than 10" << endl;
	}
	// 블럭({})이 없으면 한 줄만 실행된다.
	
	else
	{
		cout << x << " not is greater than 10" << endl;
		cout << "Test 1" << endl;
	}
	cout << "------------------------------" << endl;

	// 0이 아니면 true
	// 항상 실행시키고 싶다.(무한 루프)
	// 초보자들이 자주 실수하는 부분
	// { } 중괄호 안에 변수가 들어가면 수명은 중괄호 범위 안이다.
	// 중괄호가 없어도 내부적으로 그 범위 안이다.
	if (1)
	{
		int x = 5;
	}
	else
	{
		int x = 6;
	}

	cout << "--------------------------------" << endl;


	if (x > 10)
		cout << "x is greater than 10" << endl;
	else if (x < 10)
		cout << "x is less than 10" << endl;
	else
		cout << "x is exactly 10" << endl;

	cout << "--------------------------------" << endl;

	if (x >= 10)
	{
		if (x >= 20)
			cout << "x is between 10 and 20" << endl;
		else
			cout << "...." << endl;
	}

	cout << "--------------------------------" << endl;

	int x1, y1;
	cin >> x1 >> y1;

	if (x1 > 0 && y1 > 0)
	{
		cout << "both numbers are positive" << endl;
	}
	else if (x > 0 || y1 > 0)
	{
		cout << "one of the numbers is positive" << endl;
	}
	else
	{
		cout << "Neither number is positive" << endl;
	}

	cout << "--------------------------------" << endl;

	int x2, y2;
	cin >> x2 >> y2;

	if (x2 > 10)
	{
		cout << "A" << endl;
	}
	else if (x2 == -1)
	{
		return 0; // exit(0);
	}
	else if (x2 < 0)
	{
		cout << "B" << endl;
	}

	cout << "--------------------------------" << endl;
	// 널 스테이먼트
	// 아무것도 안하겠다.
	// 실수를 많이 할 수 있으니
	// 주석을 달아서 왜 쓰는지 기록하기
	if (x2 > 10)
		;

	cout << "--------------------------------" << endl;

	// 이런 경우에 어마무시한 일이 발생한다.
	// x에 0이 들어가고 항상 x가 0이 된다.
	// 그래서 false가 되고 if문 안에 안 들어간다.
	if (x2 = 0) // if (x == 0)
	{
		cout << x << endl;
	}
	cout << x << endl;


	return 0;

}