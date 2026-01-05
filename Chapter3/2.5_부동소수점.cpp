// 컴퓨터가 소수점을 어떻게 다루느냐? 부동소수점을 사용해서 다룬다.
// float,double,long double(8,12,16바이트 (컴파일러따라 플랫폼따라 다르다))

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	using namespace std;

	float f;
	double d;
	long double ld;


	cout << sizeof(f) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(ld) << endl;

	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;
	
	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;

	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;

	float f2(3.141592);
	double d2(3.141592);
	long double ld2(3.141592);

	cout << 3.14 << endl;
	// e는 십진수이다
	// 그래서 10^-1승을 말하는 것이다.
	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e2 << endl;

	// <iomanip> 입출력을 자리 수를 조절할 수 있다.
	cout << std::setprecision(16) << endl;
	cout << 1.0 / 3.0 << endl;

	// 10진수
	float f3(123456789.0f);

	// 2진수로 저장하기 때문에 정밀도가 떨어질 수 있다.
	// 그래서 double를 쓰자는 말이 많지만 
	// double이 메모리 크기가 float의 2배이기 때문에 용량이 크다.
	// 그러나 장기적으로 보면 double을 쓰는게 맞다.
	cout << std::setprecision(9);
	cout << f3 << endl;

	double d3(0.1);

	cout << d3 << endl;
	cout << std::setprecision(17);
	cout << d3 << endl;


	double d4(1.0);
	double d5(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	// 이렇게 컴퓨터 내부적으로 작동하는 방식은 정밀도가 떨어진다.
	cout << setprecision(17);
	cout << d4 << endl;
	cout << d5 << endl;

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << " " << std::isnan(posinf) << endl;
	cout << neginf << " " << std::isnan(neginf) << endl;
	cout << nan << " " << std::isnan(nan) << endl;
	cout << 1.0 << " " << std::isnan(1.0) << endl;

	return 0;
}