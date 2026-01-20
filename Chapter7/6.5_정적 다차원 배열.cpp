#include <iostream>

using namespace std;

int main()
{

	const int num_rows = 3;
	const int num_colums = 5;


	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_colums; ++col)
		{
			cout << '[' << row << ']' << '[' << col << ']' << '\t';
		}
		cout << endl;
	}

	cout << endl;

	// num_rows는 생략 가능하다.
	// num_colums 생략 불가능
	int array[num_rows][num_colums]
	{
		// 나머지는 자동으로 0으로 채워준다.
		{1,2,},		// row 0
		{6,7,8,9,10},		// row1
		{11,12,13,14,15},	// row2
	};


	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_colums; ++col)
		{
			cout << array[row][col] << '\t';
			// 내부적으론 1차원이다.
			//cout << (int)&array[row][col] << '\t';
		}
		cout << endl;
	}

	int array[5][4][3];
}