// sort array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// алгоритм впорядкування масиву методом вибору (Selection Sort) 
void sortSelSort(int arr[], int size);
void bubbleSort(int arr[], int size);

template <typename T>
void printArray(const T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "\t" << arr[i];
	}
	cout << endl;
}

int main()
{
	int arr[] {-100, -22, 33, -4, -55, 123, 11 }; // 7 elements
	
	printArray(arr, size(arr)); // size(arr) - кількість елементів масиву

	//sortSelSort(arr, size(arr));
	bubbleSort(arr, size(arr));
	cout << "Sorted array:\n";
	printArray(arr, size(arr));
	
}

void sortSelSort(int arr[], int size)
{
	for (int step = 0; step < size - 1; step++)
	{
		int min = arr[step]; // мінімальне значення на step-у проході алгоритму
		int indexMin = step; // індекс мінімального
		for (int i = step + 1; i < size; i++)
		{
			if (arr[i] < min)
			{
				min = arr[i];
				indexMin = i;
			}
		}
		arr[indexMin] = arr[step]; // обмін місцями між step-м елементом та мінімальним
		arr[step] = min;
		// printArray(arr, size);

	}
}

void bubbleSort(int arr[], int size)
{
	bool isSwap = true;
	for (int i = 0; i < size-1 && isSwap; i++)
	{
		isSwap = false;
		for (int j = 0; j < size - 1 - i; j++) // i =0 j = 0..size-1    i = 1 j = 0..size-2
		{
			if (arr[j] > arr[j + 1]) // якщо лівий елемент з пари сусідніх елементів більше правого
			{
				int tmp = arr[j]; // nj 
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				isSwap = true;
				// swap(arr[j], arr[j+1]);
			}
		}
		printArray(arr, size);
	}
}
// переробити алгоритми сортування на шаблони 