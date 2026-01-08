#include <iostream>

using namespace std;

int main()
{
	int x = 7;
	// 단항연산자는 꼭 붙여서 쓰자
	int y = 1 + -x;
	int z = x % y;

	cout << "x/y: " << x / y << " z:" << z << endl;

	// C11이후부턴 소수점 이하는 절삭해서 버린다.
	cout << -5 / 2 << endl;

	// 왼쪽에 있는 숫자가 음수이면 결과도 음수로 나오게 한다.
	// 왼쪽에 있는 숫자가 양수냐 음수냐에 따라 결과도 양수냐 음수냐로 나뉜다.
	cout << -5 % 2 << endl;

	// z = z + y;
	z += y;
	return 0;
}