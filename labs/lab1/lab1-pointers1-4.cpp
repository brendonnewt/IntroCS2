/*
- file: lab1-pointers1-4.cpp
- author: Brendon Newton
- course: CSI 1440
- assignment: Lab 1
- due date: 1/20/2023
-
- Date Modified: 1/19/2023
-     - File Created
-
- Pointer introduction to indirection
*/
#include <iostream>

using namespace std;

int main() {
  int x, *intPtr;
  char ch, *charPtr;

  x = 10;
  //Points intPtr to x
  intPtr = &x;

  ch = 'a';
  //Points charPtr to ch
  charPtr = &ch;  

  //Prints x and the value pointed to by intPtr
  cout << "The value of x is " << x << endl;
  cout << "The value of x using intPtr is " << *intPtr << endl;  

  //Prints ch and the value pointed to by charPtr
  cout << "The value of ch is " << ch << endl;
  cout << "The value of ch using charPtr is " << *charPtr << endl;

  //Changes the values at the addresses of the pointers
  *intPtr = 0;
  *charPtr = 'Z';

  //Prints the new values
  cout << "The value of x is " << x << endl;
  cout << "The value of ch is " << ch << endl;

  return 0;
}
