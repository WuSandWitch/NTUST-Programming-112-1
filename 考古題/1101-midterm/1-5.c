#include <stdio.h>

int main(){
    int n,l;
    scanf("%d%d",&l,&n);

    int arrays[l][n][n];

    for (int i = 0 ; i < l; i ++){
        for (int j = 0 ; j < n; j ++){
            for (int k = 0 ; k < n ; k ++){
                scanf("%d",&arrays[i][j][k]);
            }
        }
    }

    for (int i = 0; i < n ; i ++){
        for (int j  = 0; j < n ; j ++){
            int sum = 0 ;
            for (int cnt = 0 ; cnt < l ; cnt++){
                sum += arrays[cnt][i][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
}