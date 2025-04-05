// sort array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// алгоритм впорядкування масиву методом вибору (Selection Sort) 
void sortSelSort(int arr[], int size);
void bubbleSort(int arr[], int size);
void bubbleSortDesc(int arr[], int size);

template <typename T>
void printArray(const T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "\t" << arr[i];
	}
	cout << endl;
}
void fillArrayWithRand(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

int main()
{
	srand(time(0));
	int arr[10]; 
	//int arr[] {-100, -22, 33, -4, -55, 123, 11 }; // 7 elements
	fillArrayWithRand(arr, size(arr));
	printArray(arr, size(arr)); // size(arr) - кількість елементів масиву

	//sortSelSort(arr, size(arr));
	bubbleSort(arr, size(arr));
	cout << "Sorted array  asc:\n";

	printArray(arr, size(arr));
	
	bubbleSortDesc(arr, size(arr));
	cout << "Sorted array desc:\n";
	printArray(arr, size(arr));

	cout << "HALF--------\n";
	fillArrayWithRand(arr, size(arr));
	printArray(arr, size(arr)); // size(arr) - кількість елементів масиву
	bubbleSort(arr, size(arr)/2);
	bubbleSortDesc(arr + size(arr) / 2, size(arr) / 2);
	printArray(arr, size(arr)); // size(arr) - кількість елементів масиву



	
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
	//bool isSwap = true;
	//for (int i = 0; i < size-1 && isSwap; i++)
	//{
	//	isSwap = false;
	//	for (int j = 0; j < size - 1 - i; j++) // i =0 j = 0..size-1    i = 1 j = 0..size-2
	//	{
	//		if (arr[j] > arr[j + 1]) // якщо лівий елемент з пари сусідніх елементів більше правого
	//		{
	//			int tmp = arr[j]; //міняємо елементи місцями
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = tmp;
	//			isSwap = true;
	//			// swap(arr[j], arr[j+1]);
	//		}
	//	}
	//	printArray(arr, size);
	//}

	bool needSort = true;// прапорець(логічна змінна), яка позначатиме чи потрібно масив сортувати, дасть можливіть зменшити число проходів
	int last = size - 1;
	while(needSort)
	{
		needSort = false;
		for (int j = 0; j < last; j++) // i =0 j = 0..size-1    i = 1 j = 0..size-2
		{
			if (arr[j] > arr[j + 1]) // якщо лівий елемент з пари сусідніх елементів більше правого
			{
				int tmp = arr[j]; // 
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				needSort = true;
				// swap(arr[j], arr[j+1]);
			}
		}
		--last;
		//printArray(arr, size);
	}
}
void bubbleSortDesc(int arr[], int size)
{
	bool needSort = true;// прапорець(логічна змінна), яка позначатиме чи потрібно масив сортувати, дасть можливіть зменшити число проходів
	int last = size - 1;
	while (needSort)
	{
		needSort = false;
		for (int j = 0; j < last; j++) // i =0 j = 0..size-1    i = 1 j = 0..size-2
		{
			if (arr[j] < arr[j + 1]) // 
			{
				int tmp = arr[j]; // 
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				needSort = true;
				// swap(arr[j], arr[j+1]);
			}
		}
		--last;
		
	}
}
// переробити алгоритми сортування на шаблони 