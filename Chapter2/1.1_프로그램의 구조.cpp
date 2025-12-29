// 입력 출력을 가능하게 해주는 기능을 이 cpp파일에 포함시킨다.
// #붙는 것은 전처리기(preprocessor directive)라고 한다.
#include <iostream>

int main()
{
	// 자동완성기능 intellicode 기능에 대해 알아보기
	// 우리가 프로그램을 실행시킨다는 것은
	// 운영체제(오퍼레이팅 시스템)에 요청하는 것이다.
	// 이때 프로그램의 최소단위를 함수라고 한다.

	// 운영체제(오퍼레이팅 시스템)은 시작할 때 main을 먼저 찾는다.
	// main은 function(함수)의 이름이다.


	// return은 잘 끝났다고 돌려준다
	// 이렇게 기능을 수행하는 것을 statement라고 부른다.
	// ;(세미클론)은 문장이 끝을 표시하는 것이다.

	// integer라는 정수형 데이터를 담을 수 있는 메모리 공간을 할당받은 것이다.
	// x라는 이름으로 그 공간을 사용하는 것이다.
	int x = 2; // 리터럴(literal)
	int y = x + 3;

	std::cout << y << std::endl;

	return 0;
}