#include <iostream>
using namespace std;

 //mention the function
 int main ()
 {
	//declare the variables
	int a;

	//ask for input
	cout << " This is a program to print all even numbers between 1 to 100." << endl;
	//run the loop structure

	while (a<=100)
	{
		if ( a%2 == 0)
	{
	cout << a << endl;
	}
	a++;
	}

return 0;
}
