/*
1. 다음의 경우에 대해 플래그를 바꾸기
-기사를 봤을 때
- 기사의 좋아요를 클릭했을 때
-기사의 좋아요를 다시 클릭했을 때
- 본 기사만 삭제할 때

2. 아래의 두 줄이 왜 동일하게작동하는 지 설명해보세요
myflags &= ~(option4 | option5);
myflags &= ~option4 & ~option5;
*/

#include <iostream>

using namespace std;

int main()
{
	unsigned char option_viewed  = 0x01;
	unsigned char option_edited  = 0x02;
	unsigned char option_liked	 = 0x04;
	unsigned char option_shared	 = 0x08;
	unsigned char option_deleted = 0x80;

	unsigned char my_article_flages = 0;


	return 0;
}

