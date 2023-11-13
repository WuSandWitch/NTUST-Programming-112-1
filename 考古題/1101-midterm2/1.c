#include <stdio.h>

int main(){

    char current_input;
    int height;
    while (1){
        scanf("%c",&current_input);
        if (current_input == '\n') {
            printf("1");
            break;
        }

        height = current_input - '0';

        for (int i = 0 ; i < height ; i ++){
            for (int j = 0 ; j < i+1 ; j ++) printf("%d", i + 1);
            printf("\n");
        }
        for (int i = height - 2 ; i > 0 ; i--){
            for (int j = 0 ; j < i+1 ; j ++) printf("%d", i + 1);
            printf("\n");
        }
    }
}