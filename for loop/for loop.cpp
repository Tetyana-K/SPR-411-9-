// for loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int fun(int a, int b)
{
    return a + b;
}
int main()
{
    int start, end;
    cout << "Enter start and end numbers: ";
    cin >> start >> end; // start <= end
    
    int step;
    cout << "Enter step: ";
    cin >> step;

    // i =0 надали поч значення для лічильника циклу
    // перевіряється умова циклу i <= end
    // якщо так, то виконується тіло циклу, в кінці тіла цикло спрацбовуї збільшення лічильника циклу i += step
    // якщо ні, то виконується вихід з циклу

    for (int i = start; i <= end; i += step) 
    {
        cout << i << "\t";
    }
    cout << "\n\n";
    for (char letter = 'A'; letter <= 'Z'; letter++)
    {
        cout << letter << " ";
    }
    cout << endl;

    for (char letter = 'Z'; letter >= 'A'; letter--)
    {
        cout << letter << " ";
    }
    cout << endl;


    cout << fun(2, 3) << endl;
    // break continue
}



