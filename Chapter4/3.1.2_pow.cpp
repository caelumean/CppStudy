#include "3.1.2_pow.h"

int pow(const int& number,const int& exp)
{
	int pow{ 1 };
	
	for (int i = 0; i < exp; i++)
	{
		pow *= number;
	}
	
	return pow;
	// 제미나이

}

double pow(const double& number, const int& exp)
{
	//제곱값이 0으로 들어온 경우
	if (exp == 0)
	{
		return 1.0;
	}

	// 지수가 음수이면 양수 지수로 변환
	if (exp < 0)
	{
		return 1.0 / pow(number, -exp);
	}

	// 지수가 짝수인 경우
	if (exp % 2 == 0)
	{
		double half_pow = pow(number, exp / 2);
		return half_pow * half_pow;
	}
	else
	{
		return number * pow(number, exp - 1);
	}
}
