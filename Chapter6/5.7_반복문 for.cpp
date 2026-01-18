#include <iostream>

using namespace std;

int pow(int base, int exponent)
{
	int result = 1;

	for (int count = 0; count < exponent; ++count)
	{
		result *= base;
	}

	return result;
}

int main()
{

	for (int count = 0; count < 10; ++count)
	{
		cout << count << endl;
	}

	cout << "---------------------------" << endl;

	int count = 0;
	for (; count < 10; ++count)
	{
		cout << count << endl;
	}
	cout << count << endl;

	cout << "---------------------------" << endl;

	int count1 = 0;
	// 公茄 风橇1
	for (; true; ++count1)
	{
		cout << count << endl;
	}

	// 公茄 风橇2
	for (; ; ++count1)
	{
		cout << count << endl;
	}

	cout << pow(2, 4) << endl;

	return 0;

}