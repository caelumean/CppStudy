/*
구조체
다양한 요소들을 묶어서 하나의 자료형인 것처럼 사용하게 해주는 것이다.

*/
#include <iostream>
#include <string>

using namespace std;

struct Person
{
	// 멤버라고 부른다.
	double height;
	float weight;
	int age;
	string name;

	// 함수가 구조체 안에 들어갈 수 있다.
	// 하지만 단순한 경우에만 하
	void print()
	{
		// . (멤버 셀렉스 오퍼레이터)

		cout << height << " " << weight << " " << age << " " << name;
		cout << endl;
	}
};
// 구조체 안에 구조체를 넣을 수 있다.
struct Actor
{
	Person Ann, Mary;
};
void printPerson(Person per)
{
	// . (멤버 셀렉스 오퍼레이터)

	cout << per.height << " " << per.weight << " " << per.age << " " << per.name;
	cout << endl;
}
// 함수가 구조체를 반환할 수 있도록 할 수 있다.
Person getMe()
{
	Person louis{ 180.0,78.0,34,"Louis" };

	return louis;

}
int main()
{
	// 여기서 uniform initialization이 유용하게 쓰인다.
	Person me{ 170.0 , 50.0, 20, "Jack Jack" };
	Person friend1{ 160.0 , 50.0, 20, "Willam" };
	Person friend2;

	// 구조체가 구조체를 복사할 수 있다.
	// 하지만 이렇게 하면 예기치않은 문제가 생길 수 있기 때문에
	// 가급적이면 사용하지 않는게 좋다.
	friend2 = me;

	printPerson(me);
	friend1.print();

	Person louis_from_func = getMe();
	louis_from_func.print();

	return 0;
}