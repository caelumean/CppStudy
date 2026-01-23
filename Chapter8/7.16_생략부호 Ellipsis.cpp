#include <iostream>
#include <cstdarg>

using namespace std;

// 이렇게 ... 찍어주면 된다.
// 가끔 사용
double findAverage(int count, ...)
{
	double sum = 0;
	va_list list;

	va_start(list, count);

	for (int arg = 0; arg < count; ++arg)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return sum / count;
}
int main()
{
	cout << findAverage(1, 1, 2, 3, "Hlloe", 'c') << endl;
	cout << findAverage(3, 1, 2, 3) << endl;
	cout << findAverage(5, 1, 2, 3, 4, 5) << endl;
	cout << findAverage(10, 1, 2, 3, 4, 5) << endl;

	return 0;
}