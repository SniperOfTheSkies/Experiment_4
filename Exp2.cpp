#include <iostream>
#include <conio.h>

using namespace std;

int main()

{

	double gal, unpaid, wbill, wbilllate;
	const int demandcharge = 35, late = 20;
	cout << "                   Press any key to start the program... \n";

	_getch();


	cout << "To compute for your water bill, kindly answer the following questions: ";
	_getch();

	cout << "How many gallons of water did you consume? \n\n          ";

	cin >> gal;

	cout << "Do you have any unpaid balance? If so, kindly input here: \n(If none, kindly enter '0') \n\n          P ";
	cin >> unpaid;



	wbill = (gal * 1.10) + demandcharge;



	if (unpaid > 0)

	{
		wbilllate = wbill + late;
		cout << "Looks like you have more to pay! \nYour water bill for this month is P " << wbilllate;
	}

	else if (unpaid = 0)
	{
		cout << "Your water bill for this month is P " << wbill;
	}

	_getch();
	cout << "\nKindly settle your account immediately!";
	cout << "                   Press any key to end the program.\n";

	_getch();
	return 0;
}