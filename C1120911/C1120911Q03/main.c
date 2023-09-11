#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	int a, b;
	char operator;

	scanf("%d %c %d", &a, &operator,&b);
	printf("%d %c %d", a, operator,b);
}