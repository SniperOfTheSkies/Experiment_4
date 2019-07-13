#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int size, arr[100], x, y, temp;

	// Enter array size and elements	
	cout << "Selection Sorting..." << endl;
	cout << "Enter the array size: " << endl;
	cin >> size;
	cout << "Enter the "; cout << size; cout << " elements"<<endl;

	
	for (x = 0; x < size; x++)
	{
		cin >> arr[x];
	}

	// Displays elements
	cout << "Your data"<<endl;
	for (x = 0; x < size; x++)
	{
		cout << arr[x]<<" ";
	}
	cout <<""<<endl;

	// Program for sorting
	for (x = 0; x < size; x++)
	{
		for (y = x + 1; y < size; y++)
		{
			if (arr[x]> arr[y])
			{
				temp = arr[x];
				arr[x] = arr[y];
				arr[y] = temp;
			}
		}
	}

	// Displays elements after sorting
	cout << "After using selection sort... \n";
	for (x = 0; x < size; x++)
	{
		cout << arr[x] << " ";
	}
	_getch();
	return 0;
}