/*
클래스를 만들 때에는 처음부터 cpp에서 직접적으로 만드는 것보다
h파일을 만들어서 선언과 정의를 분리해서 만든다.

*/
#include <iostream>

int solution(int a, int b, bool flag)
{
	return flag ? a + b : a - b;
}

int main()
{

	int a = 0;
	int b = 0;
	bool flag = true;

	std::cout << "숫자 두개와 flag값을 입력하시오" << std::endl;
	std::cin >> a >> b >> flag;
	std::cout << solution(a, b, flag) << std::endl;

	return 0;
}