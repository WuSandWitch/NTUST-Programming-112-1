#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	int n;
	scanf("%d\n", &n);


	for (int i = 0; i < n; i++) {
		char current;
		int sum = 0;
		int current_sum = 0;
		while (1) {
			scanf("%c", &current);
			if (current == '\n') break;

			if (current == 'O') {
				current_sum += 1;
				sum += current_sum;
			}
			else {
				current_sum = 0;
			}
		}
		printf("%d\n", sum);
	}
}