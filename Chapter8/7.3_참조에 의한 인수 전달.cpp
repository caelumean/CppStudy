// Call by reference

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// 대괄호안에 arr원소의 개수가 들어가야한다.
//void printElement(int(&arr)[4])
void printElement(const vector<int>& arr)
{

}
void foo1(int *&ptr)
{
	cout << ptr <<  " " << &ptr << endl;
}

// 입력으로 들어갈 부분의 매개변수는 const가 들어간다.
// 1. return value optimization이 잘 구현됐다.
// 2. 여러개의 리턴타입을 구현하는 것이 쉬워졌다.
void foo(const int& x)
{
	cout << x << endl;
}
void addOne(int &y)
{
	y = y + 1;
}

// degress라는 것은 구조상으로 봤을 때 안으로 들어왔다가 밖으로 영향을 못 미치니까 입력이구나라고 알 수 있고
// sin_out,cos_cout 변수 자체가 들어왔구나 sin_out,cos_cout를 건들이게 되면 
// 바뀐 값이 함수를 호출한 곳에도 영향을 줄 수 있다는 것을 알 수 있다.
// 매개변수로 입력을 앞에다 두고 , 출력은 뒤로 하는 게 일반적이다
void getSinCos(const double degrees, double& sin_out, double& cos_cout)
{
	static const double pi = 3.141592;

	// 계산식이 들어가는 수식을 코딩할 때는 
	// 값이 한번 계산되고 더 이상 안 바뀔 것 같은 것들은
	// const로 하는 게 좋다
	const double radians = degrees * pi / 180.0;
	sin_out = std::sin(radians);
	cos_cout = std::cos(radians);


}
int main()
{
	int x = 5;
	cout << x << " " << &x << endl;


	// x 자체가 넘어갔다.
	// 매개변수로 함수 자체를 인자로 전달했다.
	addOne(x);


	cout << "----------------------------------------" << endl;

	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;

	cout << "----------------------------------------" << endl;
	// 코드 구조로만 보면 value가 넘어가면 그냥 x가 출력되면 된다고 생각하게 된다.
	// 받는 쪽에선 레퍼런스로 받아야하는데 6은 리터럴이다.
	// 1. 함수 쪽에 &를 빼거나
	// 2. const를 붙이면 된다.
	foo(6);

	cout << "----------------------------------------" << endl;

	int x1 = 5;
	int* ptr = &x;

	cout << ptr << " " << &ptr << endl;

	cout << "----------------------------------------" << endl;
	// int arr[]{ 1,2,3,4 };
	vector<int> arr{ 1,2,3,4 };

	printElement(arr);

	return 0;
}