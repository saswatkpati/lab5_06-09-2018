#include <iostream>
using namespace std;

 //mention the function
 int main ()
 {
	//declare the variables
	int num, sum ;

	//ask for input
	cout << " This is a program to find the sum of natural numbers from 1 to n. Please enter your positive integer n: " << endl;
	 cin >> num;
	//run the loop structure

	for (int i = 1; i <= num; ++i) {
        	sum += i;
	}

	cout << " The Sum is = " << sum << endl ;
return 0;
}
