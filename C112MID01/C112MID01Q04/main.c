#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>




int f(int n) {
	if (n <= 1) {
		return n;
	}
	return f(n - 1) + f(n - 2);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
}