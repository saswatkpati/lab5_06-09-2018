//include library
#include<iostream>
//using the stringstream
#include<cstring>               

using namespace std;

//including required functions
     int main()
     {

//declaring all variables
     int a, b;

//asking for input data
     cout << " this is a program to find maximum between two numbers." << endl;
     cout << " Enter both numbers separated by a space:" << endl;
     cin >> a >> b;

//using suitable condition
     if (a > b)
      {
     cout << a << " is maximum between " << a <<" and " << b << endl;
      }
     else
     {
      cout<< b << " is maximum between " << a <<" and " << b << endl;
     }

return 0;
      }
