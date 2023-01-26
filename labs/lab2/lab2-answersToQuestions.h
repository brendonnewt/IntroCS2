/**
 * name: Brendon Newton
 * course: CSI 1440 Section 3
 * assignment: Lab 2
 */

/*
1) What would be printed if we just incremented the pointer (myPtr++)?

Since it is a char* it would only increment the pointer by one byte,
which would result in "ello World" being printed. So, the program would
become British. 

2) How does “myArray += 6” differ from what we talked about in
   class - “*(myArray + 6)” - which we said was OK?

Directly incrementing it by six is attempting to change the address of the
pointer to the array, which you can't do because it is constant. The second
one is dereferenceing the 6th element after the pointer to the array,
which is OK because it isn't attempting to change the adress of the
array pointer itself.

3) Replace the array notation statements with pointer notation statements
   for the assignment of ‘o’, ‘w’, ‘d’, and ‘y’.

*(myArray + 1) = 'o';
*(myArray + 2) = 'w';
*(myArray + 3) = 'd';
*(myArray + 4) = 'y';

4) Could this code be fixed by using pointer notation instead of array
   notation? Why/Why not?

No, pointer notation would not fix this problem. This is because it isn't
an issue of trying to change the wrong thing (like an address instead
of a value), but rather an issue of how we're trying to change it. The
pointer isn't holding any of these values individually, but the address
to the string literal itself, meaning you can't change specific parts
of the pointers value.

5) Why did we not give the memory back to the computer, using the delete
   operator, within the function?

Because it would deleted the data that was stored for the array in the
heap, meaning the pointer would have no value to be pointed to.

6) Why do we not need to use the indirection operator when printing the 
   contents of myArray and myPtr? Could we print the contents of a differently 
   typed (int, double, etc..) array?

We don't need the indirection operator when printing them because of the
way c++ treats char pointers. When c++ sees a char reference it assumes that
it must be a string, so it prints the array. This would not work with any
other primitive type.

7) Write two additional lines of code to print out the contents of str
   as a c-string representation using c_str() with both the indirection 
   operator and the structure pointer operator.

//Using indirection operator
cout << (*str).c_str() << endl;
//Using pointer operator
cout << str->c_str() << endl;
*/