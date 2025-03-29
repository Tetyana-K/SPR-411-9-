// overload func.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//  перевантажені функції - функції з однаковою назвою, які виконують подібні задачі, але на різних списках параметрів
int maximum(int a, int b) // a,b -  параметри функції, формальні параметри
{
	if (a > b)
		return a;// функція повертає у зовн. світ значення змінної а
	return b; // функція повертає у зовн. світ значення змінної b
}

int maximum(int a, int b, int c) // a,b,c -  параметри функції, формальні параметри
{
	int m = a;
	if (b > m)
		m = b;
	if (c > m)
		m = c;
	return m;

}
int main()
{
	int one, two, three;
	cout << "Enter 2 numbers : ";
	cin >> one >> two;
	cout << "Max from 2 : " << maximum(one, two) << endl;// 1 function

	cout << "\nEnter 3 numbers : ";
	cin >> one >> two >> three;
	cout << "Max from 3 : " << maximum(one, two, three) << endl;// 2 function

}

// Визначити функції 1) виводить масив на екран 2) вводить масив з клавіатури 3) збільшує усі елементи на задане число value (value - параметр функції) 