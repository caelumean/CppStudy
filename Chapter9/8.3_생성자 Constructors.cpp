/*
생성자(Constructors)
객체를 설계하다 보면 이 클래스의 인스턴스들은 만들어지자마자
이러한 것들, 이러한 속성 , 이러한 기능을 가지고 있어야하는 경우가 있을 때
생성자를 사용한다.

*/

#include <iostream>
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	// 생성자
	// 외부에서 호출할려고 쓰는 것이 아니다
	// 선언과 동시에 실행이 된다.
	// 생성자가 없으면 자동으로 디폴트 생성자가 만들어진다.
	// 왜냐하면 생성자가 없으면 생성을 못하기 때문이다.
	// 생성자는 자기 자체가 변수를 만드는게 아니고
	// 그냥 이름이 생성자인 것이다.
	// 생성될 때 호출되는 함수라고 생각하면 된다.
	// Fraction() {};
	/*
	Fraction()
	{
		m_numerator = 0;
		m_denominator = 1;

		// 디버그로 찍어보면 알 수 있다.
		cout << "Fraction() constructor" << endl;
	}
	*/
	Fraction(const int& num_in = 1,const int& den_in = 1)
	{
		m_numerator = num_in;
		m_denominator = den_in;

		// 디버그로 찍어보면 알 수 있다.
		cout << "Fraction() constructor" << endl;
	}

	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}

};

int main()
{
	// 내부적으로 들어가서 생성자를 실행시킨다.
	// 주의사항
	// 생성자의 파라미터가 하나도 없을 경우 ()(괄호가 빠진다.)
	/*Fraction frac;
	frac.print();*/
	
	cout << "--------------------------------" << endl;

	Fraction one_thirds;
	//Fraction one_thirds = Fraction{ 1,3 };
	// private이면 유니폼 초기화론 안된다.
	// 유니폼 초기화는 타입변환을 허용안한다.
	Fraction one_thirds2{ 1,3 };
	// 브래킷 초기화는 타입변환을 허용한다.
	Fraction one_thirds3(1, 3);
	one_thirds.print();


	return 0;
}