#include <iostream>

using namespace std;

int main()
{
	// 정적으로 할당하는 메모리는 스택에 들어간다
	// 스택은 메모리가 작다
	// 동적으로 할당되는 메모리는 힙에 들어간다
	// 힙은 메모리가 크다
	// 그래서 동적으로 사용하는 것이 중요하다!!
	//int array[100000];

	// int사이즈에 맞춰서 os에게 메모리를 받아와서 그 메모리 주소를 알려준다.
	// int var
	// var =7; 과 같다.
	// int* ptr = new int;
	int* ptr = new int{ 7 };

	// *ptr = 7;

	cout << ptr << endl;
	cout << *ptr << endl;

	// os에게 메모리를 돌려주는 방법
	// 주의할 점
	// 프로그램이 종료됨과 동시에 자동으로 알아서 메모리를 돌려받는다.
	// delete는 내가 먼저 반납하겠다라는 그런 차이가 있다.
	delete ptr;

	// 매우 중요!!
	// 메모리는 이미 반납을 했는데 
	// 주소는 남아있어서 그 주소를 따라가서 
	// 그 값은 알 수 없는 값이 들어가 있다.
	cout << "After delete" << endl;
	//cout << ptr << endl;
	//cout << *ptr << endl;
	//ptr = nullptr;

	// 위를 방지하는 방법
	// 1. delete 한 후에 ptr에 nullptr/NULL / 0을 넣어준다

	cout << "ptr is nullptr " << endl;
	ptr = nullptr;

	// if(ptr)
	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}

	// 다른 메모리에 다 쓰고 있어서 
	// 그런 상황에서 쓰는 방법
	// 오류를 발생시키지 않고 밀어붙인다.
	int* ptr1 = new(std::nothrow)int{ 7 };

	if (ptr1)
	{
		cout << ptr1 << endl;
		cout << *ptr1 << endl;

	}
	// 친절하게 프로그래밍하고 싶다면 
	else
	{
		cout << "Could not allocate memory" << endl;
	}

	// 흔히 할 수 있는 실수

	int* ptr2 = new(std::nothrow)int{ 7 };
	int* ptr3 = ptr2;

	delete ptr2;
	ptr2 = nullptr;
	// 꼭 해줘야한다.
	// 꼼꼼하게 신경써줘야한다.
	ptr3 = nullptr;


	// 메모리 누수 (memory leak)
	// 쓰지도 않고 만들기만 해서 어디서 메모리를 쓰는지 알 수 도 없는 상황

	while (true)
	{
		// 완전 쓸데없는 짓이다
		// 지우는 것을 깜빡하면 문제가 생긴다.
		int* ptr = new int;
		cout << ptr << endl;

		delete ptr;
	}

	// new / delete는 좀 느린편이다.
	// os에 갔다와야하기 때문에 느린편



	return 0;
}