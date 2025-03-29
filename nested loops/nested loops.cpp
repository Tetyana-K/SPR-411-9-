// nested loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	//for (int h = 0; h < 24; h++) // h = 0
	//{
	//	for (int m = 0; m < 60; m++) // m = 0 1 2 3 .. 59
	//	{
	//		for (int s = 0; s < 60; s++)
	//		{
	//		cout << h << ":" << m << ":" << s << endl;

	//		}
	//	}
	//	cout << endl;
	//}

	// draw line 
	int height, width;
	char symbol;
	char space = ' ';
	
	cout << "Enter height and width: ";
	cin >> height >> width;

	cout << "Enter draw symbol: ";
	cin >> symbol;

	for (int i = 1; i <= height; i++) // цикл по рядках
	{
		for (int j = 1; j <= width; j++) // цикл по стовпцях
		{
			cout << symbol;
		}
		cout << endl;
	}
	/////////////////////////////
	cout << "\n\n--Frame----------\n";
	for (int i = 1; i <= height; i++) // цикл по рядках
	{
		for (int j = 1; j <= width; j++) // цикл по стовпцях
		{
			if (i == 1 || i == height || j == 1|| j ==width)
				cout << symbol;
			else
				cout << space;
		}
		cout << endl;
	}
}

/*

*
**
***
****



* 
*/