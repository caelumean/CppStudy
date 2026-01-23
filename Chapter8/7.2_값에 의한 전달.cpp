#include <iostream>

using namespace std;

// y에 어떤 내용이 들어오느냐에 따라서
// 실행하는 내용과 결과가 달라질 수 있다
void doSomething(int y)
{
	cout << "In func " << y << " " << &y << endl;
}

int main()
{
	// 내부적으로 int y가 선언이 되고 
	// y라는 변수에 5라는 값이 복사되서 초기화가 된다.
	doSomething(5);

	int x = 6;

	// 만약 x라는 변수가 그대로 전달이 되는 것이라면
	// doSomethig안에 있는 y의 주소와 x의 주소가 똑같이 나와야한다.
	// 하지만 다르게 뜬다.
	cout << "In main" << x << " " << &x << endl;

	// 실제로 전달되는 것은 x라는 변수에 들어있는 값인 6만 전달이 되는 것이다.
	doSomething(x);
	doSomething(x + 1);

	return 0;
}