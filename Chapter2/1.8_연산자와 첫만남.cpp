// 리터럴(Literal)
// : 코드에 직접 삽입된 값
// 연산자(Operator)
// 피연산자를 관계지어 특정 기능(더하기,빼기 등등)을 수행한다.
// 피연산자(Operand)
// : 연산의 대상이 되는 값
// 단항(Unary)
// 하나의 피연산자를 가지는 연산자

// 이항(Binary)
// 두개의 피연산자를 가지는 연산자

// 삼항(Ternary)
// 세개의 피연산자를 가지는 연산자
#include <iostream>

using namespace std;

int main()
{

	// x is a variable
	// 2 is a literal
	int x = 2;

	cout << "Hello, World" << endl;

	cout << 1 + 2 << endl;

	// 삼항 연산자
	// x가 0보다 크니?
	// 조건이 참이면 왼쪽을 실행
	// 거짓이면 오른쪽을 실행
	int y = (x > 0) ? 1 : 2;

	cout << y << endl;

	// y가 거짓일 때
	x = -2;
	y = (x > 0) ? 1 : 2;
	cout << y << endl;

	return 0;
}