/*
- file: lab1-pointers1-1.cpp
- author: Brendon Newton
- course: CSI 1440
- assignment: Lab 1
- due date: 1/20/2023
-
- Date Modified: 1/18/2023
-     - File Created
- 
- The Reference Operator
*/
#include <iostream>

using namespace std;

int main() {
    int x;
    int *intPtr;

    x = 10;
    //Pointer assigned the reference of x
    intPtr = &x;

    cout << "x’s value is " << x << endl;
    cout << "intPtr’s value is " << intPtr << endl;

    //Prints the reference of x
    cout << "x’s address is " << &x << endl;

    //Prints the size of x and the size of the pointer
    cout << "The size of x is " << sizeof(x) << endl;
    cout << "The size of intPtr is " << sizeof(intPtr) << endl;

    char ch;
    char* chPtr;

    ch = 'a';
    //Pointer assigned to the reference of ch
    chPtr = &ch;

    cout << "ch's value is " << ch << endl;
    
    //Typecasts the reference to ch and chPtr to an int* to print the value
    cout << "chPtr's value is " << (int*)chPtr << endl;
	cout << "ch's address is " << (int*)&ch << endl;

	//Prints the size of ch and the pointer
	cout << "The size of ch is " << sizeof(ch) << endl;
	cout << "The size of chPtr is " << sizeof(chPtr) << endl;

    return 0;
}
