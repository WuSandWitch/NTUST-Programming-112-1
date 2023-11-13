#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char input[100];
    char origin[50];
    char replace[50];

    fgets(input,50,stdin);
    fgets(origin,50,stdin);
    fgets(replace,50,stdin);

    origin[strlen(origin) - 1] = '\0';
    replace[strlen(replace) - 1] = '\0';

    for (int i = 0 ; i < strlen(input); i ++){
        if (input[i] == origin[0]){
            bool check = true; 
            for (int j = 0 ; j < strlen(origin); j ++){
                if (input[i+j] != origin[j]){
                    check = false;
                    break;
                }
            }
            if (check){
                printf("%s",replace);
                i += strlen(origin) - 1;
            }else{
                printf("%c",input[i]);
            }
        }else{
            printf("%c",input[i]);
        }
    }
}