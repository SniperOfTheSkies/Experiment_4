#include <iostream> 
#include <conio.h> 

using namespace std;

int Density(int a, int b) 

{ 
	int r; 
	r = (a/(4*b)); 
	return r; 
}

int main() 

{ 
	int x, y{}, z;
	cout << "Volume Calculator" << endl;
	cout << "Input mass in grams: "; cin >> x; 
	cout << x << "g";
	cout << "Input density in grams/(m^3)"; cin >> y;
	cout << y << "g/(m^3)"<<endl;
	
z = Density(x, y); 

cout << "The volume is " << z; 

_getch();

return 0; 
}