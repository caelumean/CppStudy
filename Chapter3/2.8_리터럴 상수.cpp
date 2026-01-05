#include <iostream>

int main()
{

	using namespace std;

	float pi = 3.14f;
	// u는 unsigned
	// 이렇게 쓰는 것보다 형변환을 해주는게 좋다
	int i = -1234u;
	unsigned int n = 5u;
	long n2 = 5L;
	double d = 6.0e-10;

	// Decimal	: 0 1 2 3 4 5 6 7 8 9 10
	// Octal	: 0 1 2 3 4 5 6 7 10 11 12 13
	// Hexa		: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	// 8진수로 표현하고 싶을때만 앞에 0을 붙인다.
	int x = 012;
	// 16진수로 표현하고 싶을때는 x를 붙인다.
	int y = 0xF;
	// 2진수로 표현하고 싶을때는 0b
	// 중간에 '를 쓰면 다행이도 컴파일러가 무시한다.
	// 그래서 2진수가 길어지면 편해진다.
	int z = 0b1010'1111'0000;

	int num_items = 123;
	int price = num_items * 10;




	return 0;
}