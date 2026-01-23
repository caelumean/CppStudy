// 함수 오버로딩
// 동일한 이름을 갖는 함수를 여러 개 만드는 것을 말한다.
#include <iostream>
#include <string>

using namespace std;

// char* 단순히 메모리 주소값 하나(8바이트)를 전달받는다.
void print(const char *value){}
void print(int value){}

/*
typedef int my_int;

void print(int x){}
// typedef을 하더라도 컴파일러의 눈을 속일 순 없다.
void print(my_int){}
*/
// 리턴값을 쓸 필요 없이 레퍼런스로 받으면 된다.
void getRandom(int &x){}
void getRandom(double &x){}


// 매개변수가 다르면 이름이 같아도 다른 함수처럼 정의를 한다.
int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

int main()
{
	// add가 두 종류가 있는데 어떤 add를 사용할 지는 "컴파일"할 때 결정되어야 한다.
	add(1, 2);
	add(3.0, 4.0);

	int x;
	// 단점
	// int 타입인지 double타입인지 명확하게 구분을 못한다.
	getRandom(x);

	print(0);
	// 아래는 int 형으로 매칭되어버린다.
	// 그러니 매칭시킬때 깔끔하게 해야한다.
	print("a");

	return 0;
}

