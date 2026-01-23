#include <iostream>
#include <vector>

using namespace std;

void printStack(const std::vector<int>& stack)
{
	for (auto& e : stack)
	{
		cout << e << " ";
	}
	cout << endl;
}

int main()
{
	// int *v_ptr = new int[3]{1,2,3};
	std::vector<int> v{ 1,2,3 };

	// 벡터는 작은 쪽으로 resize를 할 때 
	// 메모리를 반납하고 지우면 느려지니까
	// 메모리는 그대로 갖고 없는 척 한다.
	v.resize(2);

	// vector에는 size,capacity(용량)이 있다.
	// 벡터를 더 잘 쓰는 방법은 내부에서 이루어지는 
	// new와 delete를 어떻게하면 적게 호출할 것인지를
	// 생각하면서 쓰는 것이다.
	// capacity만큼 메모리 개수를 가지고 있다.

	for (auto& e : v)
	{
		cout << e << " ";
	}
	cout << endl;
	
	// 용량은 3을 유지하고 출력을 할 때만 2
	cout << v.size() << " " << v.capacity() << endl;
	// 강제로 3을 출력해보게 하기
	// 에러 뜸
	//cout << v[2] << endl;
	//cout << v.at(2) << endl;

	// 억지로 가져오기
	int* ptr = v.data();
	// 마지막에 무조건 갖고 있는데 없는 척하는 거다
	cout << ptr[2] << endl;


	cout << "-----------------------------------" << endl;
	std::vector<int> v1{ 1,2,3 };

	// reserve : 메모리의 공간을 미리 확보하겠다.
	// 뒤에 원소가 추가가 될 때 뒤에 공간이 확보되어있을 때
	// 새로 메모리를 교체하고 그런 작업을 하지 않아서 
	// 속도가 빠르다.
	v1.reserve(1024);

	for (auto& e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	cout << v1.size() << " " << v1.capacity() << endl;

	cout << "-----------------------------------" << endl;
	// 스택처럼 사용하는 방법
	std::vector<int> stack;

	stack.push_back(3);
	printStack(stack);

	stack.push_back(5);
	printStack(stack);

	stack.push_back(7);
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);






	return 0;
}