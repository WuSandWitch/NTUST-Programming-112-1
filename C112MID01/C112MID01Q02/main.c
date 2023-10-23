#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	while (1) {
		if (n % 2 == 0) {
			n /= 2;
		}
		else {
			break;
		}
	}
	if (n == 1) {
		printf("true");
	}
	else {
		printf("false");
	}

	
}