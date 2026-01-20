#include <iostream>
#include <cstddef>
using namespace std;

// 파라미터로 넘어오는 변수는 다시 선언이 되고
// argument로 들어온 변수로 들어있는 값이 복사가 되는 것이다.
// 그래서 다른 메모리를 쓰기 때문에 주소가 다르다.
void doSomething(double* ptr)
{

	cout << "address of pointer varaible in Something" << &ptr << endl;
	if (ptr != nullptr)
	{
		// do something useful
		cout << *ptr << endl;
	}
	else
	{
		// do nothing with ptr
		cout << "Null ptr, do nothing" << endl;
	}
}

int main()
{
	double* ptr = nullptr;

	doSomething(ptr);
	doSomething(nullptr);

	double d = 123.4;

	doSomething(&d);

	ptr = &d;

	doSomething(ptr);

	// nullptr만 넣을 수 있다.
	// 파라미터중에 간혹 nullptr만 받는 경우가 있을 때 쓴다.
	nullptr_t nptr;
	
	cout << "address of pointer varaible in main" << &ptr << endl;

	return 0;
}