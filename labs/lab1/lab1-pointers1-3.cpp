/*
- file: lab1-pointers1-3.cpp
- author: Brendon Newton
- course: CSI 1440
- assignment: Lab 1
- due date: 1/20/2023
-
- Date Modified: 1/19/2023
-     - File Created
-
- Pointer Arithmetic
*/
#include <iostream>

using namespace std;

int main() {

	//Declares int x and initializes intPtr to reference x
	int x, *intPtr = &x;
    //Declares char ch and initializes chPtr to reference ch
    char ch, *chPtr = &ch;
    //Declares double dbl and initializes dblPtr to reference dbl
    double dbl, *dblPtr = &dbl;

    //Prints the values of each pointer
    cout << intPtr << " is the initial value of intPtr" << endl;
    cout << (int*)chPtr << " is the initial value of chPtr" << endl;
    cout << dblPtr << " is the initial value of dblPtr" << endl;

    //Increments the values of each pointer
    intPtr++;
    chPtr++;
    dblPtr++;

    //Prints the new values of each pointer
    cout << intPtr << " is the new value of intPtr" << endl;
    cout << (int*)chPtr << " is the new value of chPtr" << endl;
    cout << dblPtr << " is the new value of dblPtr" << endl;

    return 0;
}