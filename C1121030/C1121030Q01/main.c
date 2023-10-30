// Do not modify this file, everything will be replaced during the judge process.
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

// The function implementations are in this header.
#include "func.h"

int main()
{
    // You may modify these variables for testing.
    float x = 6.00f;
    float y = 9.00f;
    char op = '+';

    float result;
    switch (op)
    {
    case '+':
        result = add(x, y);
        break;
    case '-':
        result = subtract(x, y);
        break;
    case '*':
        result = multiply(x, y);
        break;
    case '/':
        result = divide(x, y);
        break;
    default:
        break;
    }
    // Show the result
    print_result(x, y, op, result);


    return 0;
}