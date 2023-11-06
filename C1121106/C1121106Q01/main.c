#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d\n", &n);
	int* arr = malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf("%d", arr + i);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j+1]) {
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	for (int i = 0; i < n -1; i++) {
		printf("%d ", arr[i]);
	}
	printf("%d", arr[n - 1]);
}