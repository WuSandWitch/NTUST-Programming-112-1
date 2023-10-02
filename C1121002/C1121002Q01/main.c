#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	int cnt = 1;
	char current;

	while (1) {
		scanf("%c", &current);
		if (current == '\0' || current == '\n' || current == EOF) {
			break;
		}
		if (current == ' ') {
			cnt += 1;
			printf("\n");
			continue;
		}
		printf("%c", current);
	}
	printf("\n%d", cnt);
}