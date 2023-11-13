#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdbool.h>

int generate(int n) {
    int index = 1;
    int repeated[111] = { n };

    int current = n;
    while (1) {
        current *= current;
        current /= 100;
        current %= 10000;
        bool exist = false;
        for (int i = 0; i < index; i++) {
            if (repeated[i] == current) {
                exist = true;
                break;
            }
        }
        if (exist) break;
        repeated[index++] = current;

    }
    return index;
}


int main()
{
    int input;
    while (1) {
        scanf("%d", &input);
        if (input == 0) break;
        printf("%d\n", generate(input));
    }
}