#include <iostream>
#include "2.9.1_MyCONSTANTS.h"

using namespace std;

// 파라미터의 값을 바꾸는 경우는 드물다.
// 이렇게 바꾸는 것은 입출력을 명확하게 보여주지 못하기 때문에 
// 가급적이면 안쓴다.
// 그래서 다른 프로그래머가 이렇게 하는 것을 방지하기 위해서 const를 쓴다.
void printNumber(const int& my_number)
{
	// 이렇게 쓰지 말자
	// my_number = 456;
	int n = my_number;
	cout << my_number << endl;
}
int main()
{

	// const는 고정된 숫자를 표현할 때 사용하고 
	// 다른 프로그래머 혹은 내가 나중에 실수로 바꾸는 것을
	// 방지해주는 측면이 강하다.
	// const 는 앞,뒤에 붙일 수 있다.
	// const는 한 번 값이 정해지면 수정할 수 없기 때문에
	// 반드시 초기화를 해주어야 한다.
	const double gravity{ 9.8 };
	double const gravity1{ 10.0 };
	
	// https://happydhkim.tistory.com/entry/%EC%BB%B4%ED%8C%8C%EC%9D%BCCompile%EA%B3%BC-%EB%9F%B0%ED%83%80%EC%9E%84Runtime%EC%9D%B4%EB%9E%80
	// constexpr 
	// 컴파일 타임의 값이 완전히 결정되는 상수라는 것을 컴파일하면서 체크하겠다.
	// https://modoocode.com/293#google_vignette
	constexpr int my_const(123);

	int number;
	cin >> number;

	// 런타임에 결정된다
	const int special_number(number);

	// 매크로를 상수를 대체하기 위해서 매크로를 쓰는 경우가 있는데 이제 거의 그렇게 안쓴다.
	// 1.디버깅이 힘들다
	// 2.매크로는 적용되는 범위가 너무 넓어지기 때문에 안좋다.
	// 대신에 이렇게 쓰는게 더 바람직하다.
	const int price_per_item = 30;

	double radius;
	cin >> radius;
	// 원주율을 계산해주는 프로그램이다.
	double circumference = 2.0 * radius * constants::pi;


	return 0;
}