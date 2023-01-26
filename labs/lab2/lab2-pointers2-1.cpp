/**
 * file: lab2-pointers2-1.cpp
 * author: Brendon Newton
 * course: CSI 1440
 * assignment: Lab 2
 * due date: 1/27/2023
 * 
 * date modified: 1/25/2023
 *    - file created
 * 
 * Pointers and Arrays
 */
#include <iostream>

using namespace std;

int main() {
  char myArray[] = "Hello World!";
  char *myPtr = "Hello World!";

  cout << "This is from the array: " << myArray << endl;
  cout << "This is from the pointer: " << myPtr << endl;

  cout << endl << "Let's try to change the pointer..." << endl;
  myPtr[1] = 'o';
  myPtr[2] = 'w';
  myPtr[3] = 'd';
  myPtr[4] = 'y';

  cout << "This is from the pointer: " << myPtr << endl;

  return 0;
}
