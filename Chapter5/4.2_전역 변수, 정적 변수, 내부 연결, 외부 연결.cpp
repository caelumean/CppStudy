/*
Global Variable(전역변수)
어디서든 사용할 수 있는 변수이다.
엄청 편리할 것 같지만 반대이다.
전역변수는 가급적 사용하지 말아야한다.

Static Variable(정적 변수)

Internal Linkage(내부 연결)
파일들끼리를 연결안하고 내부에서만 사용할 것이냐
개별 cpp안에서만 전역으로 작동하는 전역변수를 의미한다.
External Linkage(외부 연결)
파일들끼리를 연결할거냐

*/

#include <iostream>
#include "4.2_MyConstants.h"

using namespace std;

/*
전역변수는 매우 위험하다.
전역변수는 어디서나 값을 바꿀 수 있다.
근데 이 변수를 바꿀 수 있는 범위가 다른 cpp파일에서도 해당이 된다.
그래서 어디서 문제가 생기는지 추적이 안된다.
그래서 대안이 여러가지가 있는데.
1. 함수 설계를 잘하기
2. 전역변수 이름에 global이라고 표시를 하는 것이다 그래서 g_를 붙여준다.
3. 객체지향을 써서 전역변수 사용을 최소한으로 해야한다.
*/
int value = 123;
int g_b = 1;


//forward declaration (전방 선언)
// 앞에 extern이 생략되어있다.
// extern void dooSomething();
// extern은 몸체가 어딘가에 있다라고 말해주는 거다
extern void dooSomething();

// 이렇게 찾았는데 아무리 찾아봐도 메모리가 없다.
// 몸체에 초기화를 꼭 해줘야한다.
// num1이라는 변수가 extern이기 때문에 프로그램 전체로 봤을때 
// 같은 변수의 이름이 또 있으면 안된다
extern int num1;

void doSomething()
{
	/*
	static변수와 전역 변수의 차이
	이 변수 b가 os로부터 받은 메모리가 static이다.
	static은 초기화를 한 번 밖에 안한다.
	처음에 static을 선언할 때에는 반드시 초기화를 해줘야한다.
	미리 선언이 된 static변수를 재사용한다.
	*/
	int a = 1;
	static int b = 1;
	++a;
	++b;
	++g_b;
	cout << a << endl;
	cout << b << endl;
	cout << g_b << endl;
}
int main()
{
	cout << value << endl;

	int value = 1;

	cout << ::value << endl;
	cout << value << endl;

	cout << "----------------------" << endl;

	doSomething();
	doSomething();
	doSomething();

	cout << "--------------------------" << endl;
	cout << num1 << endl;

	cout << "--------------------------" << endl;

	// 주소가 같을 거라고 생각하지만 
	// 주소가 다르다
	// 그래서 사본이 여러개 생기는 것이라고 보면 된다.
	// 어떻게하면 방지를 할 수 있을까?
	// 1.MyConstants.cpp 파일을 생성한다.
	// 2.그 안에 pi와 gravity 변수를 초기화 한다.
	// 3. MyConstant.h 에 선언한 변수 초기화를 없앤다. (변수 이름만 남겨두기)
	cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << endl;

	dooSomething();


	return 0;
}