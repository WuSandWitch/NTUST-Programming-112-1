#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <math.h>

int main()
{
	float a, b;
	scanf("%f %f", &a, &b);
	float length = sqrt(pow(a, 2) + pow(b, 2));

	printf("%.2f\n", length);
	printf("%.2f %.2f", a / length, b / length);
}
