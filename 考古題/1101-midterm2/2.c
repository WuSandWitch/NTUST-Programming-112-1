#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float x;
    float y;
}point;


int main(){
    int n;
    scanf("%d",&n);

    point* points = malloc(n * sizeof(point));
    for (int i = 0 ; i < n ; i ++){
        scanf("%f %f",&points[i].x,&points[i].y);
    }
    for (int i = 0 ; i < n ; i ++){
        for (int j = 0 ; j < n - i - 1; j ++){
            if (points[j].x > points[j+1].x){
                point tmp = points[j];
                points[j] = points[j+1];
                points[j+1] = tmp;
            }else if((points[j].x == points[j+1].x) && (points[j].y > points[j+1].y)){
                point tmp = points[j];
                points[j] = points[j+1];
                points[j+1] = tmp;
            }
        }
    }

    for (int i = 0 ; i < n ; i ++){
        printf("%.2f %.2f\n",points[i].x,points[i].y);
    }
}