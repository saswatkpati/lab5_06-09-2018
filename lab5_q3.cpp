// include the math library 
#include <iostream>
using namespace std;

//including function
int main()
	{
	int a;
	//asking for input value
	 cout << "This is a program to check whether a number is negative, positive or zero. Please enter your number: " << endl;
	//reading the input value
	 cin >> a;

	//applying condition
	if (a>0)
	{
	 cout << " Your number is positive." ;
	}
	else if (a<0)
	{
	 cout << " Your number is negative. " ;
	}
	else 
	{
	 cout << " Smaer, eh! your number is zero. " ;
	}
return 0;
}
