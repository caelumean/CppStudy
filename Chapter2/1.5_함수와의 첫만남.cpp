#include <iostream>

using namespace std;

// 함수 : 처음에 출력값의 데이터형을 저장
// 함수의 이름은 가급적 자세히 적는 것이 좋다.
// 반복되는 패턴이 한 개이상만 나와도 함수로 만드는 것이 좋다.
int addTwoNumbers(int num_a,int num_b)
{
	int sum = num_a + num_b;

	return sum;
}

int multiflyTwoNumbers(int num_a, int num_b)
{
	int mul = num_a * num_b;

	return mul;
}

// 기능을 수행하는 것이기 때문에
// main에 돌려줄 값이 없다
void printHelloWorld()
{
	cout << "Hello World" << endl;

	// 써도 되고 안써도 되고
	return;
}
int main()
{
	// 디버깅을 해보아야한다.
	// 숫자 옆에 회색바를 클릭하면 중단점이 생긴다.
	// 그리고 F5누르면 디버그모드로들어간다.
	// 그리고 F11을 누르면 한 줄씩 생성된다.
	// 이 과정을 계속해야한다.
	cout << addTwoNumbers(1, 2) << endl;
	cout << addTwoNumbers(3, 4) << endl;
	cout << addTwoNumbers(8, 1) << endl;
	
	printHelloWorld();

	return 0;
}