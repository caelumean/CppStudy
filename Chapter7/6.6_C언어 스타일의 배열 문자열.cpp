#include <iostream>

using namespace std;

int main()
{
	// 문자열의 마지막에는 '\0'이 들어가 있다.
	char myString[] = "string";

	for (int i = 0; i < 7; ++i)
	{
		cout << (int)myString[i] << "\t";
	}
	cout << endl;
	cout << "------------------------------------------------------" << endl;
	char myString1[255];
	cin >> myString1;

	myString1[0] = 'A';
	cout << myString1 << endl;
	// 여기서 버퍼 비우기를 안하면 잔여물 엔터가 남아 있어서 다음 getline이 엔터를 읽고 입력이 끝났다고 판단한다.
	cin.ignore();

	cout << "------------------------------------------------------" << endl;
	// 빈 칸과 널캐릭터는 다르다
	char myString2[255];
	cin.getline(myString2,255);
	cout << myString2;
	cin.ignore();
	cout << endl;
	cout << "------------------------------------------------------" << endl;
	int ix = 0;
	char myString3[255];

	cin.getline(myString3, 255);

	while (true)
	{
		if (myString3[ix] == '\0')
		{
			break;
		}
		cout << myString3[ix] << " " << (int)myString3[ix] << endl;
		++ix;		
	}
	cout << "------------------------------------------------------" << endl;
	
	// 이렇게 하면 위험하다
	// dest의 공간이 부족하면 메모리를 침범하기 때문에 os가 경고한다.
	char source[] = "Copy this!";
	char dest[50];
	// strcpy(dest, source);
	strcpy_s(dest, 50, source);

	cout << source << endl;
	cout << dest << endl;

	// strcat() : 문자열 뒤에 문자를 붙인다
	// strcmp() : 문자열 비교 /같으면 0리턴 / 같지 않으면 -1

	strcat(dest, source);
	cout << source << endl;
	cout << dest << endl;

	// 문자열이 같을 경우
	if (strcmp(source, dest) == 0)
	{
		cout << "같아" << endl;
	}

	return 0;
}