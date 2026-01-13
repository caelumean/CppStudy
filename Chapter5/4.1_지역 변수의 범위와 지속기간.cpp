#include <iostream>

using namespace std;

// 네임스페이스
// 두 영역이 다른 영역이다라는 걸 확실히 알리기 위해 이름을 붙여주는 것
// 빨간 줄이 뜬다면 속성 - C/C++ - 언어 - C++언어 표준 버전을 올리면 된다.
namespace work1::work11::work111
{
	// C++17
	// namespace안에 namespace를 넣을 수 있다.
	int a = 1;
	void doSomething()
	{
		a += 3;

	}
}
namespace work2
{
	int a = 1;
	void doSomething()
	{
		a += 5;
	}
}
int main()
{
	int apple = 5;

	cout << apple << endl;

	// 중괄호를 이용해서 블럭을 지정해준다.
	// 가급적이면 다른 블록 안에 있는 변수 이름들은 다르게 지어야한다.
	{
		apple = 1;
		cout << apple << endl;
	}
	
	cout << apple << endl;

	{
		int apple2 = 1;
		cout << apple2 << endl;
	}

	cout << apple << endl;
	
	work1::work11::work111::a;
	work1::work11::work111::doSomething();
	work2::a;
	work2::doSomething();

	return 0;
}