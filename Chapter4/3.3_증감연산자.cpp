#include <iostream>

using namespace std;

int add(int a, int b)
{
	return a + b;
}
int main()
{
	int x = 5;
	int y = --x;
	int z = x--;

	cout << y << endl;
	cout << z << endl;
	cout << "----------------------" << endl;

	int x1 = 6, y1 = 6;
	cout << x1 << " " << y1 << endl;
	cout << ++x1 << " " << --y1 << endl;
	// 후위연산자
	// 스트림에다가 더하라고 명령어를 내린 다음에
	// x1에 1이 더해진 것 까지 작동을 한 것이다
	cout << x1++ << " " << y1-- << endl;
	cout << x1 << " " << y1 << endl;

	// 증감연산자 주의사항
	int a = 1;
	int b = 2;
	// do not use
	// 이렇게 사용하지 말 것
	int v = add(a, ++a);

	// 이렇게는 사용가능
	int r = add(a, ++b);

	cout << v << endl;
	return 0;
}