#include <iostream>

using namespace std;

void foo(const int* ptr)
{
	cout << *ptr << " " << ptr << " " << &ptr << endl;

}

int man()
{
	int value = 5;

	cout << value << " " << &value << endl;

	int* ptr = &value;

	foo(ptr);
	foo(&value);
	// 받는 곳은 주소인데 5는 리터럴이여서 안된다.
	//foo(5);
	// 포인터 변수도 변수이기 때문에 복사가 되어서 전달이 된다.
	// 내부적으로는 값에 의한 전달이다.
	cout << &ptr << endl;

	return 0;
	
}