/**
 * file: proj2-arrayFunctions.cpp
 * author: Brendon Newton
 * course: CSI 1440 Section 3
 * assignment: Project 2
 * due date: 1/30/2023
 * 
 * date modified: 1/23/2023
 *      - file created
 *      - definitions made
 * 
 * Array function definitions
 */

void bubbleSort(int *array, int size) {
    int temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int largestValue(int *array, int size) {
    int largestVal;
    largestVal = array[0];

    for (int i = 0; i < size; i++) {
        if (largestVal < array[i]) {
            largestVal = array[i];
        }
    }

    return largestVal;
}

int smallestValue(int *array, int size) {
    int smallestVal;
    smallestVal = array[0];

    for (int i = 0; i < size; i++) {
        if (smallestVal > array[i]) {
            smallestVal = array[i];
        }
    }
    
    return smallestVal;
}

double averageValue(int *array, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum = sum + array[i];
    }
    
    double average = (double)sum / (double)size;
    return average;
}

int medianValue(int *array, int size) {
    int median;

    if (size % 2 == 1) {
        size = size + 1;
        median = size / 2;
    } else {
        median = size / 2;
    }

    //Converts median to index
    median--;

    int value = array[median];
    return value;
}
