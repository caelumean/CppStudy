/*
	매개변수(Parameter)

	인자(Argument)

*/

#include <iostream>

using namespace std;

// 여기서 int x,int y는 함수 foo의 parameter이다.
// 이 parameter는 함수가 끝남과 동시에 사라진다.
int foo(int x, int y);

int foo(int x, int y)
{

	return x + y;
}

int main()
{
	int x = 1, y = 2;

	foo(6, 7);	// arguments (actual paremters, 실매개변수)
	foo(x, y);

	return 0;
}