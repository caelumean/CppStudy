#include <iostream>

using namespace std;
// 범위는 중괄호를 기준으로 하고
// 중괄호 안에 있는 변수는 중괄호를 벗어나면 사라진다.
int main()
{
	// 이렇게 쓰면 에러가 생긴다.
	// 변수 이름 중복
	int x(0); // x = 0;
	// int x = 1;
	
	cout << x << " " << &x << endl;
	// {} (중괄호) 
	// 중괄호의 역할은 영역을 분리하는 것이다.
	{
		// 이 x는 다른 메모리에 대한 식별자
		int x = 1;
		cout << x << " " << &x << endl;
	}
	{
		int x = 2;
		cout << x << " " << &x << endl;
	}
	{
		x = 1;
		cout << x << " " << &x << endl;
	}

	x = 2;
	cout << x << " " << &x << endl;
	
	return 0;
}