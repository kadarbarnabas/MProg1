#include <iostream>
using namespace std;

void buborekrendezes(int array1[], int arraySize)
{
	for (int i = 1; i < arraySize; i++) //azért nem sizeof(array1) / sizeof(int) mert "Dividing sizeof a pointer by another value"
	{
		int index;
		if (*(array1 + i) < *(array1 + i - 1))
		{
			index = *(array1 + i);
			*(array1 + i) = *(array1 + i - 1);
			*(array1 + i - 1) = index;
			i = 0;
		}
	}
}

int main()
{
	int tomb[10] = { 5, 3, 2, 6, 9, 10, 1, 4, 8, 7 };
	int arraySize = sizeof(tomb) / sizeof(int);
	buborekrendezes(tomb, arraySize);
	for (int i = 0; i < arraySize; i++)
	{
		cout << *(tomb + i) << endl;
	}
	
}