#include <iostream>
#include <cstdint>

// 찾아서 좀 더 내용을 보충할 것
int main()
{

	using namespace std;

	std::int16_t(5);
	std::int8_t myint = 65;

	cout << myint << endl;

	std::int_fast8_t fi(5);
	std::int_least64_t fl(5);

	return 0;
}