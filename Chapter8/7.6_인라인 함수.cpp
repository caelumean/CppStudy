// 인라인 함수를 통해서 최적화를 많이 한다.

#include <iostream>

using namespace std;

// 이런 작은 함수가 많이 반복되는 경우
// 이 일련의 과정들이 더 시간이 많이 걸리는 경우가 있다.
// 그래서 그 과정을 줄이기 위해서 inline을 쓴다.
// inline은 함수가 아닌 것처럼 작동을 한다.
// 컴파일러가 inline써서 빨라지겠다고 판단하면 알아서 쓴다.
inline int min(int x, int y)
{
	return x > y ? y : x;
}

int main()
{

	cout << min(5, 6) << endl;
	cout << min(3, 2) << endl;

	// 인라인 함수를 쓰면 실제로 이렇게 작동을 한다.
	cout << (5 > 6 ? 6 : 5) << endl;
	cout << (3 > 2 ? 2 : 3) << endl;

	return 0;
}

