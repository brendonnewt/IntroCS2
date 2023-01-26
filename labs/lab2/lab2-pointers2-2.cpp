/**
 * file: lab2-pointers2-2.cpp
 * author: Brendon Newton
 * course: CSI 1440
 * assignment: Lab 2
 * due date: 1/27/2023
 * 
 * date modified: 1/23/2023
 *      - file created
 * 
 * Dynamic Memory
 */

#include <iostream>
#include <cstring>

using namespace std;

char* giveMemory( ) {
  char *myArray = new char[13];
  strcpy( myArray, "Hello World!");
  return myArray;
}

int main() {
  char *myPtr;

  myPtr = giveMemory();

  cout << myPtr << endl;

  myPtr[1] = 'o';
  myPtr[2] = 'w';
  myPtr[3] = 'd';
  myPtr[4] = 'y';

  cout << endl << myPtr << endl;

  delete [] myPtr;

  return 0;
}