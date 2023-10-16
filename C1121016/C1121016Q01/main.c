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
		printf("%d %d\n", first[i][0] + second[i][0],first[i][1]+second[i][1]);
	}
}