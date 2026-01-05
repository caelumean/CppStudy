/*
정수 하나를 입력받고
그 숫자가 홀수인지 짝수인지 
출력하는 프로그램 만들기
*/

#include <iostream>

using namespace std;

int main()
{
	int num1 = 0;

	cout << "숫자 입력 : ";
	cin >> num1;

	if (num1 == 0)
	{
		cout << "잘 못 입력하셨습니다. 프로그램을 종료합니다." << endl;
		return 0;
	}

	if ((num1 % 2) == 0)
	{
		cout << "짝수" << endl;
	}
	else
	{
		cout << "홀수 " << endl;
	}


}