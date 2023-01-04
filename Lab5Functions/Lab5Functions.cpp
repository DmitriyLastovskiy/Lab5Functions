#include <iostream>
using namespace std;

/*Функція яка рахує суму двох чисел
* Реалізація або об'явлення
int Sum(int a, int b)
{
	int result;
	result = a + b;
	return result;

	return a + b;
}
 Виклик
void main()
{
    int c = Sum(5,12);
	cout<<c<<endl;
	================
	int q = 10;
	int w = 10;

	cout << Sum(q,w)<<endl;
} */

//Нюанс з передачею вказівника на массив а не сам массив
void FillArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
}


void ShowArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i]<<endl;
	}
}

void main()
{
	const int SIZE = 10;
	int arr[SIZE];


	FillArray(arr, SIZE);
	ShowArray(arr, SIZE);
}


