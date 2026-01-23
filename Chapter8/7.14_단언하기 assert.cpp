/*
assert : 컴파일러의 도움을 받는 것
릴리즈 모드로 바꾸면 작동을 안한다.
프로젝트 우클릭 - 속성 - C/ C++ - 전처리기 - 전처리기 정의 - DEBUG가 붙어있으면 작동을 한다.
*/
#include <iostream>
#include <cassert>
#include <array>

using namespace std;

void printValue(const std::array<int, 5>& my_array, const int& ix)
{
	assert(ix >= 0);
	assert(ix <= my_array.size() - 1);

	std::cout << my_array[ix] << std::endl;
}

int main()
{
	int number = 5;

	// 어썰트를 실행시키는 것도 느려지게 만들기 때문에 릴리즈에서는 안쓴다.
	assert(number == 5);

	std::array<int, 5> my_array{ 1,2,3,4,5 };

	printValue(my_array, 100);

	const int x = 5;
	// 컴파일 타임에 발생시키는 스태틱 어썰트
	// 뒤에 문구도 남길 수 있다.
	static_assert(x == 5, "x should be 5");


	return 0;
}