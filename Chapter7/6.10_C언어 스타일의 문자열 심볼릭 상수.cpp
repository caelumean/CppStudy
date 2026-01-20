#include <iostream>

using namespace std;

// 리턴 타입으로도 쓸 수 있다.
const char* getName()
{
	return "JakcJack";
}

int main()
{
	// JackJack을 기호적인 상수처럼 사용할 수 있다.
	//const char* name = "Jack Jack";
	//const char* name2 = "Jack Jack";

	const char* name = getName();
	const char* name2 = getName();


	// 두 개의 주소가 같다.
	// 같으니깐 같은 메모리 주소를 써라라고 컴파일러가 그렇게 한다.
	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;

	cout << "--------------------------------------" << endl;

	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello, World";
	const char* name3 = "Jack Jack";

	// cout에서 문자열 포인터가 들어오면
	// 문자열이지 않을까 가정하고 처리한다.
	cout << int_arr << endl;	// 주소
	cout << char_arr << endl;	// 문자열
	cout << name3 << endl;		// 문자열

	char c = 'Q';
	// c가 문자열이라는 것을 가정하고 널이 나올때까지 출력한 것이다.
	cout << &c << endl;
	// 그래서 역참조를 하면 정상적으로 나온다.
	cout << *&c << endl;



	return 0;
}