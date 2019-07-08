#include <iostream>
#include <conio.h>

using namespace std;

int main()

{

	int n;

	char a, ans;

	cout << "                Press any key to start the counting program... \n";


	_getch();

repeat:

	cout << "Would you like to start with 1 or 0?\n(You can enter a different number)\n";

	cout << "\n Input: ";

	cin >> n;


	cout << "Initializing counting numbers... \n";

	_getch();

	cout << ".\n";

	_getch();

	cout << ".\n";

	_getch();

	cout << ".\n";

	_getch();



	cout << "\nPress any key to count each number.\n\n";

	_getch();



	switch (n)

	{

	case 1:

		cout << "   1";

		_getch();

		cout << ", 2";

		_getch();

		cout << ", 3";

		_getch();

		cout << ", 4";

		_getch();

		cout << ", 5";

		_getch();

		cout << ", 6";

		_getch();

		cout << ", 7";

		_getch();

		cout << ", 8";

		_getch();

		cout << ", 9";

		_getch();

		cout << ", 10";

		_getch();

		cout << ", 12";

		_getch();

		cout << ", 14";

		_getch();

		cout << ", 16";

		_getch();

		cout << ", 18";

		_getch();

		cout << ", 20";

		_getch();

		cout << ", 22";

		_getch();

		cout << ", 24";

		_getch();

		cout << ", 26";

		_getch();

		cout << ", 28";

		_getch();

		cout << ", 30";

		_getch();

		cout << "\n\nInitialization complete.\n\n";

		cout << "Results: \n\n";

		cout << "     Numbers 1 - 10 successfully loaded. \n\n";

		cout << "     Numbers 11 - 20 were unsuccessful. \n\n";

		cout << "     Numbers 21 - 30 were unsuccessful. \n\n";

		_getch();

		cout << "     Checking log...\n\n";

		_getch();

		cout << ".\n";

		_getch();

		cout << ".\n";

		_getch();

		cout << ".\n";

		_getch();

		cout << "     Missing numbers loading... \n\n";

		getch();

		cout << "          - 11, 13, 15, 17, 19, 21, 23, 25, 27, 29 \n";

		break;

	case 0:

		cout << "   0";

		_getch();

		cout << ", 1";

		_getch();

		cout << ", 2";

		_getch();

		cout << ", 3";

		_getch();

		cout << ", 4";

		_getch();

		cout << ", 5";

		_getch();

		cout << ", 6";

		_getch();

		cout << ", 7";

		_getch();

		cout << ", 8";

		_getch();

		cout << ", 9";

		_getch();

		cout << ", 10";

		_getch();

		cout << ", 12";

		_getch();

		cout << ", 14";

		_getch();

		cout << ", 16";

		_getch();

		cout << ", 18";

		_getch();

		cout << ", 20";

		_getch();

		cout << ", 22";

		_getch();

		cout << ", 24";

		_getch();

		cout << ", 26";

		_getch();

		cout << ", 28";

		_getch();

		cout << ", 30";

		_getch();

		cout << "\n\nInitialization complete.\n\n";

		cout << "Results: \n\n";

		cout << "     Numbers 1 - 10 successfully loaded. \n\n";

		cout << "     Numbers 11 - 20 were unsuccessful. \n\n";

		cout << "     Numbers 21 - 30 were unsuccessful. \n\n";

		_getch();

		cout << "     Checking log...\n\n";

		_getch();

		cout << ".\n";

		_getch();

		cout << ".\n";

		_getch();

		cout << ".\n";

		_getch();

		cout << "     Missing numbers loading... \n\n";

		getch();

		cout << "          > 11, 13, 15, 17, 19, 21, 23, 25, 27, 29 \n";

		break;

	default:

		cout << "  System Message: \n" << "      Since you've inputted a different number, \n      the system would adjust to your input. \n\n";

		_getch();

		for (int a = 1; a <= 10; ++a)

		{

			cout << n + a << ", ";

		}

		for (int b = 1; b <= 10; ++b)

		{

			cout << 10 + n + b + b << ", ";

		}

		_getch();

		cout << "\n\nInitialization complete.\n\n";

		cout << "Results: \n\n";

		cout << "     1st to 10th numbers: successfully loaded per number. \n\n";

		cout << "     11th to 20th numbers: unsuccessfully loaded. \n\n";

		_getch();

		cout << "     Checking log...\n\n";

		_getch();

		cout << ".\n";

		_getch();

		cout << ".\n";

		_getch();

		cout << ".\n";

		_getch();

		cout << "     Numbers not found... \n\n";

		getch();



		cout << "Would you like to count again? (Y/N): ";

		cin >> ans;

		cout << "\n";

		if (ans == 'y')

			goto repeat;

	}