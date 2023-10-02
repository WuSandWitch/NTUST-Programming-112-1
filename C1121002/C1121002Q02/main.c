#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	char current;
	int cnt;


	for (int i = 0; i < n; i++) {
		printf("Case %d: ", i + 1);
		
		while(1) {
			current = getchar();
			if (current == '\n') break;
			scanf("%d",&cnt);
			
			for (int j = 0; j < cnt; j++) {
				printf("%c", current);
			}
		}
		printf("\n");
	}
}
