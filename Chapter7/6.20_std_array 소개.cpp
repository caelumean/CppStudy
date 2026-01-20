#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

// 함수 파라미터로 넣을때도 그대로 유지된다.
// reference와 const도 제대로 작동한다.
void printLength(const array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl;
}
int main()
{
	int arr[5]{ 1,2,3,4,5 };

	// 위와 똑같이 작동을 한다.
	// 단점은 int옆에 숫자가 꼭 들어가야한다
	array<int, 5> my_arr = { 1,2,3,4,5 };
	my_arr = { 0,1,2,3,4 };
	my_arr = { 0,1,2 };

	cout << my_arr[10] << endl;
	// .at을 사용하면 미리 사용해보고 문제가 생기면 예외처리를 발동시킨다.
	cout << my_arr.at(10) << endl;

	// 원소 개수
	cout << my_arr.size() << endl;

	// 주의할점
	// array도 복사가 된다.
	// 그래서 시간이 또 걸린다.

	array<int, 5> my_arr1 = { 1,21,3,40,5 };

	// reference를 쓰면 중간에 복사되는 과정이 생략이 되기 때문에 빨라진다.
	for (auto& element : my_arr)
	{
		cout << element << " ";
	}
	cout << endl;

	std::sort(my_arr1.begin(), my_arr1.end());

	for (auto& element : my_arr)
	{
		cout << element << " ";
	}
	cout << endl;

	// 역순 정렬
	std::sort(my_arr1.rbegin(), my_arr1.rend());
	for (auto& element : my_arr)
	{
		cout << element << " ";
	}

	return 0;
}