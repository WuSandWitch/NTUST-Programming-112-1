#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	float x1, y1, x2, y2;
	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);

	printf("%.2f %.2f\n", x1 + x2, y1 + y2);
	printf("%.2f %.2f\n", x1 - x2, y1 - y2);
	printf("%.2f", x1 * x2 + y1 * y2);
}