// template func.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//void printArray(const double arr[], int size);
//void printArray(const int arr[], int size);


// template = шаблон функції, зразок функції, на основі якого потім сторюються конкретні функції
template <typename T>
void printArray(const T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "\t" << arr[i];
	}
	cout << endl;
}

template <typename T>
T maxArray(const T arr[], int size)
{
	T max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
 // конкретна функція перекриє шаблон
char maxArray(const char arr[], int size)
{
	cout << "Worked ordinary function maxArray(const char arr[], int size)\n";
	char max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (tolower(arr[i]) > tolower( max))
			max = arr[i];
	}
	return max;
}

// 1) звичайна функція перекриє шаблон
// 2) шаблон


int main()
{
	const int SIZEA = 5;
	double a[SIZEA]{ 10.4, 2.8, -5.11, 6.2, 99.7 };

	// компілятор бачить тільки шаблон функції, бачить,що масив передано типу double, компілятор згенерує КОНКРЕТНУ функцію на типі T = double 
	//void printArray(const double arr[], int size)
	printArray(a, SIZEA); 
	cout << "Max = " << maxArray(a, SIZEA) << endl; // T = double, double maxArray(const double arr[], int size){double  max = arr[0];

	const int SIZEB = 7;
	int b[SIZEB]{ 1, 2, 5, 62, 80, 44, 33 };
	printArray(b, SIZEB); // T = int void printArray(const int arr[], int size)  {....}
	cout << "Max = " << maxArray(b, SIZEB) << endl;

	const int SIZEC = 6;
	string c[SIZEC]{ "apple", "yogurt", "pizza", "cola", "orange", "apricot"};
	printArray(c, SIZEC); // T = string,  void printArray(const string arr[], int size)  {....}
	cout << "Max = " << maxArray(c, SIZEC) << endl; // T = string, string maxArray(const string arr[], int size){string  max = arr[0]; ..

	const int SIZED = 5;
	char d[SIZED]{ 'a', 'Z', 'b', 'y' , 'M'};// A-Z 65-90      a-z 97-122
	printArray(d, SIZED); // T = char,  void printArray(const char arr[], int size)  {....}
	cout << "Max = " << maxArray(d, SIZED) << endl; //буде працювати звичайна функція  (бо звичайна функція перекриє шаблон)
	cout << "Max (based on template) = " << maxArray<char>(d, SIZED) << endl; //буде працювати  функція створена на основі шаблону
}

//void printArray(const double arr[], int size) // double arr [] 1 func
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << "\t" << arr[i];
//	}
//	cout << endl;
//}
//
//void printArray(const int arr[], int size) // int arr []
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << "\t" << arr[i];
//	}
//	cout << endl;
//}
//

// Визначити шаблони функцій для пошуку мінімального з двох даних, з трьох даних, в одновимірному масиві та у двовимірнрому масиві. 
// Перевірити роботу шаюл функцій для типів int, double, string, char