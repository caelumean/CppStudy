#include <iostream>

// 피보나치 수열을 만들어 보기
// 0 1 2 3 5 8 13 21 .... 
using namespace std;

int sumTo(int sumto)
{
	

	if (sumto <= 0)
	{
		return 0;
	}
	else if (sumto <= 1)
	{
		return 1;
	}
	else
	{
		const int sum_minus_one = sumTo(sumto - 1);
		//return sumTo(sumto - 1) + sumto;
		return sum_minus_one + sumto;
	}
	
}
int main()
{
	cout << sumTo(10) << endl;
	return 0;
}