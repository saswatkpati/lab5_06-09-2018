// including the library
#include <iostream>

using namespace std;

//Defining the function
int main () {

//Declaring variables a
   int a;
   cout << " Forgot when was the last february 29th? Let me help you. I am a program which can tell you whether a year is leap year or not. " << endl ;
//asking for input
   cout << " Please enter the your four digit year: "<< endl;
//reading the input value
   cin >> a;
//suitable condition is applied
   if (a%4==0)
   {
    cout << " Yes!!! It's a leap year. "<< endl;
   }
   else
   {
    cout << " Nope. This is not a leap year. " << endl;
   }
//ending the program
   return 0;

}
