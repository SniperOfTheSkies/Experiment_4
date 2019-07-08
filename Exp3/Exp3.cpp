#include <iostream>
#include <conio.h>

using namespace std;

int main()

{

	// Variable Declaration

	int num[10];

	int i, a, large, small;


	cout << "                   Press any key to start the program... \n";

	_getch();

	cout << "     Good day, User!\n\n";

	cout << "     Kindly enter your numbers for the array: (Capacity = 10)\n\n";



	cout << "******************************************************************************* \n";



	// Initializing An Array

	for (i = 0; i < 10; ++i)

		num[i] = 0.0;



	// Reading Data Into An Array

	for (i = 0; i < 10; ++i)

		cin >> num[i];


	cout << "\n     Here are your numbers: ";


	// Printing An Array

	for (i = 0; i < 10; ++i)

		cout << num[i] << " ";

	cout << "\n\n";

	large = small = num[0];

	for (i = 1; i < 10; ++i)

	{

		if (num[i] > large)

			large = num[i];

		if (num[i] < small)

			small = num[i];

	}



	// Smallest & Largest Integer

	cout << "     Your largest Number is: " << large << "\n\n";

	cout << "     Your smallest Number is: " << small << "\n\n";



	// Summation of Array

	cout << "     The sum of your array is: " << (num[0] + num[1] + num[2] + num[3] + num[4] + num[5] + num[6] + num[7] + num[8] + num[9]);

	cout << "\n\n";



	// Average of Array

	cout << "     The average of your array is: " << (num[0] + num[1] + num[2] + num[3] + num[4] + num[5] + num[6] + num[7] + num[8] + num[9]) / 10;

	cout << "\n\n";

	_getch();

	cout << "                   Press any key to end the program... \n";

	_getch();


	return 0;

}