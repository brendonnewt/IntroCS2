/**
 * file: proj2-main.cpp
 * author: Brendon Newton
 * course: CSI 1440 Section 3
 * assignment: Project 2
 * due date: 1/30/2023
 * 
 * date modified: 1/23/2023
 *      - file created
 *      - main complete
 * 
 * 1D Dynamic Arrays
 */
#include "proj2-arrayFunctions.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inFS;
    inFS.open("arrays.txt");
    if (!inFS.is_open()) {
        cout << "Error: file not open" << endl;
    }
    int size, currNum;

    while (inFS >> size) {
        int *array = new int[size];
        for (int i = 0; i < size; i++) {
            inFS >> currNum;
            array[i] = currNum;
        }
        cout << "largest val: " << largestValue(array, size) << endl;
        cout << "smallest val: " << smallestValue(array, size) << endl;
        cout << "average val: " << averageValue(array, size) << endl;
        bubbleSort(array, size);
        cout << "median val: " << medianValue(array, size) << endl << endl;
        delete[] array;
    }
    inFS.close();

    return 0;
}