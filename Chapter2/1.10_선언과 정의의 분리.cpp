// 선언(Declaration)
// 정의(Definition)
#include <iostream>

using namespace std;

// 함수의 최소한의 정보를 알려주는 것을 프로토타입이다.
// 그리고 이걸 전방 선언(forward declaration)이라고 부른다.
int add(int a, int b);

int muntiply(int a, int b)
{
	return a * b;
}

int subtract(int a, int b)
{
	return a - b;
}


int main()
{
	// 선언으로 이동, 정의로 이동으로 해서 해당 함수의 선언과 정의로 빠르게 이동할 수 있다.
	cout << add(1, 2) << endl;
	cout << muntiply(1, 2) << endl;
	cout << subtract(1, 2) << endl;

	return 0;
}
// 정의(Definition)
int add(int a, int b)
{
	return a + b;
}