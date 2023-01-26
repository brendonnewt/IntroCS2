/*
- file: lab1-pointers1-5.cpp
- author: Brendon Newton
- course: CSI 1440
- assignment: Lab 1
- due date: 1/20/2023
-
-
- Date Modified: 1/19/2023
-     - File Created
-
- Pointers as Parameters
*/
#include <iostream>
#include <cmath>

using namespace std;

/**
-  changeIt
-   
-  This function changes the value of the parameter passed to it using 
-    pointers.
-  
-  Parameters:  
-    n: an address of variable declared locally in the calling function
-  
-  Output:  
-    return: none
-    parameters: n - the changed value at the address passed
-    stream: none
*/
void changeIt(int* n);

int main() {
   int x, y, z;

   x = y = z;

   cout << "x's value was " << x << " before a call to changeIt()" << endl;
   //Changes x's value to a random number using the pointer
   changeIt(&x);
   cout << "x's value is " << x << " after a call to changeIt()" << endl;

   cout << "y's value was " << y << " before a call to changeIt()" << endl;   
   //Changes y's value to a random number using the pointer
   changeIt(&y);
   cout << "y's value is " << y << " after a call to changeIt()" << endl;

   cout << "z's value was " << z << " before a call to changeIt()" << endl;
   //Changes z's value to a random number using the pointer
   changeIt(&z);
   cout << "z's value is " << z << " after a call to changeIt()" << endl;

   return 0;
}

void changeIt(int* n) {
	//Uses dereference operator to change value at n's address to a
	//random number that is less than 100
	*n = rand() % 100;
}