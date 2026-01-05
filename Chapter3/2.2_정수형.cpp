#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	short		s = 1;
	int			i = 1;
	long		l = 1;
	long long	ll = 1;


	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;

	// short = 2byte = 2 * 8 bits = 16bits
	// 2^16 = 65536
	// short가 표현할 수 있는 가장 큰 숫자 32767
	// pow(2, sizeof(short) * 8 - 1) 여기서 1을 뺀 건
	// signed냐 unsigned냐 표현하는 부분을 뺀 거고
	// pow(2, sizeof(short) * 8 - 1) - 1 여기서 1을 뺀 건
	// 0표현한 부분을 뺀 것이다.
	// 그래서 범위는 32767
	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;

	s = 32767;
	s = s + 1;

	// -32768로 나오는 현상을 오버플로우라고 부른다.
	// short의 가장 큰 수가 32767인데 여기서 더 큰 숫자가 나오면
	// 뒤로 돌아가버린다.
	// 그래서 가장 작은 숫자가 나온다.
	cout << s << endl;

	unsigned int i2 = -1;
	
	// unsigned 타입에 음수를 넣으면 이상한 값이 나온다.
	// unsigned에 음수를 넣지 말자
	cout << i2 << endl;

	int i3;

	// 결과값을 정수값으로 저장한다.
	// 그래서 소수점 이하의 값은 짤라버린다.
	cout << 22 / 4 << endl;

	// 둘 중하나를 float으로 형변환하면 결과는 float으로 나온다.
	cout << (float)22 / 4 << endl;


	return 0;
}