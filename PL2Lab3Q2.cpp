#include<stdio.h>
//This program Sends an array to the recursive function and recursive function finds the biggest element in the array.

int findMax(int Array[], int size, int currentMax) {
    // Base case: array is empty, return current maximum
    if (size == 0) {
        return currentMax;
    } else {
        // Update current maximum if the current element is larger
        if (Array[size - 1] > currentMax) {
            currentMax = Array[size - 1];
        }
        // Recursively call the function for the rest of the array
        return findMax(Array, size - 1, currentMax);
    }
}

int main() {
    int size, i, biggest;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    int array[size];

    for (i = 0; i < size; i++) {
        printf("Enter %d. element: ", i + 1);
        scanf("%d", &array[i]);
    }

    // At the start we determine biggest as the first element in the array.
    biggest = array[0];

    // Finds the biggest element in the array.
    biggest = findMax(array, size, biggest);

    printf("The biggest element is: %d\n", biggest);

    return 0;
}

