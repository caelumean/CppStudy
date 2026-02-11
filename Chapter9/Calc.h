#pragma once
#include <iostream>

// 헤더 파일에서 using namespace를 하게 되면 전부 영향을 받게 되어서
// 안쓰는 것이 좋다
class Calc
{
private:
	int m_value;

public:
	Calc(int init_value);
	Calc& add(int value);
	Calc& sub(int value);
	Calc& mult(int value);
	void print1();
};

