#include <iostream>
#include <array>
#include<functional>

using namespace std;

// 함수도 포인터이다.
// 함수도 메모리에 들어온다.
// 함수도 주소를 갖고 있다.
int func1(int x)
{
	return 7;
}
int func()
{
	return 5;
}
int goo()
{
	return 10;
}
bool isEven(const int& number)
{
	if (number % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isOdd(const int& number)
{
	if (number % 2 != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// void printNumbers(const array<int, 10>& my_array, bool print_even)
// typedef로 줄일 수 있다.
//typedef bool (*check_fcn_t)(const int&);

//using으로도 쓸 수 있다.
using check_fcn_t = bool(*)(const int&);
// void printNumbers(const array<int, 10>& my_array, bool (*check_fcn)(const int&))
//void printNumbers(const array<int, 10>& my_array, check_fcn_t check_fcn = isEven)

void printNumbers(const array<int, 10>& my_array, std::function<bool(const int&)> check_fcn = isEven)
{
	/*
	for (auto element : my_array)
	{
		if (element % 2 == 0)
		{
			cout << element;
		}
	}*/
	for (auto element : my_array)
	{
		/*
		// 짝수 
		if (print_even && element % 2 == 0)
		{
			cout << element;
		}
		// 홀수 
		if (!print_even && element == 1)
		{
			cout << element;
		}
		*/
		if (check_fcn(element) == true)
		{
			cout << element;
		}
	}
	cout << endl;
	
}
int main()
{
	func();
	cout << func << endl;

	cout << "-----------------------------------" << endl;

	// 함수 포인터
	// 함수의 주소를 갖고 온다.
	int (*fcnptr)() = func;
	cout << fcnptr() << endl;

	fcnptr = goo;

	cout << fcnptr() << endl;

	int (*fcnptr1)(int) = func1;

	cout << fcnptr1 << endl;

	cout << "-----------------------------------" << endl;

	// 함수 포인터를 매개변수로 넣을 수 있다.
	std::array<int, 10> my_array{ 0,1,2,3,4,5,6,7,8,9 };

	/*printNumbers(my_array,true);
	printNumbers(my_array,false);*/
	printNumbers(my_array, isEven);
	printNumbers(my_array, isOdd);


	cout << "-----------------------------------" << endl;
	// functional
	std::function<bool(const int&)> fcnptr3 = isEven;
	printNumbers(my_array, fcnptr3);
	fcnptr3 = isOdd;

	printNumbers(my_array, fcnptr3);

	return 0;
}
