/*
ASCII 표에 들어있는 여러가지 문자들을 cin/cout으로 입출력

*/

#include <iostream>

using namespace std;

int main()
{
	char32_t c = '🜇';

	cout << (int)c << endl;

	char c2;
	cout << "문자 입력: ";
	cin >> c2;
	cout << (int)c2 << endl;


	return 0;
}