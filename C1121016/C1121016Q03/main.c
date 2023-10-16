#include <stdio.h>


int main()
{
	FILE* input;
	fopen_s(&input,"input.txt", "r");
	int a, b;
	fscanf_s(input, "%d\n%d", &a, &b);
	
	FILE* output;
	fopen_s(&output,"output.txt", "w+");
	fprintf(output, "%d", a + b);
}