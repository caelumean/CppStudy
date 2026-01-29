#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Friend : name , address, age, height, weght, ....
// 데이터와 기능이 묶여져있는 것을 오브젝트라고 부른다.
// struct를 사용할 때에는 데이터를 묶는데만 쓰고
// 기능까지 넣을 때에는 class를 쓰는것이 일반적이다.
// Object라는 건 데이터와 출력해주는 기능이 묶여있는 것들을 개념적으로 말하는 것이다.
// 객체라는 개념을 프로그래밍 언어로 구현할 때 클래스라고 부른다.

class Friend
{
public:		// acess specifier(접근 지정자; publi,private,protected)
	string name;
	string address;
	int age;
	int height;
	int weight;

	void print()
	{
		cout << name << " " << address << " " << age << " " << height << " "
			<< weight << endl;
	}
};

int main()
{
	// 이렇게 선언을 하면 메모리를 차지하게 된다 이것을 instanciation
	// 이 표현하고자 하는 오브젝트 혹은 그 오브젝트를 구현하기 위해
	// 만든 클래스의 instance라고 부른다.
	Friend jj{ "Jack Jack","Uptown",2,30,10 };

	jj.print();

	vector<Friend> my_friends;
	my_friends.resize(2);

	for (auto& ele : my_friends)
	{
		ele.print();
	}


	return 0;
}