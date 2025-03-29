// fun intro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//// визначення функції
//void hello(string name = "everyone") // void - нічого не повертає у зовнішній світ
//{
//    // тіло функції
//    cout << "Hello, " << name << "!\n";
//}

// визначення функції
void drawLine(int length = 80, char symbol = '_')
{
    for (int i = 0; i < length; i++)
    {
        cout << symbol;
    }
    cout << endl;
}
void hello(string name = "everyone"); // prototype прототип функції, декларація функції

int main()
{
    
    hello("Oleh"); // виклик функції з аргументом "Oleh"
    drawLine(70, '.');
    hello();
    drawLine(); // 80 '-'

    string name;
    cout << "Enter name : ";
    cin >> name;
    drawLine(40);// виклик функції, 1-й аргумент буде 40 2-й по дефолту '_'
    hello(name);
    return 0;
}

// визначення функції
void hello(string name) // void - нічого не повертає у зовнішній світ
{
    // тіло функції
    cout << "Hello, " << name << "!\n";
}

