#include <iostream>

using namespace std;


struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

// void doSomething(int n)
// reference를 쓰면 변수 자체가 넘어간다.
// 그래서 주소가 똑같다.
// const를 붙여서 못바꾸게 막는 추세이다.
void doSomething(const int &n)
{
	cout << "In doSomething"  << &n << endl;

	// n = 10;
	cout << "In doSomething" << n << endl;
}
void printElements(int(&arr)[5])
{
	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int value = 5;

	
	int* ptr = nullptr;
	ptr = &value;
	

	// 참조변수(reference variable)
	// 같은 메모리를 사용하는 것 처럼 작동을 한다.
	int& ref = value;

	cout << ref << endl;
	ref = 10;	// *ptr=10;

	cout << value << " " << ref << endl;
	
	cout << &value << endl;
	// reference는 주소도 같다.
	// 한 변수의 또다른 이름
	// value의 주소를 공유한다.
	cout << &ref << endl;
	// 포인터 변수가 담고 있는 주소
	cout << ptr << endl;
	// 포인터 자체의 주소
	// 포인터도 변수이다.
	cout << &ptr << endl;

	cout << "-----------------------------------------------" << endl;
	int value1 = 6;
	// reference는 반드시 초기화해야 한다.
	int& ref1 = value1;

	const int value2 = 8;
	// 이건 안된다.
	//int& ref2 = value2;
	const int& ref2 = value2;

	cout << "-----------------------------------------------" << endl;

	int value3 = 5;
	int value4 = 10;

	int ref3 = value3;

	cout << ref3 << endl;

	ref3 = value4;

	cout << ref3 << endl;

	cout << "-----------------------------------------------" << endl;

	// 중요!!
	int n = 5;
	cout << n << endl;
	
	cout << &n << endl;

	doSomething(n);

	cout << n << endl;

	cout << "-----------------------------------------------" << endl;


	const int lenght = 5;
	int arr[lenght] = { 1,2,3,4,5 };

	printElements(arr);

	cout << "-----------------------------------------------" << endl;

	{
		Other ot;
		int& v1 = ot.st.v1;
		v1 = 1;
	}

	
	cout << "-----------------------------------------------" << endl;

	{
		int value = 5;
		int* const ptr = &value;
		int& ref = value;

		// 동일하게 작동한다
		// 레퍼런스도 내부적으로 포인터로 구현이 되어있다.
		*ptr = 10;
		ref = 10;

	}


	return 0;
}