#include <stdio.h>

void printArray(int array[], int size, int index) {
    static int largestNum;   // keeps value across calls

    if (index == size) {     // base case
        printf("\nLargest number: %d", largestNum);
        return;
    }

    if (index == 0) {        // initialize once
        largestNum = array[0];
    }

    if (array[index] > largestNum) {
        largestNum = array[index];
    }

    printf("%d ", array[index]);  // still printing like before
    printArray(array, size, index + 1);
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int size = 5;

    printArray(array, size, 0);

    return 0;
}
