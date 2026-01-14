/*
  1. 암시적 형변환
		프로그래머가 형변환을 요청하지 않은 경우
		컴파일러가 자기가 알아서 형변환을 시킨 경우이다.
  2. 명시적 형변환

*/
#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{

	int a = 123;
	// 데이터 타입이 무엇인지 반환을 해준다.
	std::cout << typeid(a).name() << std::endl;

	// 암시적 형변환
	int a1 = 123.0;

	// 명시적 형변환
	int a2 = (int)123;

	// numeric conversion
	// 데이터 타입이 작은 곳에서 큰 곳으로가는 것
	float a3 = 1.0f;
	double d = 1;

	// 데이터 타입이 큰 곳에서 작은 곳으로 가는 것
	// 이렇게 하면 큰 문제가 생긴다.
	double d2 = 30000;
	short c = d2;

	std::cout << static_cast<int>(c) << std::endl;


	double d3 = 0.123456789;
	float f = d3;

	// 아예 다른 숫자가 나온다.
	// 정밀도가 부족해서 똑같이 저장을 못한다.
	std::cout << std::setprecision(12) << f << std::endl;
	std::cout << std::setprecision(12) << d << std::endl;

	int i = 1234;
	float f2 = i;

	std::cout << std::setprecision(12) << f2 << std::endl;

	float f3 = 3.14;
	int i2 = f3;

	// 버림이 발생한다.
	std::cout << std::setprecision(12) << i2 << std::endl;

	// unsigned에서도 문제가 발생한다.
	// 형변환도 우선순위가 있다.
	// unsigned int가 int보다 우선순위가 높아서
	// 10을 unsigned int로 안바꿔서 생기는 문제이다.
	std::cout << 5u - 10 << std::endl;

	// int, unsigned int, long, unsigned long,

	//형변환 여러가지 방법
	/*
	C스타일
	int i = (int)4.0;
	C++ 스타일
	int i = int(4.0);

	최근 스타일
	int i = static_cast<int>(4.0);
	*/
	




	return 0;
}