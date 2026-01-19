/*
컴퓨터는 난수를 만들어내는 능력이 없어서
난수처럼 보이는 난수를 계산한다.

*/

#include <iostream>
#include <cstdlib>	// std::rand(), std::srand()
#include <ctime>	// std::time()
#include <random>

using namespace std;

int getRandomNumber(int min, int max)
{
	// 1을 범위 + 1 로 나눠준다.
	static const double fraction = 1.0 / (RAND_MAX + 1.0);

	// (max - min + 1) 범위를 만들고 있다.
	// std::rand() 랜덤을 생성하고
	// 그리고 거기에 fraction을 곱한다.
	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}
/*
unsigned int PRNG()
{
	static unsigned int seed = 5523;

	seed = 8253729 * seed + 2396403;

	return seed % 32768;
}
*/
int main()
{
	/*for (int count = 1; count <= 100; ++count)
	{
		cout << PRNG() << "\t";

		if (count % 5 == 0) cout << endl;
	}*/
	// std::srand(5323);
	// cpu clock에서 가져와서 사용한다.
	// 시간과 연동시켜서 하는 것이다.
	std::srand(static_cast<unsigned int>(std::time(0)));

	for (int count = 1; count <= 100; ++count)
	{
		cout << std::rand() << "\t";

		if (count % 5 == 0) cout << endl;
	}

	for (int count = 1; count <= 100; ++count)
	{
		cout << getRandomNumber(5, 8) << "\t";

		if (count % 5 == 0) cout << endl;
	}

	for (int count = 1; count <= 100; ++count)
	{
		cout << rand() % 4 + 5 << "\t";

		if (count % 5 == 0) cout << endl;
	}

	cout << "-------------------------------------" << endl;

	std::random_device rd;
	// 64 bit 짜리 
	// std::mt19937_64;

	// create ad mersenne twister
	std::mt19937 mersenne(rd());
	// 1 ~ 6
	std::uniform_int_distribution<> dice(1, 6);

	for (int count = 1; count <= 20; ++count)
	{
		cout << dice(mersenne) << endl;
	}





	return 0;
}