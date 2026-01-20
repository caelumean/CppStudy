#include <iostream>

using namespace std;

int main()
{
	// const int num_students = 5;
	int scores[] = { 84,92,76,81,56 };
	// socre의 size는 20
	// 이걸 int의 size 4로 나누면 학생수가 나온다.
	const int num_students = sizeof(scores) / sizeof(int);

	int total_score = 0;
	int max_score = 0;
	int min_score = 0;

	for (int i = 0; i < num_students; ++i)
	{
		total_score += scores[i];
		max_score = (max_score < scores[i] ? scores[i] : max_score);
		/*if (max_score < scores[i])
		{
			max_score = scores[i];
		}*/
		min_score = (min_score > scores[i] ? scores[i] : min_score);

		/*if (min_score > scores[i])
		{
			min_score = scores[i];
		}*/
	}

	/*int score0 = 84;
	int score1 = 92;
	int score2 = 76;
	int score3 = 81;
	int score4 = 56;
	
	int total_score = score0 + score1 + score2 + score3 + score4;*/

	double avg_score = static_cast<double>(total_score) / num_students;


	return 0;
}