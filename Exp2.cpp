#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int n, start = 1, end = 0;

	cout << "                   Press any key to start the program... \n";

	_getch();

repeat:

	cout << "     Add all numbers from 1 till: ";

	cin >> n;



	for (int a = start; a <= n; a++)

	{

		end += a;

	}

	cout << "\n     The sum of all the numbers from 1 till " << n << " is equal to: \n\n          ";

	cout << end;

	cout << "\n";



	_getch();


	cout << "                    Press any key to end the program... \n";

	_getch();

	cout << "Hooraaay! \n";

	return 0;

}