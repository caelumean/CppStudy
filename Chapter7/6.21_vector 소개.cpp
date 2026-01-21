#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<int> array;
	vector<int> array2 = { 1,2,3,4,5 };

	cout << array2.size() << endl;

	vector<int> array3 = { 1,2,3 };
	cout << array3.size() << endl;

	vector<int> array4{ 1,2,3 };
	cout << array4.size() << endl;

	// 벡터의 장점은 메모리를 알아서 지워준다.
	vector<int> arr = { 1,2,3,4,5 };

	for (auto& itr : arr)
	{
		cout << itr << endl;
	}
		
	cout << arr[1] << endl;
	cout << arr.at(1) << endl;

	cout << endl;

	// 사이즈도 마음대로 바꿀 수 있다.
	vector<int> arr1 = { 1,2,3,4,5 };

	arr1.resize(10);

	for (auto& itr : arr)
	{
		cout << itr << " ";
	}

	cout << endl;
	cout << arr1.size() << endl;
	cout << arr1[1] << endl;

	return 0;
}