#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	/*bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;
	...
	*/

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;

	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;


	// 아이템이 최대 8개만 있다고 가정
	// 아이템 8개의 여부를 char 타입하나만으로 체크
	unsigned char items_flag = 0;

	cout <<"No item " <<  bitset<8>(items_flag) << endl;

	// item0 on
	items_flag |= opt0;
	cout << "item0 obtained " << bitset<8>(items_flag) << endl;

	// item3 on
	items_flag |= opt3;
	cout << "item3 obtained " << bitset<8>(items_flag) << endl;

	// item3 lost
	// ~(not)먼저 연산이 된다.
	items_flag &= ~opt3;
	cout << "item3 lost " << bitset<8>(items_flag) << endl;

	// has item1?
	if (items_flag & opt1)
	{
		cout << "Has item1" << endl;
	}
	else
	{
		cout << "Not have item1" << endl;
	}
	if (items_flag & opt0)
	{
		cout << "Has item0" << endl;
	}

	// obtain item 2, 3
	items_flag |= (opt2 | opt3);

	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item2,3 obtained " << bitset<8>(items_flag) << endl;

	// opt2를 가지고 있고 op1을 가지고 있지 않을 경우
	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		// opt2는 잃고
		// opt1을 얻기
		// 상태를 바꾸는건 XOR을 사용한다
		/*items_flag ^= opt2;
		items_flag ^= opt1;*/
		// 위의 식을 한줄로 만들면 이렇게 바꿀 수 있다.

		items_flag ^= (opt2 | opt1);
	}

	cout << bitset<8>(items_flag) << endl;

	// 생각외로 간단
	// &(AND)는 특정값을 빼낼 때
	// |(OR)은 특정값을 더할 때
	// ^(XOR)은 특정값의 상태를 바꿀때
	cout << "--------------------------------" << endl;

	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;
	cout << std::bitset<32>(red_mask) << endl;
	cout << std::bitset<32>(green_mask) << endl;
	cout << std::bitset<32>(blue_mask) << endl;

	// 색 코드가 16진수로 들어올때 RGB로 분류를 하기
	// 앞에 00이 추가로 있는 상태이다
	unsigned int pixel_color = 0xDAA520;

	cout << "컬러: " << std::bitset<32>(pixel_color) << endl;

	
	unsigned char red = (pixel_color & red_mask) >> 16;
	// 앞부분이 짤려서 안보이기 때문에 8칸 밀어서 보여주기 위한것이다.
	unsigned char green = (pixel_color & green_mask) >> 8;
	unsigned char blue = (pixel_color & blue_mask);

	cout << "red \t" << bitset<8>(red) << " 10진수: " << (int)red << endl;
	cout << "green \t" << bitset<8>(green) << " 10진수: " <<(int)green << endl;
	cout << "blue \t" << bitset<8>(blue) << " 10진수: " <<(int)blue << endl;

	
	




	return 0;

}