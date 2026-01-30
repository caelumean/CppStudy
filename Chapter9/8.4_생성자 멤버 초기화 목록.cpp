/*	생성자 초기화 방법
1. 퍼블릭으로 놓고 디폴트 값 넣어서 초기화를 할 수 있다.
2. 생성자에 파라미터에 디폴트값 넣고 초기화도 가능하다
*/


#include <iostream>

using namespace std;

class B
{
private:
	int m_b;
public:
	B(const int& m_b_in)
		:m_b(m_b_in)
	{

	}
};

class Something
{
private:
	int		m_i = 100;
	double	m_d = 100.0;
	char	m_c = 'F';
	int		m_arr[5] = { 100, 200, 300, 400, 500 };
	B		m_b{ 1024 };

public:
	Something()
		: m_i(1)
		, m_d(3.14)
		, m_c('a')
		, m_arr{1,2,3,4,5}
		, m_b(m_i -1)
	{
		m_i = 2;
		m_d = 3.0;
		m_c = 3;
	}

	void print()
	{
		cout << m_i << " " << m_d << " " << m_c << " " << endl;
		for (auto& e : m_arr)
		{
			cout << e << " ";
		}
		cout << endl;
	}
};

int main()
{

	Something some;

	some.print();

	return 0;
}