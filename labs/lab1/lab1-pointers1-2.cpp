/*
- file: lab1-pointers1-2.cpp
- author: Brendon Newton
- course: CSI 1440
- assignment: Lab 1
- due date: 1/20/2023
-
- Date Modified: 1/19/2023
-     - File Created
-
- Pointer as a variable
*/
#include <iostream>

using namespace std;

int main() {

	double dbl, dbl2;
	double* dblPtr;

	dbl = 2.5;
	//Points pointer to dbl
	dblPtr = &dbl;

	//Prints values of dbl and dblPtr
	cout << "The value of dbl is " << dbl << endl;
	cout << "The value of dblPtr is " << dblPtr << endl;

	//Prints addresses of dbl and dblPtr
	cout << "The address of dbl is " << &dbl << endl;
	cout << "The address of dblPtr is " << &dblPtr << endl;

	//Prints the size of dbl and dblPtr
	cout << "The size of dbl is " << sizeof(dbl) << endl;
	cout << "The size of dblPtr is " << sizeof(dblPtr) << endl;

	//Reassigns pointer to dbl2
	dblPtr = &dbl2;

	//Prints dbl and dblPtr values
	cout << "The value of dbl2 is " << dbl2 << endl;
	cout << "The value of dblPtr is " << dblPtr << endl;

	//Prints dbl and dblPtr addresses
	cout << "The address of dbl2 is " << &dbl2 << endl;
	cout << "The address of dblPtr is " << &dblPtr << endl;

	return 0;
}
