#include <stdio.h>

int main()
{
	int first[2][2], second[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			scanf_s("%d", &first[i][j]);
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			scanf_s("%d", &second[i][j]);
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			int sum = 0;
			for (int k = 0; k < 2; k++) {
				sum += first[i][k] * second[k][j];
			}
			printf("%d", sum);
			if (j != 1) printf(" ");
		}
		printf("\n");
	}
}