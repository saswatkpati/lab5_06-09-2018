#include<iostream>
using namespace std;

//including the function
int main()
{

//declaring the variable
unsigned int x,y;

	//asking for numbers

	 cout << " This is a C++ program to print all natural numbers in reverse order. Enter your number: ";

	//reading the input value
	 cin >> x;

	//running the loop stucture

	y = 1;
	while (x > y)
	{
		
		cout << x-y << endl;
		y++;
	}

return 0;
}

