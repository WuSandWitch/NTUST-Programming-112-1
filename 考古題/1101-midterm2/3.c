#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    int key;
    fgets(input,100,stdin);
    scanf("%d",&key);
    
    for (int i = 0 ; i < strlen(input) ; i ++){
        char current = input[i];
        if (current >= 'A' && current <= 'Z'){
            int index = current - 'A';
            index = (index + key)%26;
            printf("%c",index+'A');
        }else if(current >= 'a' && current <= 'z'){
            int index = current - 'a';
            index = (index + key)%26;
            printf("%c",index+'a');
        }else{
            printf("%c",current);
        }
    }
}