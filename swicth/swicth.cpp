// swicth.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int month;
    
    cout << "Enter number of month : " ;
    cin >> month;

    /*if (month == 1 || month == 2 || month == 12)
    {
        cout << "Winter\n";
    }
    else if (month >= 3 and month <= 5)
    {
        cout << "Spring\n";
    }
    else if (month >= 6 && month <= 8)
    {
        cout << "Summer\n";
    }
    else if (month >= 9 && month <= 11)
    {
        cout << "Autumn\n";
    }
    else
    {
        cout << "Invalid month number\n";
    }*/
    //switch (month) // селектор
    //{
    //case 1:  case 2:  case 12:
    //    cout << "Winter\n";
    //    break;
    //case 3:  case 4:  case 5:
    //    cout << "Spring\n";
    //    break;
    //case 6:  case 7:  case 8:
    //    cout << "Summer\n";
    //    break;
    //default: // else
    //    cout << "Invalid month number\n";
    //}
    
    enum Month { Jan = 1, Feb, March, Apr, May, Dec = 12 }; // переліковний тип складається з констант іменованих цілого типу

    switch (month) // селектор
    {
    case Jan:  case Feb:  case Dec:
        cout << "Winter\n";
        break;
    case Apr:  case March:  case May:
        cout << "Spring\n";
        break;
    case 6:  case 7:  case 8:
        cout << "Summer\n";
        break;
    default: // else
        cout << "Invalid month number\n";
    }
}


