/*
 * Project: Find Maximum Number
 * Description: A C program that takes 5 integers from the user
 * and finds the maximum value using a function.
 * Author: [Nurhat Akif Uðuzlu]
 * Date: November 29, 2025
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Finds the maximum value in an integer array.
 * * @param numbers: The integer array to search
 * @param size: The number of elements in the array
 * @return: The maximum integer found in the array
 */
int find_max(int numbers[], int size) {
    int max_val;
    int i;

    // Initialize max_val with the first element
    max_val = numbers[0];

    // Iterate through the array starting from the second element
    for (i = 1; i < size; i++) {
        if (numbers[i] > max_val) {
            max_val = numbers[i];
        }
    }

    return max_val;
}

int main() {
    // Define an array of size 5
    int myNumbers[5];
    int s;

    // Get input from the user
    for (s = 0; s < 5; s++) {
        printf("Enter the %d. number: ", s + 1);
        scanf("%d", &myNumbers[s]);
    }

    int result;

    // Call the function with the array and its size
    result = find_max(myNumbers, 5);

    // Display the result
    printf("The maximum number: %d\n", result);

    return 0;
}
