#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;

	// 요즘에 goto문을 잘 안쓴다.
tryAgain :  // label 책갈피
	cout << "Enter a non-negative number " << endl;
	cin >> x;


	if (x < 0.0)
	{
		goto tryAgain;
	}

	cout << sqrt(x) << endl;


	return 0;
}