/*
Auto 키워드
자료형을 상황에 따라서 자기 스스로 추론해준다.
초기화를 하지 않으면 auto를 사용할 수 없다.
함수 리턴값과 함수의 리턴 타입에도 auto를 쓸 수 있다.
auto는 함수의 매개 변수(파라미터)에 쓸 수 없다.
또 다른 방법 꼬리를 남기다가(트레일링 리턴타입) 있다. 
*/

#include <iostream>
auto add1(int x, int y) -> int;

auto add(int x, int y)
{
	return x + (double)y;
}
int main()
{

	auto a = 123;
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto result = add(1, 2);

	return 0;
}