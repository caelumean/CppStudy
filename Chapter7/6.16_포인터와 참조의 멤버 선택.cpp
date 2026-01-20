#include <iostream>

using namespace std;

struct Person
{
	int age;
	double weight;
};

int main()
{
	Person person;

	person.age = 5;
	person.weight = 30;

	Person& ref = person;
	ref.age = 15;

	Person* ptr = &person;
	ptr->age = 30;
	// . selection 변수가 * 보다 우선순위가 높아서 
	// 괄호를 꼭 쳐줘야 한다.
	// 근데 아래와 같은 방식은 잘 안쓴다.
	(*ptr).age = 20;

	Person& ref2 = *ptr;
	ref2.age = 45;

	cout << &person << endl;
	cout << &ref2 << endl;

	return 0;
}