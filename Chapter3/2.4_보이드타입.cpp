#include <iostream>

void my_function()
{

}
int main()
{
	// void는 메모리를 차지하지 않기 때문에
	// 이렇게 선언할 수 없다.
	// void my_void;

	int i = 123;
	float f = 123.456f;

	// 
	void *my_void;

	// 데이터 타입과 데이터 사이즈가 다르더라도
	// 주소를 표현하는 데이터 양은 동일하다.
	// 각 각 데이터 타입의 첫주소는 규격이 똑같다.
	my_void = (void*)&i;
	my_void = (void*)&f;


	return 0;
}