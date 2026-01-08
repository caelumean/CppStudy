#include <iostream>

using namespace std;

int main()
{
	float a;
	sizeof(float);
	sizeof(a);

	// comma operator
	int x = 3;
	int y = 10;
	int z = (++x, ++y);
	// 풀어서 쓴다면
	// 주로 풀어서 쓴다.
	++x;
	++y;
	int z = y;

	cout << x << " " << y << " " << z << endl;

	// comma operator 주의 사항
	
	int a = 1, b = 10; // 여기서 콤마는 a와 b를 구분해주는 기호이다.
	int v;

	v = a, b;
	// 1이 나오는 이유
	// ,의 우선순위가 =의 우선순위보다 낮아서
	// 대입 연산자가 먼저 된 것이다.
	cout << v << endl;

	v = (++a, a + b);
	cout << v << endl;

	// conditional operator (조건 연산자)
	// 간단한 경우에만 사용할 것
	// 복잡한 경우에는 함수로 쪼개는 게 낫다
	bool onSale = true;
	const int price = (onSale == true) ? 10 : 100;

	cout << price << endl;


	// conditional operator (조건 연산자) 주의 사항
	int x1 = 5;
	cout << ((x % 2 == 0) ? "even" : "odd") << endl;
	// 타입이 다르기 때문에 이렇게 사용하는 것은 비추
	cout << ((x % 2 == 0) ? 0 : "odd") << endl;


	return 0;
}