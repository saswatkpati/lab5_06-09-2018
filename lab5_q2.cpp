//including the library
#include<iostream>

using namespace std;

//mention the function 
int main ()
	{

	//variable declaration
	int x, y, z;

	//asking for input numbers
	 cout << " this is a program to find maximum between three numbers.\n"  ;
	 cout << " please enter your values separating them by spaces.\n"  ;
	//reading the input value
	 cin >> x >> y >> z ;

	//applying necessary condition
        if (x >= y && x >= z)
	{
	cout << x <<" is the greatest number.\n" ;
	}
	else if (y >= z && y >= x)
	{
	cout << y <<" is the greatest number.\n" ;
	}
	else
	{
	cout << z << " is the greatest number.\n" ;
	}

return 0;
	}

