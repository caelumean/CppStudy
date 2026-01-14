/*
	Type aliases
*/
#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	using namespace std;
	// 자료형이 이름이 다른 것처럼 만들 수 있다.
	// 내가 distance_t를 쓸 때에는 double을 사용하기 위해서 쓰는 거다라는 메모 
	typedef double distance_t;

	double my_distance;
	distance_t home_to_work;
	distance_t home_to_school;


	
	std::vector<std::pair<std::string, int>> pairlist;
	vector<pair<string, int>> pairlist2;

	// 두 가지 방법이 있다.
	typedef vector<pair<string, int>> pairlist_t;
	using pairlist_t = vector<pair<string, int>>;

	pairlist_t pairlist3;
	pairlist_t pairlist4;

	



	return 0;
}