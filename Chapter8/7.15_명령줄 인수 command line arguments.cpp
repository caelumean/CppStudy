#include <iostream>

using namespace std;

// 명령줄.cpp 우클릭
// E:\CppStudy\Chapter8\x64\Debug

/*
2번째 방법 Chapter8프로젝트 우클릭 - 속성 - 디버깅 - 명령인수에 입력하면 된다

*/
int main(int argc, char* argv[])
{
	for (int count = 0; count < argc; ++count)
	{
		cout << argv[count] << endl;
	}
}