#include <stdio.h>
#include <stdbool.h>
int main(){

    int all[10],repeated[10];
    int repeated_length = 0;
    for (int i = 0; i < 10;i ++){
        scanf("%d",&all[i]);
        for (int j = 0 ; j < i ; j ++){
            if (all[i] != all[j]) continue;
            bool already_repeated = false;
            for (int k = 0; k < repeated_length; k++){
                if (all[i] == repeated[k]){
                    already_repeated = true;
                    break;
                }
            }
            if (!already_repeated) repeated[repeated_length++] = all[i];
        }
    }
    int sum = 0;
    for (int i = 0 ; i < repeated_length; i ++){
        sum += repeated[i];
    }
    printf("%d\n",sum);
}