#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	float a, b;
	scanf("%f",&a);
	scanf("%f",&b);

	printf("%.2f + %.2f = %.2f\n", a, b, a + b);
	printf("%.2f - %.2f = %.2f\n", a, b, a - b);
	printf("%.2f * %.2f = %.2f\n", a, b, a * b);
	printf("%.2f / %.2f = %.2f\n", a, b, a / b);
}