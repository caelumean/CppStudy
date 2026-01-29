#include <iostream>
using namespace std;

class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};
class First
{
	Second sec;
public:
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

int main()
{
	// Second가 먼저 생성이 되는 이유는
	// Second가 First의 멤버로 들어있기 때문에 멤버를 먼저 초기화를 해줘야
	// 거기에 대해서 First가 작업을 할 수가 있다.
	First fir();


	return 0;
}