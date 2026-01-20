/*
지역변수는 스택메모리를 사용하고
동적할당 메모리는 힙 메모리를 사용합니다

큰 메모리에 저장되어 있는 데이터 중에서 일부분을 
cpu가 사용하기 위하여 메모리로부터 가져올 때는 
메모리 전체를 모두 뒤지면서 찾는 것이 아니라
필요한 데이터가 저장되어 있는 주소를 사용하여
직접 접근하여 가져온다.
*/
#include <iostream>
#include <typeinfo>

using namespace std;

struct Something
{
	int a, b, c, d;
};


int main()
{
	// 포인터 : 손가락으로 가리키다, 레퍼런스의 일종
	// de-reference operator(*)
	// 포인터가 저쪽 주소에 가면 이 데이터가 있어요라고 
	// 간접적으로 가리키기만 하는 것에 대해서
	// 그럼 거기에 진짜 뭐가 있는지 내가 들여다 볼께라며
	// 직접적으로 접근하겠다는 의미이다.
	int x = 5;

	// 내부에서는 이렇게 작동을 한다.
	// 메모리 주소에 가서 그 값을 꺼내온다.
	cout << *(&x) << endl;

	// 포인터는 메모리 주소를 담는 변수이다.
	// 도구-옵션-C/C++ - 코드스타일-서식-일반-;이 입력되면 자동으로 ~~
	int *ptr_x = &x, *ptr_y = &x;

	double d = 1.0;
	double *d1 = &d;
	double* ptr_d;

	cout << typeid(ptr_x).name() << endl;

	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;
	// 주소는 주소이기 때문에 주소를 저장하는 크기는 똑같다.
	// 32비트에서는 4바이트
	// 64비트에서는 8바이트
	// 64비트에서는 더 큰 주소 크기를 쓴다.
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;

	Something ss;
	Something* ptr_s;

	cout << sizeof(Something) << endl;
	cout << sizeof(ptr_s) << endl;

	return 0;
}