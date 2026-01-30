#include <iostream>

using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(const int& id_in)
		: m_id(id_in)
	{
		cout << "Constructor" << m_id << endl;
	}

	// 소멸자는 리턴타입이 없다
	// ~(틸다)
	// 파라미터가 없다.
	~Simple()
	{
		cout << "Destructor" << m_id << endl;
	}

};

int main()
{
	// 소멸은 반대로 s2먼저 실행된다.
	// 소멸자는 instance가 메모리에서 해제될 때 내부에서 자동으로 호출이 된다.
	// 동적할당으로 만들어진 경우에는 영역을 벗어나도 자동으로 
	// 메모리가 해제되지 않기 때문에 delete으로 메모리를 해제할 때에만
	// 소멸자가 호출된다
	// 소멸자를 프로그래머가 직접 호출하는 것은 대부분의 경우 권장하지 않는다.

	//Simple s1(0);
	Simple *s1 = new Simple(0);
	Simple s2(1);

	delete s1;

	return 0;
}