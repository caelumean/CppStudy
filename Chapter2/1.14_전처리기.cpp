#include <iostream>
#include <algorithm>
using namespace std;

// 매크로는 문서 편집기라고 생각하면 된다.
// MY_NUMBER로 설정한 것을 만나면 9로 교체해주는 것이다.

// 요즘에는 컴퓨터가 달라져서 매크로를 많이 안쓰는 추세이다.
#define MY_NUMBER 9 
#define MAX(a,b) (((a) > (b)) ? (a): (b))

// define의 범위 또는 효과는 이 cpp파일 안에서만 작용이 된다.
#define LIKE_APPLE

int main()
{

	cout << MY_NUMBER << endl;
	cout << MAX(1 + 3, 2) << endl;
	cout << std::max(3 + 4, 5) << endl;

	//define
	// 전처리기가 정의 되어있다면
#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#endif 
	// not define
	// 전처리기가 정의되어있지 않다면
#ifndef LIKE_APPLE
	cout << "Orange" << endl;
#endif




	return 0;
}