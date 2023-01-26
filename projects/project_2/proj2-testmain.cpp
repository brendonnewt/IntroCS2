/**
 * file: proj2-testmain.cpp
 * author: Brendon Newton
 * course: CSI 1440 Section 3
 * assignment: Project 2
 * due date: 1/30/2023
 * 
 * date modified: 1/23/2023
 *      - file created
 *      - all tests made
 * 
 * Testbench for array functions
 */
#include "proj2-arrayFunctions.h"
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    //Creates array samples
    int oddArray[] = {83, 17, -8, 13, 11, -4, 16};
    int evenArray[] = {5, 47, 23, 1, 11, -5, 21, 6, -30, 7};

    //largestValue tests
    if (largestValue(oddArray, 7) != 83) {
        cout << "largestValue oddArray failed" << endl;
    }
    if (largestValue(evenArray, 10) != 47) {
        cout << "largestValue evenArray failed" << endl;
    }

    //smallestValue tests
    if (smallestValue(oddArray, 7) != -8) {
        cout << "smallestValue oddArray failed" << endl;
    }
    if (smallestValue(evenArray, 10) != -30) {
        cout << "smallestValue evenArray failed" << endl;
    }

    //averageValue tests
    if (abs(averageValue(oddArray, 7) - 18.2857143) > 0.000001) {
        cout << "averageValue oddArray failed" << endl;
    }
    if (abs(averageValue(evenArray, 10) - 8.6) > 0.000001) {
        cout << "averageValue evenArray failed" << endl;
    }

    //Sorts test arrays
    bubbleSort(oddArray, 7);
    bubbleSort(evenArray, 10);
    
    //Outputs sorted odd list
    cout << "Printing oddArray bubbleSort test" << endl;
    for (int i = 0; i < 7; i++) {
        cout << oddArray[i] << " ";
    }
    cout << endl;

    //Outputs sorted even list
    cout << "Printing evenArray bubbleSort test" << endl;
    for (int i = 0; i < 10; i++) {
        cout << evenArray[i] << " ";
    }
    cout << endl;

    //medianValue tests
    if (medianValue(oddArray, 7) != 13) {
        cout << "medianValue oddArray test failed" << endl;
    }
    if (medianValue(evenArray, 10) != 6) {
        cout << "medianValue evenArray test failed" << endl;
    }

    return 0;
}