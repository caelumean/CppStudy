#include <iostream>

using namespace std;

struct MyStruct
{
	int array[5] = { 9,7,5,3,1 };
};
void doSomething(MyStruct *ms)
{
	//cout << sizeof(ms.array) << endl;
	cout << sizeof((*ms).array) << endl;
}
void printArray(int array[])
{
	cout << sizeof(array) << endl;
	cout << *array << endl;

	*array = 100;
}

int main()
{
	int array[5] = { 9,7,5,3,1 };

	cout << array[0] << " " << array[1] << endl;
	cout << array << endl;
	cout << &(array[0]) << endl;

	cout << *array << endl;

	cout << "------------------------------" << endl;
	// 정적arry도 결국엔 포인터다
	char name[] = "jackjack";
	cout << *name << endl;

	cout << "------------------------------" << endl;
	// 포인터
	int* ptr = array;
	cout << ptr << endl;
	//de-reference(역참조)
	// 역참조는 그 주소를 따라가 값을 가져온다.
	cout << *ptr << endl;

	cout << "------------------------------" << endl;
	cout << sizeof(array) << endl;
	// 포인터 변수 자체의 사이즈
	cout << sizeof(ptr) << endl;

	cout << "------------------------------" << endl;
	// 8이 나오는 이유 내부적으론 포인터여서
	printArray(array);

	cout << array[0] << " " << *array << endl;

	cout << "------------------------------" << endl;

	MyStruct ms;
	cout << ms.array[0] << endl;
	//doSomething(ms);
	// array가 struct나 클래스 안에 들어가 있을 경우
	// 포인터로 강제 변환 되지않는다.
	doSomething(&ms);


	return 0;
}