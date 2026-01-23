// 함수가 수행한 결과를 어떻게 돌려받을 것인가.
#include <iostream>
#include <array>
#include <tuple>

using namespace std;

std::tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;

	return std::make_tuple(a, d);
}
struct S
{
	int a, b, c, d;
};
S getStruct()
{
	S my_s{ 1,2,3,4 };

	return my_s;
};

int& get(std::array<int, 100>& my_array, int ix)
{
	return my_array[ix];
}
int& getValue1(int x)
{
	int value = x * 2;

	// 지역변수일 때에는 이렇게 리턴을 해버리면 안된다.
	return value;
}

int* allocateMemory(int size)
{
	return new int[size];
}

// 주소값으로 돌려받는 법
int* getValue(int x)
{
	
	int value = x * 2;
	
	return &value;
}

int main()
{
	// 복사가 여러번 되기 때문에 속도가 느릴 것이다.
	// 그걸 해결하는 방법
	// 
	// int value1 = getValue(3);

	// 1. 디레퍼런싱(역참조)을 해서 받는 방법이 있는데
	// 이것은 권장하지 않는다.
	// getValue 함수 안에 있는 value가 영역을 벗어남과 동시에 사라진다
	// 그래서 사라질 변수에 대해서 디레퍼런싱(역참조)을 하는 것은 안전하지가 않다.
	int value2 = *getValue(3);

	// 2. 주소로 직접받는 방법
	// 이 방법은 굉장히 위험하다 
	// value는 영역을 넘어가면서 사라지는데
	// 주소를 갖고 있어봤자이다.
	int* value3 = getValue(3);

	cout << "------------------------------------" << endl;
	// new int[10] 이 부분을 함수로 뽑아내고 싶을 때가 있다.
	// 일반적으로 이런식으로 동적메모리 할당하는 방법은 프로그래머를 힘들게 만들 수 있다.
	int* array = new int[10];
	int* array1 = allocateMemory(1024);

	delete[] array;


	cout << "------------------------------------" << endl;
	// return by reference
	// 비교적 안전하게 나온다.
	int value4 = getValue1(5);
	// 받는 쪽에서도 레퍼런스로 받으면 
	// getValue1() 함수에서 value값은 영역을 벗어나면 사라진다.
	// 그래서 문제가 생긴다.
	// 두 번 출력하면
	// 이렇게 사용하는 것은 안좋다
	int& value5 = getValue1(5);

	cout << value5 << endl;
	// 그래서 쓰레기 값이 나와버린다.
	cout << value5 << endl;
	cout << "------------------------------------" << endl;
	// return by reference를 더 편하게 사용하는 방법
	std::array<int, 100> my_array;
	my_array[30] = 10;
	// 변수처럼 편리하게 사용할 수 있다.
	get(my_array, 30) = 1024;
	// get(my_array, 30) *= 10;

	cout << my_array[30] << endl;

	cout << "------------------------------------" << endl;

	// 리턴 값을 여러개를 받고 싶을 때
	// 1. 구조체를 통해서 받기
	// 구조체를 통해서 리턴값을 여러개 받으면 값을 여러개를 한꺼번에 받는 효과가 나타난다.
	// 단점 : 함수를 하나 만들때마다 구조체를 만들어야 한다.
	S my_s = getStruct();


	cout << "------------------------------------" << endl;
	// 리턴 값을 여러개를 받고 싶을 때
	// 2. 튜플 사용
	std::tuple<int, double> my_tp = getTuple();
	cout << std::get<0>(my_tp) << endl;	// a
	cout << std::get<1>(my_tp) << endl;	// b

	cout << "------------------------------------" << endl;
	// 리턴 값을 여러개를 받고 싶을 때
	// 3. C++17
	auto [a, d] = getTuple();
	cout << a << endl;
	cout << d << endl;


	return 0;
}