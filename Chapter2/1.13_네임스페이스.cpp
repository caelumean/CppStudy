#include <iostream>

namespace MySpace1
{
	int doSomething(int a, int b)
	{
		return a + b;
	}
}

namespace MySpace2
{
	//namespace안에 namespace를 또 만들 수 있다.
	namespace InnerSpace
	{
		int my_funtion()
		{
			return 3;
		}
	}
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

using namespace std;

int main()
{
	// namespace MySpace1안에 있는 doSomething을 쓸 수 있다.
	cout << MySpace1::doSomething(3, 4) << endl;
	cout << MySpace2::doSomething(3, 4) << endl;

	// MySpace1을 쓰는게 번거롭다면
	// 이렇게 네임스페이스를 써서 생략할 수 있다.
	using namespace MySpace1;

	cout << doSomething(5, 2) << endl;
	cout << MySpace2::InnerSpace::my_funtion() << endl;

	using namespace MySpace2::InnerSpace;
	cout << my_funtion() << endl;

	return 0;
}