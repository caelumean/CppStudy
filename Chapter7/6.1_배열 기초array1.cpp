/*
arry 
비슷한 것들이 쭉 나열되어 있는 것들을 말한다.

*/
#include <iostream>
#define NUM_STUDENTS2 100
using namespace std;

struct Rectangle
{
	int lenght;
	int width;
};
enum StudentName
{
	JACKJACK,
	DASH,
	VIOLET,
	NUM_STUDENTS,
};

int main()
{
	
	int student_score[5];
	
	// 첫번째 원소의 인데스는 0 
	student_score[0] = 100;	// 1st element
	student_score[1] = 80;	// 2nd element
	student_score[2] = 90;	// 3nd element
	student_score[3] = 50;	// 4th element
	student_score[4] = 10;	// 5th element
	//student_score[5] = 30;	// 6th element


	cout << student_score[0] << endl;
	cout << student_score[1] << endl;
	cout << student_score[2] << endl;
	cout << student_score[3] << endl;
	cout << student_score[4] << endl;
	//cout << student_score[5] << endl;

	cout << "------------------------------------" << endl;

	// 구조체를 arrary로 사용하는 방법
	cout << sizeof(Rectangle) << endl;

	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl;

	rect_arr[0].lenght = 1;
	rect_arr[0].width = 2;

	cout << "------------------------------------" << endl;
	// array를 초기화하는 방법
	int my_array[5] = { 1,2,3,4,5 };
	int my_arrsy1[]{ 1,2,3,4,5 };

	cout << my_array[0] << endl;
	cout << my_array[1] << endl;
	cout << my_array[2] << endl;
	cout << my_array[3] << endl;
	cout << my_array[4] << endl;

	cout << "------------------------------------" << endl;

	cout << my_arrsy1[JACKJACK] << endl;
	cout << my_arrsy1[DASH] << endl;
	cout << my_arrsy1[VIOLET] << endl;

	cout << "------------------------------------" << endl;

	// NUM_STUDENTS가 마지막 학생의 +1이라서 저절로 갯수가 맞게 된다.
	int student_scores[NUM_STUDENTS];

	student_scores[JACKJACK] = 30;
	student_scores[DASH] = 80;
	student_scores[VIOLET] = 70;

	cout << "------------------------------------" << endl;

	int num_students = 0;
	cin >> num_students;

	// 이렇게하면 num_students가 에러뜨는 이유
	// num_students을 cin으로 받기 때문에 
	// 런타임에 값이 결정된다.
	// 배열은 사이즈가 결정이 되어있어야 한다.
	// 사이즈(size), 길이(length) : 배열이 담을 수 있는 요소의 개수
	// 그래서 define으로 길이를 정해주면 된다.
	// define사용을 권장하지 않는다.
	// int student_scores1[num_students];
	int student_scores1[NUM_STUDENTS2];


	return 0;
}