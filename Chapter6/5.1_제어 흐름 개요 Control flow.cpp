/*
순서도(Flow Chart)

중단(Halt)
가다가 멈춰라

점프(Jump)
goto(많이 안씀), break, continue

조건분기(conditional branches)
if, switch

반복(Loops)
while, do while, for

예외 처리(Exceptions)
try, catchm throw

*/

#include <iostream>
#include <cstdlib>

int main()
{
	std::cout << "I love you " << std::endl;

	// return 대신에 사용할 수 있다.
	// #include <cstdlib> 사용해야한다.
	// exit은 긴급하게 나간다라는 게 더 강하다
	// 프로그램이 무조건 종료되어야 할 경우에 사용한다.
	exit(0);

	
	return 0;
}