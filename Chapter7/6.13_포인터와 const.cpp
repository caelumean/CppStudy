#include <iostream>

using namespace std;
int main()
{
	// value의 값을 못바꾸고 
	// 그렇다고해서 value의 주소를 가져올 수 있다.
	// 포인터를 통해서 value를 읽을 수 있다.
	// const int value = 5;
	int value = 5;
	const int* ptr = &value;
	//*ptr = 6;		//  value = 6이 안되는 거와 같다
	// int value인 경우
	// value 의 값을 바꿀 수 있다.
	value = 6;

	cout << *ptr << endl;

	cout << "------------------------------------------" << endl;
	int value1 = 5;

	// 내가 가리키고 있는 주소의 값을 안 바꾸겠다는 뜻이지
	// ptr에 저장되어있는 주소값을 안바꾸겠다는 뜻이 아니다
	const int* ptr2 = &value1;

	int value2 = 6;
	ptr2 = &value2;

	cout << "------------------------------------------" << endl;
	// 포인터 자체가 상수인 경우
	int value3 = 5;
	int* const ptr3 = &value3;
	*ptr3 = 10;
	cout << *ptr3 << endl;

	int value4 = 8;
	// const 가 ptr3 앞에 있으면
	// 주소값을 못 바꾼다.
	// ptr3 = &value2;
	cout << "------------------------------------------" << endl;
	int value5 = 5;
	// const가 이렇게 붙어있으면
	// 주소의 값고 못 바꾸고 주소값도 못 바꾼다.
	const int* const ptr4 = &value5;

	


	return 0;

}