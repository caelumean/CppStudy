/*
Enum Class

*/
#include <iostream>

int main()
{
	using namespace std;

	enum class Color
	{
		RED,
		BLUE,
	};
	enum class Fruit
	{
		BANANA,
		APPLE,
	};

	Color color = Color::RED;
	Color color2 = Color::BLUE;
	Fruit fruit = Fruit::BANANA;

	// 컬러하고 과일을 비교했을 때
	// 둘 다 내부적으로 int이기 때문에
	// 같다고 나와버린다.
	// 그래서 이러한 문제 때문에 enumClass가 있다.
	// C11에서 나왔다.
	// enumclass로 바꾸면 서로다른 enumclass는 비교를 못하게 막아놨다.
	if (color == color2)
	{
		cout << "same color" << endl;
	}
	else
	{
		cout << "different color" << endl;
	}

	return 0;
}