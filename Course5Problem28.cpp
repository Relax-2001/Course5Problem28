#include <iostream>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void FillArrayWithRandomNumbers(int Arr[], int& ArrayLength)
{

	cout << "Enter number of elements you want to fill the array with\n";
	cin >> ArrayLength;

	for (int i = 0; i <= ArrayLength - 1; i++)
	{
		Arr[i] = RandomNumber(1, 10);
	}

}

void CopyArrayElementsToOtherArray(int Arr1[] ,int Arr2 [], int ArrayLength)
{

	for (int i = 0; i <= ArrayLength - 1; i++)
	{
		Arr2[i] = Arr1[i];
	}

}

void PrintArray(int Arr[], int ArrayLength)
{

	for (int i = 0; i <= ArrayLength - 1; i++)
		cout << Arr[i] << " ";

	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr1[100], Arr2[100], ArrayLength = 0;

	FillArrayWithRandomNumbers(Arr1, ArrayLength);

	CopyArrayElementsToOtherArray(Arr1, Arr2 , ArrayLength);

	cout << " Array 1 elements :";
	PrintArray(Arr1, ArrayLength);

	cout << " Array 2 elements :";
	PrintArray(Arr2, ArrayLength);


}