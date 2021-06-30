// xenop ideas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	while (true)
	{
		float a, E, Select;
		int n, D;
		cout << "Choose what do you want to find: 1. Diagonals, 2. Area of equilateral triangle" << endl;
		cin >> Select;
		if (Select == 1)
		{
			cout << "Enter the number of gonies of the n-gono\n";
			cin >> n;
			if (n <= 2)
			{
				cout << "Please enter a valid value" << endl;
				cout << "===========================================================" << endl << endl;
			}
			else {
				D = (n * (n - 3)) / 2;
				cout << "The " << n << "-gono has " << D << " Diagonals\n";
				cout << "===========================================================" << endl << endl;
			}


		}

		if (Select == 2)
		{
			cout << "Enter the value of the leg\n";
			cin >> a;
			if (a <= 0)
			{
				cout << "Please enter a valid value" << endl;
				cout << "===========================================================" << endl << endl;
			}
			else {
				E = (a * a * sqrt(3)) / 4;
				cout << "The area of the equilateral triangle is " << E << "\n";
				cout << "===========================================================" << endl << endl;
			}

		}
		else {
			cout << "Please enter a valid value" << endl;
			cout << "===========================================================" << endl << endl;
		}
	}


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
