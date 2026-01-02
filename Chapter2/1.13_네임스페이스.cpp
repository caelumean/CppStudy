#include <iostream>
namespace MySpace1
{
	int doSomething(int a, int b)
	{
		return a + b;
	}
}

int doSomething(int a, int b)
{
	return a * b;
}
using namespace std;

int main()
{
	// namespace MySpace1안에 있는 doSomething을 쓸 수 있다.
	cout << MySpace1::doSomething(3, 4) << endl;
	cout << doSomething(3, 4) << endl;

	return 0;
}