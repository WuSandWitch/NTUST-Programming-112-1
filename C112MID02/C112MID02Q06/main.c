#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int _ = 0; _ < n; _++) {
        int m, n, q;
        scanf("%d %d %d\n", &m, &n, &q);
        printf("%d %d %d\n", m, n, q);
        char* array = malloc(m * n * sizeof(char));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%c", &array[i * n +j]);
            }
            scanf("\n");
        }
        int x, y;
        for (int t = 0; t < q; t++) {
            scanf("%d %d", &y, &x);
            
            char mark = array[y* n + x];
            int cnt = 0;

            while (1) {
                // top left array[(y-cnt) * n + (x - cnt)]
                bool check = true;
                if (x + cnt >= n || x - cnt < 0 || y + cnt >= m || y - cnt < 0) {
                    check = false;
                    break;
                }
                for (int i = 0; i < 2 * cnt + 1; i ++) {
                    
                    for (int j = 0; j < 2 * cnt + 1; j++) {
                        if (array[(y - cnt + i) * n + (x - cnt + j)] != mark) {
                            check = false;
                            break;
                        }
                        
                    }
                    if (!check) break;
                }
                if (check) cnt++;
                else break;
            }
            printf("%d\n", 2*(cnt-1)+1);
        }
    }
}