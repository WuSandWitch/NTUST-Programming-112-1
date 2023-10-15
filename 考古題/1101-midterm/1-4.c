#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int first[n][n];
    int second[n][n];

    for (int i = 0; i < n ; i ++){
        for (int j  = 0; j < n ; j ++){
           scanf("%d",&first[i][j]); 
        }
    }
    for (int i = 0; i < n ; i ++){
        for (int j  = 0; j < n ; j ++){
           scanf("%d",&second[i][j]); 
        }
    }

    for (int i = 0; i < n ; i ++){
        for (int j  = 0; j < n ; j ++){
            int sum = 0;
            for (int k = 0; k < n ; k ++){
                sum += first[i][k] * second[k][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
}