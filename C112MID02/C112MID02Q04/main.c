#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdbool.h>

int f(int n) {
    if (n < 10) return n;
    return n % 10 + f(n / 10);
}

int main()
{
    int n;
    int input;
    scanf("%d", &n);
    for (int i = 0 ; i < n ; i ++){
        scanf("%d", &input);
        bool exist = false;
        for (int j = 0; j < input; j++) {
            int current = j + 1;
            if (current + f(current) == input) {
                printf("%d\n", current);
                exist = true;
                break;
            }
        }
        if (!exist) {
            printf("0\n");
        }
    }
}