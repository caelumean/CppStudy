#include <iostream>

using namespace std;

enum Type
{
	INT,
	FLOAT,
	CHAR
};


int mani()
{
	int i = 5;
	float f = 3.0f;
	char c = 'a';

	void* ptr = nullptr;

	// 보이드 포인터는 제네릭 포인터라고도 불리고 제네릭은 포괄적이라는 뜻을 가지고 있다.
	// 그래서 안좋은 점은 이게 무슨 타입인지 정확히 알 수가 없다.
	ptr = &i;
	ptr = &f;
	// ptr = &c;

	// void 이기 때문에 포인터 연산을 할 수가 없다.
	// cout << ptr + 1 << endl;
	cout << &f << " " << ptr << endl;
	// 역참조도 안된다.
	cout << *ptr << endl;
	// 구차하게라도 하는 방법
	cout << static_cast<float*>(ptr) << endl;

	cout << "------------------------------------" << endl;

	// 어쩔 수 없이 이렇게라도 해야하는 일이 생긴다.
	Type type = FLOAT;

	if (type == FLOAT)
	{
		cout << static_cast<float*>(ptr) << endl;
	}
	else if (type == INT)
	{
		cout << static_cast<int*>(ptr) << endl;
	}

	// 다행스럽게도 저런 구차한 방법은 안해도 되게 바뀌었다.
	return 0;
}