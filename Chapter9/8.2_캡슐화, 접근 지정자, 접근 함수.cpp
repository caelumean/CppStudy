#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
	// public이라고 안쓰면 기본적으로 private이다.
	int m_month;
	int m_day;
	int m_year;

public:
	void setDate(const int& month_input, const int& day_input, const int& year_input)
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}

	void setMonth(const int& month_input)
	{
		m_month = month_input;
	}
	void setDay(const int& day_input)
	{
		m_day = day_input;
	}

	// getDay에서 day를 바꾸지 못하게 막아야한다.
	const int& getDay()
	{
		return m_day;
	}
	
	// 같은 클래스 안에 정의되어있는 같은 멤버이기 때문에 접근이 가능하다
	void copyFrom(const Date& original)
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}
};

int main()
{
	Date today;
	today.setDate(1, 29, 2026);

	Date copy;
	copy.copyFrom(today);


	return 0;
}