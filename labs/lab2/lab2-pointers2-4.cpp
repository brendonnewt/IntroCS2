/**
 * file: lab2-pointers2-4.cpp
 * author: Brendon Newton
 * course: CSI 1440
 * assignment: Lab 2
 * due date: 1/27/2023
 * 
 * date modified: 1/23/2023
 *      - file created
 * 
 * Creating and Accessing Dynamic Objects
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
  string *str = new string("Hello World!");

  // using the indirection operator to access the public interface of string
  cout << (*str).c_str() << endl;

  // using the structure pointer operator to access the public interface of string
  cout << str->c_str() << endl;

  delete str;

  return 0;
}