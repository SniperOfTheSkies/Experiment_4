#include<iostream>
#include<conio.h>

using namespace std;

int PackageA(int a)
{
	int r;
	r = ((a - 10)*20)+995;
	return r;
}

int PackageB(int a)
{
	int r;
	r = ((a - 20) * 10)+1495;
	return r;
}

int main()
{
	int x{}, z;
	
	while (x >= 0 )
	{
		char ans;
		cout << "Package A: Php 995/mo, 10hrs of access are provided. Additional hours are Php 20/hr" << endl;
		cout << "Package B: Php 1495/mo, 20hrs of access are provided. Additional hours are Php 10/hr" << endl;
		cout << "Package A: Php 1995/mo, Unlimited access is provided" << endl;
		cout << "" << endl;
		cout << "What is your Package type: A, B, or C?: "; cin >> ans;
		switch (ans)
		{
		case 'A':
		case 'a':
			cout << "What are your total number of hours used? "; cin >> x;
			z = PackageA(x);
			if (0<x<10)
			{
				cout << "Your total amount due is Php 995."<<endl;
			}else
			
			cout << "Your total amount due is Php " << z<<".";
			break;
		case 'B':
		case 'b':
			z = PackageB(x);
			cout << "What are your total number of hours used? "; cin >> x;
			if ( x < 20)
			{
				cout << "Your total amount due is Php 1495."<<endl;
			}else
				
			cout << "Your total amount due is Php " << z<<".";
			break;
		case 'C':
		case 'c':
			cout << "Your total amount due is Php 1995." << endl;

		default:
			cout << "You must choose between A, B, and C!" << endl;
		}cout << ""<<endl;
	}
	_getch();
	return 0;
}







