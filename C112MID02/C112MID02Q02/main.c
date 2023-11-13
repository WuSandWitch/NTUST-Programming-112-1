// IMPORTANT: DO NOT MODIFY THIS FILE.

#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

// Implements structures and functions in this header file
#include "func.h"

// Max size of the array
#define MAX_SIZE 100

int main()
{
    // Array of storing input data
    int data[MAX_SIZE] = { 0 };
    
    // Read file and parse data
    int size = parse("input.txt", data);

    // Perform Bubble Sort
    sort(data, size);

    // Print result
    for (int i = 0; i < size; ++i)
    {
        printf("%d", data[i]);

        if (i < size - 1)
        {
            printf(" ");
        }
    }
}