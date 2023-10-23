#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	int n;
	scanf("%d\n", &n);
	char input;
	
	for (int i = 0; i < n; i++) {
		printf("Case %d: ", i + 1);
		scanf("%c", &input);
		char current = input;
		int count = 1;
		while (1) {
			scanf("%c", &input);
			if (input == '\n') break;

			if (input == current) count++;
			else {
				printf("%c%d", current, count);
				current = input;
				count = 1;
			}
		}
		printf("%c%d\n", current, count);
	}
}