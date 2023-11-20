#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int m, n;
	
	int cnt = 1;
	while (1) {
		scanf("%d %d\n", &m, &n);
		if (m == 0 && n == 0) {
			return;
		}
		int* map = malloc(m * n * sizeof(int));
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				map[i * n + j] = 0;
			}
		}
		char current;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				scanf("%c", &current);
				if (current == '*') {
					map[i * n + j] = -1;

					if (i != 0) {
						map[(i - 1) * n + j] += (map[(i - 1) * n + j] != -1) ? 1 : 0;
					}
					if (i != m - 1) {
						map[(i + 1) * n + j] += (map[(i + 1) * n + j] != -1) ? 1 : 0;
					}
					if (j != 0) {
						map[i * n + j - 1] += (map[i * n + j - 1] != -1) ? 1 : 0;
					}
					if (j != n - 1) {
						map[i * n + j + 1] += (map[i * n + j + 1] != -1) ? 1 : 0;
					}
					if (i != 0 && j != 0) {
						map[(i - 1) * n + j - 1] += (map[(i - 1) * n + j - 1] != -1) ? 1 : 0;
					}
					if (i != 0 && j != n - 1) {
						map[(i - 1) * n + j + 1] += (map[(i - 1) * n + j + 1] != -1) ? 1 : 0;
					}
					if (i != m - 1 && j != n - 1) {
						map[(i + 1) * n + j + 1] += (map[(i + 1) * n + j + 1] != -1) ? 1 : 0;
					}
					if (i != m - 1 && j != 0) {
						map[(i + 1) * n + j - 1] += (map[(i + 1) * n + j - 1] != -1) ? 1 : 0;
					}
				}
			}
			if (i != m -1) scanf("\n");
		}
		printf("Field #%d:\n", cnt);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (map[i * n + j] == -1) {
					printf("*");
				}
				else {
					printf("%d", map[i * n + j]);
				}
			}
			printf("\n");
		}
		printf("\n");
		cnt++;
	}
}