/*
동적할당 배열은 런타임에서 배열의 사이즈를 결정하고 
그 때 그 때 받아오기 때문에 좀 더 유동적으로 메모리를 받아 올 수 있다.


*/

#include <iostream>

using namespace std;

int main()
{
	int length = 5;
	
	cin >> length;

	// 남은 곳은 자동으로 0으로 초기화 된다.
	// 초기화 크기 보다 작게 길이를 받으면 에러가 생긴다.
	int* array = new int[length] {11};

	array[0] = 1;
	array[1] = 2;

	for (int i = 0; i < length; ++i)
	{
		cout << (uintptr_t)&array[i] << "\t";
		cout << array[i] << endl;
	}
	// new가 있으면 항상 delete 넣을 것
	delete[] array;

	cout << "--------------------------------------------" << endl;

	int fixedArray[] = { 1,2,3,4,5 };

	// 받는 메모리크기는 3인데 
	// 초기화는 3을 초과해서 메모리 크기의 차이때문에
	// 오류가 생긴다.
	int* array = new int[3] {1, 2, 3, 4, 5};

	// resizing
	// 직접적으로 안된다.
	// 1. 더 큰 메모리를 받아온 다음에 원래 메모리를 복사해서 붙여 넣고
	// 새로운걸 덧붙이는 식으로 해야한다.

	// 2. os한테 메모리를 추가적으로 요구해서 하는 방법이 있다.
	// 3. vector에서 가능하다.

	delete[] array;

	return 0;
}