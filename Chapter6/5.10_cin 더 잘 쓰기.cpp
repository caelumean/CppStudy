#include <iostream>

using namespace std;

int getInt()
{
	while (true)
	{
		cout << "Enter an integer number : ";
		int x;
		cin >> x;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			cout << "Invalid number, please try agin" << endl;
		}
		else
		{
			// 버퍼 비우기
			// 32767은 적당한 숫자
			std::cin.ignore(32767, '\n');

			return x;
		}
	}
	
}
char getOperator()
{
	while (true)
	{
		cout << "Enter an operator (+, -) : ";
		char op;
		cin >> op;

		if (op == '+' || op == '-')
		{
			return op;
		}
		else
		{
			cout << "Inavalid operator, please try agin" << endl;
		}
	}
}

int printResult(int x, char op, int y)
{
	switch (op)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	default:
		break;
	
	}

}
int main()
{
	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);

	return 0;

}