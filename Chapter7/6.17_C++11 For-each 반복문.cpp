#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

int main()
{
	//const int fibonacci[]{ 0,1,1,2,3,5,8,13,21,34,55,89 };
	int fibonacci[]{ 0,1,1,2,3,5,8,13,21,34,55,89 };

	// change array values
	// for (int number : fibonacci) 이렇게 쓰면 안바뀐다.
	// 함수 파라미터랑 들어가는 거랑 비슷해서 안바뀐다. 
	// 그래서 reference로 쓰면 된다.
	
	for (int& number : fibonacci)
	{
		//number = 10;
	}
	
	// 또 다른 방법
	{
		for (auto& number : fibonacci)
		{
			number *= 10;
		}

		// output
		for (const auto& number : fibonacci)
		{
			cout << number << " ";
		}
		cout << endl;
	}

	// output
	for (int number : fibonacci)
	{
		cout << number << " ";
	}
	cout << endl;

	cout << "--------------------------------" << endl;
	
	int fibonacci1[]{ 0,1,1,2,3,5,8,13,21,34,55,89 };

	int max_number = numeric_limits<int>::lowest();

	for (const auto& n : fibonacci1)
	{
		max_number = max(max_number, n);
	}

	cout << max_number << endl;

	

	return 0;
}