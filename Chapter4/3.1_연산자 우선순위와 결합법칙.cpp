#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// 곱하기가 우선순위가 높다
	// 마치 괄호가 있는 것처럼
	int x1 = 4 + 2 * 3;

	// 곱하기와 나누기는 우선순위가 같다.
	// 우선순위가 같을 때 어떤걸 먼저 할 것인지가 바로 결합 법칙이다.
	// https://ko.wikipedia.org/wiki/C%EC%99%80_C%2B%2B%EC%9D%98_%EC%97%B0%EC%82%B0%EC%9E%90
	// 우선순위가 같을 경우에는 왼쪽 먼저 계산하고 오른쪽을 계산한다.
	int x2 = 3 * 4 / 2;

	// 우선순위를 명확하게 표현하는 방법
	// () 괄호를 사용해서 표현하는 게 좋다.
	// ^ 는 제곱을 의미하지 않고 XOR을 의미한다.

	// 제곱은 이렇게 쓰면 된다.
	// Pow함수를 만들어보기
	int x3 = std::pow(2, 3);

	cout << x3 << endl;
	
	 
	

	return 0;
}