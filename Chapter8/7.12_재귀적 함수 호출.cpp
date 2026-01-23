/*
재귀적 함수 호출
자기와 똑같은 함수를 호출하는 것이다.


*/
#include <iostream>

using namespace std;

void countDown(int count)
{
	cout << count << endl;
	
	/*if (count == 0)
	{
		return;
	}*/
	// 자기가 자기를 부른다.
	// 재귀적 함수를 만들때는 종료하는 조건을 반드시 만들어줘야한다.
	// 없으면 스택오버플로우가 발생한다.
	if (count > 0)
	{
		countDown(count - 1);
	}
	

}
int main()
{
	countDown(5);

	return 0;
}