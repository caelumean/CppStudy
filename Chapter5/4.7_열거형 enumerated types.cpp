#include <iostream>
#include <typeinfo>

// enum : user-defined data type
// 서로 달라보이는 enum그룹도 전역처럼 작동을한다.
// 그래서 Color안에 Blue가 있고 Feeling에도 Blue가 있으면 오류가 생긴다.
// 수동으로 할당하는 것보다 기본으로 할당하는 것이 좋다.
enum Color
{
	COLOR_BLACK = -3,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
};

enum Feeling
{
	HAPPY,
	JOY,
	TIRED,
	BLUE,
};

//int computeDamage(int weapon_id)
//{
//	// 이런걸 외우기가 어렵다
//	// 그래서 이걸 좀더 편하고 기호적 옵션을 표현하기 위해서 열거형을 사용한다.
//	if (weapon_id == 0) //sword
//	{
//		return 1;
//	}
//
//	if (weapon_id == 1) // hammer
//	{
//		return 2;
//	}
//
//	// ...
//
//}
int main()
{
	using namespace std;

	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };

	Color my_color = COLOR_BLACK;

	cout << my_color << " " << COLOR_GREEN << endl;

	int color_id = COLOR_RED;

	cout << color_id << endl;
	// 이렇게 바로 넣는 것은 안된다.
	// 단 캐스팅은 된다.
	// Color my_color1 = 3;

	Color my_color2 = static_cast<Color>(3);

	// cin으로 받을 수 없다.
	// 우회로 해서 받을 순 있다.
	//cin >> my_color2;

	int in_number;
	cin >> in_number;

	if (in_number == 0)
	{
		my_color2 = COLOR_BLACK;
	}
	string str_input;
	// 가급적이면 이런 방법은 권장하지 않는다.
	// 오타가 나기라도 하면 작동하지 않는다.
	if (str_input == "COLOR_BLACK")
	{
		my_color2 = static_cast<Color>(0);
	}
	return 0;
}