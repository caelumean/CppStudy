/*
	방어적 프로그래밍의 개념

*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x;
	cin >> x;

	// x가 5보다 클 때만 출력해야하는데 5이상일 때 출력한다.
	// 논리오류
	if (x >= 5)
	{	
		cout << "x is greater than 5" << endl;
	}

	// violated assumption(가정 위반)

	string hello = "Hello, my name is Jack Jack";

	cout << "Input from 0 to " << hello.size() - 1 << endl;

	int ix;

	while (true)
	{	
		cin >> ix;
		// 1004를 입력하면 런타입 오류발생

		if (ix >= 0 && ix <= hello.size() - 1)
		{
			cout << hello[ix] << endl;
		}
		else
		{
			cout << "Please try agin" << endl;
		}
	}
	return 0;
}