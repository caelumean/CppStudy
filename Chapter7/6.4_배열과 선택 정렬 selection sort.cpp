#include <iostream>

using namespace std;

void printArray(const int array[],const int length)
{
	for (int index = 0; index < length; ++index)
	{
		cout << array[index] << " ";
	}
	cout << endl;
}
int main()
{
	const int length = 5;

	int array[length] = { 3, 5, 2, 1, 4 };

	printArray(array, length);
	
	// swap
	//int temp = array[0];
	//array[0] = array[1];
	//array[1] = temp;

	//printArray(array, length);
	// std:: swap()이라는 함수도 있다.

	// length - 1 : 마지막 하나 남기 때문에 할 필요가 없다.
	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[smallestIndex] > array[currentIndex])
			{
				smallestIndex = currentIndex;
			}
		}
		// swap
		//std::swap(array[smallestIndex], array[startIndex]);
		{
			int temp = array[smallestIndex];
			array[smallestIndex] = array[startIndex];
			array[startIndex] = temp;
		}
		printArray(array, length);
	}
}