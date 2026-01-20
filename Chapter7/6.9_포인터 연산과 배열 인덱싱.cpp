#include <iostream>

using namespace std;

int main()
{
	int value = 7;
	int* ptr = &value;

	cout << uintptr_t(ptr - 1) << endl;
	cout << uintptr_t(ptr) << endl;
	// 옆으로 한 칸 갔다는 것은
	// 이 데이터 타입의 크기에 맞춰서 한 칸 갔다는 뜻이다.
	cout << uintptr_t(ptr + 1) << endl;
	cout << uintptr_t(ptr + 2) << endl;

	// 배열은 주소가 이웃해있다.
	int array[] = { 9,7,5,3,1 };
	int* ptr1 = array;

	for (int i = 0; i < 5; ++i)
	{
		//cout << array[i] << " " << (uintptr_t)&array[i] << endl;
		cout << *(ptr1 + i) << (uintptr_t)(ptr1 + i) << endl;
	}
	

	char name[] = "Jack jack";

	const int n_name = sizeof(name) / sizeof(char);
	
	char* ptr2 = name;

	for (int i = 0; i < n_name; ++i)
	{
		cout << *(ptr2 + i);
	}

	// ++ptr

	

	return 0;
}