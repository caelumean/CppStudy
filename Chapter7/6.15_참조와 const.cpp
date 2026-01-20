#include <iostream>

using namespace std;

// 이 것의 장점은
// 포인터로 넣으면 복사가 일어나서 주소가 다른데
// reference로 넣으면 똑같은 값 + 주소가 넘어간다.
void doSomething(const int& x)
{
	cout << x << endl;
}
int main()
{
	/*const int x = 5;
	const int& ref_x = x;*/

	int x = 5;
	// 레퍼런스를 선언할 때 메모리 주소로 초기화 해야지만 된다.
	// 그러나 const reference는 숫자를 넣는 것이 가능하다.
	int& ref_x = x;
	const int& ref_x1 = 3 + 5;


	int a = 1; 
	// const가 있으면 숫자 넣는 것이 바로 가능해진다.
	doSomething(a);
	doSomething(2);
	doSomething(a + 3);
	doSomething(2 * 3);

	return 0;
}