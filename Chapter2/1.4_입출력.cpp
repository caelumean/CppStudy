#include <iostream> // cout, cin, endl, ...
#include <cstdio>	// printf

int main()
{
	// std를 계속 쓰는게 귀찮아지면 이렇게 쓰고
	// std를 이제 안 쓸 수 있다
	// 컴파일러가 cout,cin,endl를 만났을 때 std라는 네임스페이스 안에서
	// 자기가 찾아서 컴파일을 해준다
	using namespace std;

	int x = 1024;
	double pi = 3.141592;
	// std라는 이름 공간 안에 들어있는 cout을 사용하기 위해서 ::(콜론콜론)을 중간에 넣어준다
	// 마지막에 나타나는 빈 줄 라인은 endl때문에 나타나는 것이다
	std::cout << "I love this lecture!!!!" << std::endl;

	// endl이 없기 때문에 붙어서 나온다.
	std::cout << "I love cat";
	std::cout << "x is " << x << std::endl;

	// 정밀도의 차이로 뒤의 값 부분이 짤려나간 것
	std::cout << "pi is " << pi << std::endl;

	// \t(탭)은 자동으로 줄을 맞춰준다
	std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;

	// \n은 new line의 줄임말로 줄바꿈이다
	// endl와 비슷하지만 다르다
	std::cout << "abced";

	// 소리
	cout << "\a";

	// 입력을 받는 방법 cin
	int z = 0;

	cout << "Before your input z is " << z << endl;
	cin >> z;

	// 입력한 숫자가 z가 받을 수 있는 숫자를 크기를 넘어가면
	// 정수형 숫자의 최대치가 출력된다
	cout << "Your input is " << z << endl;

	return 0;
}