#include <iostream>

using namespace std;

// 매개변수는 엄밀히 말하자면 배열이 아니다.
// 문법상 얘는 포인터다
// 배열을 통째로 가져오는게 아니라 얘의 첫번째 주소만 가져온다.
void doSomething(int students_score[20])
{
	cout << (int)&students_score << endl;
	cout << students_score[0] << endl;
	cout << students_score[1] << endl;
	cout << students_score[2] << endl;

}

int main()
{
	const int num_students = 20;
	int students_scores[num_students];

	// arr 변수 자체는 첫번째 주소이다.
	cout << (int)&(students_scores) << endl;
	cout << (int)&(students_scores[0]) << endl;
	cout << (int)&(students_scores[1]) << endl;
	cout << (int)&(students_scores[2]) << endl;
	cout << (int)&(students_scores[3]) << endl;


	cout << sizeof(students_scores) << endl;

	doSomething(students_scores);
	return 0;
}