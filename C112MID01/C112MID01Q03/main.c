#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	int n;
	scanf("%d\n", &n);
	float x1, y1, z1, x2, y2, z2;
	for (int i = 0; i < n; i++) {
		scanf("(%f,%f,%f),(%f,%f,%f)\n", &x1, &y1, &z1, &x2, &y2, &z2);
		float dot = x1 * x2 + y1 * y2 + z1 * z2;
		printf("Case %d:\n", i + 1);

		printf("  Addition: (%.2f,%.2f,%.2f)\n", x1 + x2, y1 + y2, z1 + z2);
		printf("  Subtraction: (%.2f,%.2f,%.2f)\n",  x1 - x2, y1 - y2, z1 - z2);
		printf("  Dot: %.2f\n", dot);
	}
	
}