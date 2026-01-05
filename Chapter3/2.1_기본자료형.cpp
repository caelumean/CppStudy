// 기본 자료형 소개(Fundamental Data Type)
/*
1. 자료형마다 메모리가 저장되는데 저장하는 크기와 방식이 다르다.
2. signed와 unsigned가 저장되는 방식이 다르다.
  -unsinged가 특정 연산을 할 때 더 빠르다.
3. 보통 signed가 기본이다.
4. 부동소수점 : 지수부와 실수부를 구분한다.


*/

#include <iostream>

int main()
{
	using namespace std;

	bool bValue = true;
	char chValue = 'A';
	// float은 f를 붙여야한다.
	float fValue = 3.141592f;
	double dValue = 3.141592;

	// boolean도 내부적으로 숫자로 바꿔서 저장한다.
	cout << (bValue ? 1 : 0) << endl;
	// 아스키 코드에 대응해서 나오는 숫자
	// 내부적으로 문자도 숫자로 표현한다.
	cout << (int)chValue << endl;
	cout << chValue << endl;

	// cout에서 출력할 때 자릿수를 맞춰서 뒤에 부분이 짤린다.
	// float나 double은 생각하는 만큼 정밀하지 않다.
	cout << fValue << endl;
	cout << dValue << endl;

	auto aValue1 = 3.141592;
	auto aValue2 = 3.141592f;

	// sizeof는 데이터형의 크기를 알려준다.
	cout << sizeof(aValue1) << endl;
	cout << sizeof(aValue2) << endl;

	// 변수를 초기화하는 방법
	// copy initialization
	int a1 = 123;
	// direct initialization
	int a2(123);
	// uniform initialization
	int a3{ 123 };

	// 변수를 여러개를 선언하는 방법
	int k, l;

	return 0;
}
