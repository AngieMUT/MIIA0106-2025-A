// ukauke.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void swapByvalue(int x, int y);
void swapByreference(int& x, int& y);

int main()
{
	int a = 0;
	int b = 0;
	char choice;
	

	do {
		cout << "Enter value for a:";
		cin >> a;
		cout << "Enter value for b:";
		cin >> b;
		
		cout << "\n[Intial] Before swap: a = " << a << ", b = " << b << endl;

		// test call by value
		swapByvalue(a, b);
		cout << "After swap(Call by value): a = " << a << ", b = " << b << endl;

		// test call by reference
		swapByreference(a, b);
		cout << "After swap(Call by reference): a = " << a << ", b = " << b << endl;

		// ask user if they want to continue
		cout << "\nDo you want to try again? (y/n): ";
		cin >> choice;

		cout << "==============================" << endl;

	} while (choice == 'y' || choice == 'Y'); // continue if user enters 'y' or 'Y'
	return 0;
	}

void swapByvalue(int x, int y) 
{
	int temp = x;
	x = y;
	y = temp;
}
void swapByreference(int& x, int& y) 
{
	int temp = x;
	x = y;
	y = temp;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
