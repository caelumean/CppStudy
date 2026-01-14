#include <iostream>
#include <string>
#include <limits>

using namespace std;


int main()
{
	// 문자열을 표현할 때 맨뒤에 끝난다라는 표시를 가진 안보이는 문자열이 있다.
	cout << "Hello world" << endl;

	const char my_strs[] = "Hllo, World";

	// string은 사용자 정의 자료형이다.
	const string my_hello = "Hello World";
	/*
	const string my_hello("Hello World");
	const string my_hello{ "Hello World" };
	*/

	string my_ID = "123";

	cout << my_hello << endl;

	cout << "----------------------------------" << endl;


	cout << "Your name ? : ";
	string name;
	// cin >> name;
	// getline은 라인 단위로 읽고 엔터를 칠 때까지 입력을 받는다.
	std::getline(std::cin, name);

	cout << "Your age ? : ";
	string age;
	//cin >> age;
	std::getline(std::cin, age);
	cout << name << " " << age << endl;

	cout << "----------------------------------" << endl;
	// 숫자 뒤에 엔터를 쳤더니 그 숫자가 name에 들어갔다.
	// 해결 방법
	// 버퍼를 날려버리고 새롭게 받아달라라고 하면 된다.
	// cin.ignore
	cout << "Your age ? : ";
	int age1;
	cin >> age1;

	// \n만날 때까지 32767개의 글자를 무시해라(날려버려라)
	// 32767숫자가 찝찝하다 (매직넘버)
	// std::cin.ignore(32767, '\n');
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << "Your name ? : ";
	string name1;
	std::getline(std::cin, name1);

	cout << name1 << " " << age1 << endl;

	cout << "----------------------------------" << endl;

	// append = 문자열 + 문자열
	string a("Hello, ");
	string b("World ");
	string hw = a + b;

	hw += "I'm good";

	cout << hw << endl;

	cout << "----------------------------------" << endl;

	string a1("Hello World");

	// 문자열의 길이
	cout << a1.length() << endl;

	return 0;
}