#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	
	int n,num;
	scanf("%d\n", &n);

	for (int i = 0; i < n; i++) {
		int digit_count[10] = {0};
		scanf("%d\n", &num);
		
		for (int j = 1; j < num+1; j++) {
			int current = j;
			do {
				digit_count[current % 10] ++;
				current /= 10;
			} while (current != 0);
		}
		for (int j = 0; j < 10; j++) {
			printf("%d", digit_count[j]);
			if (j != 9)printf(" ");
		}
		printf("\n");
	}
}