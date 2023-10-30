#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include "func.h"

int main()
{
    // Input cases
    int T = 2;

    // Test cases
    char* cases[] = {
        "(1.00,1.00),(1.50,1.50)", // (a,b),(c,d)
        "(2.20,2.20),(2.30,2.30)"
    };

    // Vector values
    float v1[2];
    float v2[2];

    // Loop through each case
    for (int i = 0; i < T; ++i)
    {
        // Parse vectors from string
        parse(cases[i], v1, v2);

        // Calculate the vector properties and show the result
        calc_print(i, v1, v2);
    }

    return 0;
}
