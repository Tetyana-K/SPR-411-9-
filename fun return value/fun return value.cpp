// fun return value.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int maximum(int a, int b); // прототип функції

int main()
{
    int one, two;
    cout << "Enter 2 integer numbers: ";
    cin >> one >> two;
    
    // виклик функції, потрібно зловити результат
    int m = maximum(one, two); // one, two - параметри функції,  фактичні параметри функції
    cout << "Max(" << one << ", " << two << ") = " << m << endl;
}

int maximum(int a, int b) // a,b -  параметри функції, формальні параметри
{
    if(a > b)
        return a;// функція повертає у зовн. світ значення змінної а
    return b; // функція повертає у зовн. світ значення змінної b
}

// 1. Визначити функцію для зображення прямокутника вказаних розмірів та заповненого вказаним символом. По замовчуванню прямокутник малюється симолом '*'