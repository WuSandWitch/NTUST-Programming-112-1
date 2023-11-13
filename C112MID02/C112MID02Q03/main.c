#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>


int f(int n) {
    if (n < 10) return n;
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return f(sum);
}

int main()
{
    int current;
    while (1) {
        scanf("%d", &current);
        if (current == 0) break;
        printf("%d\n", f(current));
    }
}