/*
do while은 무조건 처음에는 한 번 실행된다.
경우에 따라서는 do while문이 꼭 필요한 경우가 있다.

*/


#include <iostream>

using namespace std;

int main()
{
	int selection;

	// do while에서는 ;(세미클론을 찍는다.)
	do
	{
		cout << "1. add" << endl;
		cout << "2. sub" << endl;
		cout << "3. mult" << endl;
		cout << "4. div" << endl;
		cin >> selection;
	} while (selection <= 0 || selection >= 5);

	cout << "You selected " << selection << endl;


	return 0;

}