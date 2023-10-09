#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char num[1001];
	scanf("%s", num);

	int odd_sum = 0, even_sum = 0;

	for (int i = 0; i < strlen(num); i++) {
		if (i % 2 == 0) {
			odd_sum += num[i] - '0';
		}
		else {
			even_sum += num[i] - '0';
		}
	}
	if (abs(odd_sum - even_sum) % 11) {
		printf("%s is not a multiple of 11.", num);
	}
	else {
		printf("%s is a multiple of 11.", num);
	}
}