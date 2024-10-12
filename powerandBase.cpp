/*
Power & Base

@ AJ Enrique Arguello

10/2/2024

Objectives: Use Recursion to calculate x^y where x is the base of a # and y is the power of a number.
*/

#include <iostream>

using namespace std;

int calculation(int x, int y); 

int main() {
  int x, y;

  cout << "Enter your base: ";
  cin >> x;

  cout << "\nEnter your power: ";
  cin >> y;

  cout << x << "^" << y << " = " << calculation(x, y) << endl; // prints results from calculation result 

  return 0;
}

int calculation(int x, int y) {
  if (y == 0) { // if y = 0, return 1; 
    return 1;
  } else { 
    return x * calculation(x, y - 1); // return calculation while lowering y value by one
  }
}