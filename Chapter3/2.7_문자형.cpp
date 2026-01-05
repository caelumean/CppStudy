// char은 컴퓨터 내부에서 숫자로 표현이 된다.
// 문자가 어떻게 숫자로 대응되는 지는 아스키 테이블을 보면 된다.

#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	char c1(65);
	// 한 글자를 표현할때에는 ' '
	// 문자열을 표현할 때에는 " "
	char c2('A');

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;


	// C-style casting
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	// Cpp style casting
	cout << char(65) << endl;
	cout << int('A') << endl;

	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;

	cout << "----------------------" << endl;
	char c3(65);

	// char이 한글자만 입력받기 때문에 한글자밖에 못받는다.
	// 그러면 나머지는 날라가느냐?
	// 아니다 버퍼에 따로 저장한다.
	// 그래서 버퍼에 남아있다가 cin할 때 다시 들어온다.

	// 여러글자 입력했을 때 디버그해보기.
	// cin은 한 개인데 4번 출력하면 어떻게 되는지 확인해볼것
	cin >> c3;
	cout << c3 << " " << static_cast<int>(c3) << endl;

	char c4(65);

	cout << sizeof(char) << endl;
	cout << (int)std::numeric_limits<char>::max() << endl;
	cout << (int)std::numeric_limits<char>::lowest() << endl;


	cout << sizeof(unsigned char) << endl;
	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;

	char c5(65);
	cout << int('\n') << endl;
	cout << "This is first line \nsecond line";
	cout << "This is first line " << endl;
	cout << "second line";
	// 버퍼에 있는 걸 다 쏟아내고 줄바꿈을 하지마라
	cout << std::flush;

	cout << "This is 따옴표 \"";

	// 윈도우용 char
	wchar_t c6;
	// 유니코드 char
	char32_t c7;


	return 0;
}