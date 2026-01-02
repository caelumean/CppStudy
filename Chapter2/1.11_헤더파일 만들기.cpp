#include <iostream>
#include "Myheaders/1.11.1_add.h"
// 헤더파일을 나중에 많이 만들게 될 것인데
// 파일로 묶고 정리하는 걸 잘 해줘야한다

using namespace std;

// 헤더파일
// 다시 재사용하기 위해서 만든다
// 1. 1.11.1_add.cpp 만들기
// 2. 함수 기능을 만들기
// 3. 1.11.1_add.h 헤더 파일을 만들기
// 4. int add(int a, int b); -> 선언하기
// 5. #include "1.11.1_add.h" -> 인클루드 해주기

// 링킹 에러
// 어떻게 작동할 지 몸체가 없어서 생기는 에러이다.


int main()
{

	cout << add(1, 2) << endl;

	return 0;
}