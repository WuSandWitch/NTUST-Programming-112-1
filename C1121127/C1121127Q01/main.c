#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int key;
	fgets(string, 100, stdin);
	scanf("%d", &key);

	while (key < 0) key += 26;

	for (int i = 0; i < strlen(string); i++) {
		char c = string[i];
		if (string[i] <= 'Z' && string[i] >= 'A') {
			c = (string[i] - 'A' + key) % 26 + 'A';
		}
		else if (string[i] <= 'z' && string[i] >= 'a') {
			c = (string[i] - 'a' + key) % 26 + 'a';
		}
		printf("%c", c);
	}

	
}