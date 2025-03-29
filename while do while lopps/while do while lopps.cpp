// while do while lopps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	//python : while, for
	int times;
	cout << "Enter times: ";
	cin >> times;

	//while (times-- > 0) // цикл з передумовою
	//{
	//	cout << "Hello" << endl;
	//	//--times;
	//}


	// цикл з післяумовою
	do
	{
		cout << "Test\n";
		--times;
	} while (times > 0);
}


