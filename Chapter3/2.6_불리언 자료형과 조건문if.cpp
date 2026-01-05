/*
Boolean(불리언 자료형)
true(1) / false(0)


*/

#include <iostream>
using namespace std;

bool isEqual(int a, int b)
{
	bool result = (a == b);

	return result;
}

int main()
{

	bool b1 = true;		//copy initialization
	bool b2(false);		// direct ..
	bool b3{ true };	//uniform ..
	b3 = false;

	cout << std::boolalpha;
	cout << b3 << endl;
	cout << b1 << endl;

	cout << std::noboolalpha;
	cout << b3 << endl;
	cout << b1 << endl;

	// !(NOT연산자)
	// true가 false로 바뀜 / false가 true로 바뀜
	cout << !true << endl;
	cout << !false << endl;

	cout << "--------------------" << endl;
	// &&(AND) : 둘 다 true이면 true이다.
	cout << (true && true) << endl;
	cout << (true && false) << endl;
	cout << (false && true) << endl;
	cout << (false && false) << endl;
	cout << "--------------------" << endl;
	
	// ||(OR) : 둘중에 하나만 true이면 true이다.
	cout << (true || true) << endl;
	cout << (true || false) << endl;
	cout << (false || true) << endl;
	cout << (false || false) << endl;
	cout << "--------------------" << endl;

	// if문은 조건문에 따라 실행이 될 수도 있고 안될 수도 있다.
	// 조건문 안이 참이여야 한다.
	if (true)
	{
		cout << "This is true" << endl;
	}

	if (false)
	{
		cout << "This is false" << endl;
	}

	cout << "--------------------" << endl;

	if (false)
	{
		cout << "This is true" << endl;
	}
	else
	{
		cout << "This is false" << endl;
	}

	cout << "--------------------" << endl;
	cout << isEqual(3, 4) << endl;
	cout << isEqual(4, 4) << endl;

	cout << "--------------------" << endl;

	// if문은 0이면 false이고 그 외 숫자는 true이다.
	if (5)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}

	bool b4;

	// boolean은 0 / 1 이다.
	// 이러한 위험성이 있는 코딩은 안하는게 좋다.
	cin >> b4;
	cout << std::boolalpha;
	cout << "Your input :" << b4 << endl;

	return 0;


}