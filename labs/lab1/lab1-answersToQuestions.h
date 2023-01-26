/*
- name: Brendon Newton
- course: CSI 1440 Section 3
- assignment: Lab 1
*/

/*
1) What are differences between the original value and the incremented value?
- The original value for the int pointer changed by 4, the char pointer
- changed by 1, and the double pointer changed by 8. 
2) Was this what you expected?
- No, this is not what I expected. I was expecting each to increment by one,
- but it makes sense now why they increment the way that they do.
3) Provide an explaination of your results.
- This happened because when you increment a pointer, it is incremented by
- the amount of memory allocated for the type of the pointer.
4) Explain the difference between *, &, and just the variable’s name.
- The & operator returns the address of the variable, the * operator returns
- the value of the address contained in the pointer it's attatched to,
- and the variable name returns the value stored in the variable.
*/
