/*
위임 생성자 (C++11)
생성자가 다른 생성자를 사용하는 것

어떠한 기능을 하는 것은 한 곳에서만 나와야한다.
초기화 해주는 곳도 한 군데만 있는 것이 가장 좋다.
*/
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int m_id;
	string m_name;

public:
	Student(const string& name_in)
		//: Student(0, name_in)
	{
		init(0, name_in);
	}
	
	Student(const int& id_in, const string& name_in)
		//: m_id(id_in), m_name(name_in)
	{
		init(id_in, name_in);
	}
	// 위임 생성자를 만들거나 아래처럼
	// 1. 만능 초기화 함수를 하나 만든다.
	// 2. 생성자에서 초기화 작업을 안하고 분리를 한다.
	// 초기화 코드를 이렇게 분리하는 방법을 더 추천한다.
	void init(const int& id_in, const string& name_in)
	{
		m_id = id_in;
		m_name = name_in;
	}

	void print()
	{
		cout << m_id << " " << m_name << endl;
	}
};

int main()
{
	Student s1(0, "Jack Jack");

	s1.print();

	Student s2("Misa");
	s2.print();

	return 0;
}