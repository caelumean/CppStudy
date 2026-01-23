#include <iostream>
#include <string>

using namespace std;

// 기본값이 함수 오버로딩하는데에도 영향을 준다.
void print2(int x){}
void print2(int x,int y=10){}

void print1(std::string str){}
void print1(char ch = ' '){}
// 헤더파일에 있는 경우라면
// 둘 중에 하나만 있어야 한다.
// 헤더에 기본값이 정의되어 있는 것이 좋다.
void print(int x = 1024, int y = 20, int z = 30);

// 맨 오른쪽에 있는 값이 기본 값이 없으면 안된다.
//void print(int x = 1024,int y = 20,int z = 30)
//{
//	cout << x << " "<<  y << " " << z <<  endl;
//}
void print(int x, int y, int z)
{
	cout << x << " " << y << " " << z << endl;
}

int main()
{
	print();
	print(100);
	print(100, 200);
	print(100, 200, 300);

	print1();




	return 0;
}