#pragma once
#include <stdio.h>

// Implement the following functions.

float add(float x, float y)
{
	return x + y;
}

float subtract(float x, float y)
{
	return x - y;
}

float multiply(float x, float y)
{
	return x * y;
}

float divide(float x, float y)
{
	return x / y;
}

void print_result(float x, float y,char op,float result)
{
	printf("%.2f%c%.2f=%.2f\n", x, op, y, result);
}
