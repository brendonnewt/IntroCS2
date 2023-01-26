/**
-  file: lab1-pointers1.cpp
-  author: Brendon Newton
-  course: CSI 1440
-  assignment: Lab 1
-  due date: 1/20/2023
-   
-  Date Modified: 1/18/2023
-     - File Created
-  
-  Testing the reference operator
*/
#include <iostream>

using namespace std;

int main() {
  int x = 5;

    //Reference of x is printed
    cout << &x << " is the address of x" << endl;
    //Value of x is printed
    cout << x << " is the value stored in x" << endl;

    return 0;
}