#include <iostream>

using namespace std;

int main()
{
	// logical NOT
	bool x = true;

	cout << !x << endl;

	// logical AND
	bool x1 = true;
	bool y1 = false;
	cout << (x1 && y1) << endl;
	
	// ex
	bool hit = true;
	int health = 10;

	if (hit == true && health < 0)
	{
		cout << "die " << endl;
	}
	else
	{
		health -= 10;
	}

	// logical OR
	// 둘 중에 하나만 true이면 true
	bool x2 = true;
	bool y2 = false;
	cout << (x2 || y2) << endl;

	//ex
	int a = 1;

	if (a == 0 || a == 1)
	{
		cout << "a is 0 or 1" << endl;
	}

	// short circuit evaluation
	// x3 = 2로 바꿀때 y3은 2가 나온다
	int x3 = 1;
	int y3 = 2;

	// AND는 왼쪽을 먼저 계산해본 다음에 false이면 오른쪽을 계산을 안한다
	// 그래서 x3이 2일때 false이니까 y3의 값이 계산이 안되기 때문에 
	// y3는 2가 나온다
	if (x3 == 1 && y3++ == 2)
	{
		// do something
	}
	cout << y3 << endl;

	bool x4 = true;
	bool y4 = false;

	// De Morgan's Law(드 모르간 법칙)
	// 둘은 다르다
	cout << !(x4 && y4) << endl;
	cout << (!x4 && !y4) << endl;

	// XOR 
	// false	false	false
	// false	true	true
	// true		false	true
	// ture		true	false

	// AND연산자가 OR연산자보다 우선순위가 높다


	return 0;
}