#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	float f_a, f_b;
	char opr;
	scanf("%f%c%f", &f_a,&opr,&f_b);
	float result = 0;

	if (opr == '+') {
		result = f_a + f_b;
	}
	else if (opr == '-') {
		result = f_a - f_b;
	}
	else if (opr == '*') {
		result = f_a * f_b;
	}
	else if (opr == '/') {
		result = f_a/f_b;
	}

	printf("%.2f%c%.2f=%.2f", f_a,opr,f_b,result);
	return 0;
}