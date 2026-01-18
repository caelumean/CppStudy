#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName(Colors color)
{
	// 안 됨
	// using Colors;
	// enum class 안에 안 들어가시고
 
	switch (color)
	{
	case Colors::BLACK:
		cout << "black" << endl;
		break;
	case Colors::WHITE:
		cout << "white" << endl;
		break;
	case Colors::RED:
		cout << "red" << endl;
		break;
	case Colors::GREEN:
		cout << "green" << endl;
		break;
	case Colors::BLUE:
		cout << "blue" << endl;
		break;
	default:
		break;
	}
	cout << "------------------------------------------------" << endl;
	//  black = 0
	// 이럴 때 쓸 수 있는거

	switch (static_cast<int>(color))
	{
	case 0:
		cout << "black" << endl;
		break;
	case 1:
		cout << "white" << endl;
		break;
	case 2:
		cout << "red" << endl;
		break;
	case 3:
		cout << "green" << endl;
		break;
	case 4:
		cout << "blue" << endl;
		break;
	default:
		break;
	}

}

int main()
{
	
	int x;
	cin >> x;
	{
		switch (x)
		{
		case 0:
			cout << "Zero";
			// 의도적으로 break를 안 사용하는 경우도 있다.
			// 한 줄씩 나오게 하고 싶으면 break;
			break;
		case 1:
			cout << "One";
			break;
		case 2:
			cout << "Two";
			break;

		}
		cout << x << endl;
	}
	cout << "------------------------------------------------" << endl;
	
	printColorName(Colors::BLACK);

	cout << "------------------------------------------------" << endl;
	// 주의 사항
	// switch문 안에 변수를 선언할 수는 있지만 초기화는 불가능하다.
	// 값을 넣어주는 건 case문 다음에서 가능하다.

	// case문 안에서 변수를 선언하면 switch 


	// 차라리 switch문 안에서 사용할 변수가 있으면
	// switch문 사용하기 전에 변수를 사용하고
	// 변수는 되도록이면 적은 범위 안에서 사용하도록 만들고 그 범위 안에서 사라지게 만들어야 한다
	// 그래서 switch문에 블록으로 싸서 사라지게 만들면 된다.

	// 아니면 case문 안을 블록으로 싸버리면 된다.

	switch (x)
	{
		int a;
	case 0:
		int y;
		break;
	case 1:
		y = 5;
		cout << y << endl;
	default:
		break;
	}

	return 0;
}