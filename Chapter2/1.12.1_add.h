//#pragma once

// 헤더가드
// 중복될 경우에는 한 번만 작동해라
// 보통 이게 표준인데 이게 번거롭기 때문에
// 간단하게 한줄로 #pragma once를 쓴다.
#ifndef MY_ADD
#define MY_ADD


// 원래는 헤더 파일에 선언만 하고 기능은 cpp로 따로 빼주는 게 좋다
int add(int a, int b)
{
	return a + b;
}

#endif