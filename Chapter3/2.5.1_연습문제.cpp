/*
3.141592
31.41
0.001000
123.0002
0.0000000001
234560000.000

지수부로 나눠서 표현해보기
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// fixed와 setprecision을 자세히 찾아보자

	cout << 3141592e-6 << endl;
	cout << 3141e-2 << endl;
	// fixed 소수점을 고정한다
	cout << fixed << setprecision(7) << 1000e-6 << endl;
	cout << 1230002e-4 << endl;
	//cout << fixed << setprecision(10) << 1e-10 << endl;;
	cout << setprecision(10) << 1e-10 << endl;;
	cout << setprecision(3) << 234560000000e-3 << endl;


	return 0;
}