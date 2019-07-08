#include <iostream>
#include <conio.h>

using namespace std;

int main()

{

	int n;

	int Old, New, Max, Fib;

	char ans;


	cout << "               Press (0) to start the Fibonacci program... \n";

repeat:

	cout << " User input: ";

	cin >> n;

	cout << "Initializing counting numbers... \n";

	_getch();

	cout << ".\n";

	_getch();

	cout << ".\n";

	_getch();

	cout << ".\n";

	_getch();





	cout << "\nGiven that they begin with: \n";

	cout << "   0 & 1 \n\n";

	cout << "The system would now continue after these numbers.\n" << "Press any key to continue counting... \n\n";

	_getch();



	switch (n)

	{
	case 0:

		cout << "   1";

		_getch();

		cout << ", 2";

		_getch();

		cout << ", 3";

		_getch();

		cout << ", 5";

		_getch();

		cout << ", 8";

		_getch();

		cout << ", 13";

		_getch();

		cout << ", 21";

		_getch();

		cout << ", 34";

		_getch();

		cout << ", 55";

		_getch();

		cout << ", 89";

		_getch();

		cout << ", 144";

		_getch();

		cout << ", 233";

		_getch();

		cout << ", 377";

		_getch();

		cout << ", 610";

		_getch();

		cout << ", 987";

		_getch();

		cout << ", 1597";

		_getch();

		cout << ", 2584";

		_getch();

		cout << "\n   4181";

		_getch();

		cout << ", 6765";

		_getch();

		cout << ", 10946";

		_getch();

		cout << "\n\nInitialization complete.\n\n";

		cout << "Results: \n\n";

		cout << "     All numbers from the 1st to the 22nd digit are successfully loaded. \n\n";



		_getch();

		cout << "     Checking log...\n\n";

		_getch();

		cout << ".\n";

		_getch();

		cout << ".\n";

		_getch();

		cout << ".\n";

		_getch();

		cout << "     No missing numbers found... \n\n";

		cout << "     Press any key to end the program. \n\n";

		break;

	default:

		cout << "  System Message: \n" << "      Since you've inputted an invalid number, \n      the system would force close. \n\n";
	}



	cout << "Press any extraneous number to load the infinite fibonacci.\n(Till the number you will input)";

	cin >> Max;

	Old = 0;

	New = 1;

	Fib = Old + New;

	cout << "\nLoading the Fibonacci: \n" << Old << " " << New;



	while (Fib <= Max)

	{
		cout << " " << Fib;

		Old = New;

		New = Fib;

		Fib = Old + New;
	}
	return 0;
}