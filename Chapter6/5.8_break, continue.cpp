#include <iostream>

using namespace std;

void breakOrReturn()
{
	//
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')
		{
			break;
		}
		if (ch == 'r')
		{
			// 이 함수에서 바로 밖으로 나가버린다.
			// 그래서 아래 Hello가 출력이 안된다.
			return;
		}

	}
	cout << "Hello" << endl;
}

int main()
{
	int count = 0;

	while (true)
	{
		cout << count << endl;

		if (count == 10)
		{
			// break는 빠져나간다.
			break;
			count++;
		}
	}

	breakOrReturn();

	cout << "----------------------------" << endl;

	for (int i = 0; i < 10; ++i)
	{
		cout << i << endl;
		if (i == 5)
		{
			break;
		}
	}
	cout << "----------------------------" << endl;

	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 1)
		{
			// if문을 건너뛰는게 가능하다.
			continue;
		}
		cout << i << endl;
	}
	cout << "----------------------------" << endl;

	// 무시무시한 무서운 일이 발생
	// count가 5일 때 continue가 되는 바람에
	// 증감 연산자가 실행이 안된다.
	// 그래서 while문 안에 조건이 바뀌지 않아서 무한 반복이 된다
	// conunt가 계속 5가 된다.
	// 이러한 걸 방지 하기 위해
	// while문 안에 count를 증가 시켜주면 된다.
	int count(0);

	do
	{
		if (count == 5)
			continue;

		cout << count << endl;
	} //while (count < 10);
	while (++count < 10);

	cout << "----------------------------" << endl;

	// while문 안에 변수를 선언을 하면
	// 사용자 정의 변수를 while문 안에 선언을하게 되면 
	// 엄청 느려질 수 있다.
	// 변수는 밖으로 빼주는게 효율성에 더 도움이 된다.
	int count1(0);

	// x키를 누르면 종료를 하고 싶다
	// 이 bool타입을 사용하지 않고 만드는 것도 생각해보기
	bool escafe_flag = false;
	while (!escafe_flag)
	{
		char ch;
		cin >> ch;

		cout << ch << " " << count++ << endl;

		if (ch == 'x')
		{
			escafe_flag = true;
		}
	}

	cout << "----------------------------" << endl;
	// break를 사용해서 x키를 눌렀을 때 나가기 
	int count2(0);

	while (true)
	{
		char ch;
		cin >> ch;

		cout << ch << " " << count++ << endl;

		if (ch == 'x')
		{
			break;
		}
	}

	cout << "----------------------------" << endl;

	return 0;
}