/*
큰 프로그램을 만들다보면 동일한 가진 변수나 함수를 여러곳에서 사용할 수 밖에 없는 상황이 생긴다.
이 때 컴파일러는 어떤걸 써야하냐고 불만을 표하게 되는데 이걸 모호성이라고 한다.

이 모호성을 분명하게 해줄 수 있는게 Using이다.

*/

#include <iostream>

namespace a
{
	int my_var(10);
	int my_a(123);
}
namespace b
{
	int my_var(20);
	int my_b(546);
}
int main()
{
	// 컴파일러가 cout 을 만나면 
	// std::cout 에서도 찾아보자 하고 이 cout을 iostream에서 발견하게 된다.
	using namespace std;
	// std에 있는 cout이라고 이렇게 알려줄 수 있다.
	// using std::cout;

	// using namespace b;

	// 헤더에 usingnamespace를 넣는 건 좋지않다.(확인하기가 어렵기 때문에)
	// 가급적이면 cpp파일에 넣자
	// 전역에서 사용하는 것 만큼은 피하자
	{
		using namespace a;
		// 얘는 여전히 namespace a와 namespace b에 영향을 받는다.
		cout << my_var << endl;

	}
	{
		using namespace b;
		cout << my_var << endl;
	}


	return 0;
}