// including the library
#include <iostream>

using namespace std;

//Defining the function
int main () {

   //Declaring variables a
   int a;
       cout << " This is a program to check if a number is odd or even." << endl ;
   //asking for input
       cout << " Please enter your number:"<< endl;
   //reading the input value
       cin >> a;
   //applying a condition
   if (a%2== 0)
   {
       cout << " The given number is even." << endl;
   }
   else
   {
       cout << " The given number is odd." << endl;
   }
   //ending the program
   return 0;

}
