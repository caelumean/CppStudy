/*
비트단위 연산자
메모리를 아끼기 위해서 사용한다.
그리고 비트단위로 계산할 수 있는 것은 훨씬 더 빠르다

*/
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	// << left shift
	// >> right shift
	// ~ , &, |, ^ 

	unsigned int  a = 3;

	cout << std::bitset<8>(a) << endl;

	// << : 왼쪽으로 옮기는 것이다
	// 2^N 곱하는 것과 같다
	cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;
	cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
	cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
	cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;

	unsigned int b = 1024;

	cout << std::bitset<16>(b) << endl;

	// >> : 오른쪽으로 옮기는 것이다.
	// 2^-N 곱하는 것과 같다
	cout << std::bitset<16>(b >> 1) << " " << (b >> 1) << endl;
	cout << std::bitset<16>(b >> 2) << " " << (b >> 2) << endl;
	cout << std::bitset<16>(b >> 3) << " " << (b >> 3) << endl;
	cout << std::bitset<16>(b >> 4) << " " << (b >> 4) << endl;
	
	unsigned int c = 1024;
	// ~(not) : 비트에서는 not이 ~(물결)이다.
	cout << std::bitset<16>(c) << endl;
	cout << std::bitset<16>(~c) << " " << (~c) << endl;
	
	unsigned int d = 0b1100;
	unsigned int e = 0b0110;

	cout << d << " " << e << endl;
	// AND
	cout << std::bitset<4>(d & e) << endl;
	// OR
	cout << std::bitset<4>(d | e) << endl;
	// XOR
	cout << std::bitset<4>(d ^ e) << endl;

	// Quiz
	/*0110 >> 2 -> decimal
    5 | 12
	5 & 12
	5 ^ 12*/


	return 0;
}