#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char sym = 'A' + i;

		for (int j = 0; j < n - i - 1; j++) printf(" ");
		for (int j = 0; j < (i + 1) * 2 - 1; j++)printf("%c", sym);

		printf("\n");
	}
}