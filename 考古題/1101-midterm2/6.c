#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d\n\n",&n);

    for(int i = 0 ; i < n ; i ++){
        printf("Case #%d:\n",i+1);
        while (1){
            char origin_input[1000];
            fgets(origin_input,1000,stdin);
            char input[1000] = " ";
            strcat(input,origin_input);
            input[strlen(input) - 1] = '\0'; 
        }
    }
}