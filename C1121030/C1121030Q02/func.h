#pragma once
#include <stdio.h>

// Implement the following functions.

void parse(char * vec_str , float* vec1 , float* vec2)
{
    
    sscanf(vec_str, "(%f,%f),(%f,%f)", vec1, vec1 + 1, vec2, vec2 + 1);
}

void calc_print(int case_id, float* vec1, float* vec2)
{
    printf("Case %d:\n", case_id + 1);
    printf("  Addition: (%.2f,%.2f)\n", *vec1 + *vec2, *(vec1 + 1) + *(vec2 + 1));
    printf("  Subtraction: (%.2f,%.2f)\n", *vec1 - *vec2, *(vec1 + 1) - *(vec2 +1));
    printf("  Dot: %.2f\n", *vec1 * *vec2 + *(vec1 + 1) * *(vec2 + 1));
}