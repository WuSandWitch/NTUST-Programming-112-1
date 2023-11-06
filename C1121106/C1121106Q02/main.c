#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d\n", &n);
	int* arr = malloc(n * sizeof(int));
	int* repeated = malloc(n * sizeof(int));
	int repeated_index = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", arr + i);
	
		int cnt = 0;
		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) cnt++;
		}
		if (cnt == 1) {
			repeated[repeated_index] = arr[i];
			repeated_index++;
		}
	}
	if (repeated_index == 0) {
		printf("No repeated numbers!");
		return;
	}
	for (int i = 0; i < repeated_index; i++) {
		for (int j = 0; j < repeated_index - i - 1; j++) {
			if (repeated[j] > repeated[j + 1]) {
				int tmp = repeated[j];
				repeated[j] = repeated[j + 1];
				repeated[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < repeated_index - 1; i++) {
		printf("%d ", repeated[i]);
	}
	printf("%d", repeated[repeated_index - 1]);


}