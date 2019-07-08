#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()

{
	// 1

	int x, y;
	double V;

	// 2

	double z = 2.5;


	cout.setf(ios::fixed);

	cout.setf(ios::showpoint);

	//3

	cout.precision(2);

	cout << "                   Press any key to start the program... \n";

	_getch();



	cout << "What is the value of your x: ";

	cin >> x;

	cout << "\n\nWhat is the value of your y: ";

	cin >> y;

	cout << "\n\nTake note that the value of Z = 2.5";

	cout << "Recap of Values: \n\n      X = " << x << "\n      Y = " << y << "\n      Z = 2.5";

	cout << "\n\nPress any key to solve for V...\n";


	_getch();



	cout << "   Answer: \n\n";

	// 3 & 4	

	switch (x)

	{

	case 1:

		if (y > 1 && y < 5)

			cout << std::setw(10) << "V = " << x * y * z << "\n" << "\n      Where the formula used was x * y * z";

		else if (y >= 5)

			cout << std::setw(10) << "V = " << x + y / z << "\n" << "\n      Where the formula used was x + y / z";

		break;

	case 2:

		if (y <= 5)

			cout << std::setw(10) << "V = " << abs(x - y) / z << "\n" << "\n      Where the formula used was |(x - y)| / z";

		else if (y > 5)

			cout << std::setw(10) << "V = " << x - (sqrt(y + z)) << "\n" << "\n      Where the formula used was x - (the square root of (y + z))";

		break;

	default:

		cout << std::setw(10) << "V = " << x + y + z << "\n" << "\n      Where the formula used was x + y + z";

	}

	cout << "                   Press any key to end the program.\n";

	_getch();

	return 0;
}