#include <iostream>

using namespace std;

void doSomething(int x)
{
	x = 123;
	// #2
	// doSomethig 함수 내에 있는 변수 x가 값 123이기 때문에
	// 123이 출력된다.
	cout << x << endl;
}

int main()
{
	int x = 0;

	// #1
	// 0이 출력된다.
	cout << x << endl;
	doSomething(x);
	// #3
	// 0이 출력된다
	cout << x << endl;

	return 0;
}