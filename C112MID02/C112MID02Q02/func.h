#pragma once
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

#include <stdio.h>

/// <summary>
/// Read and parse data from input file.
/// </summary>
/// <param name="filename">The input filename.</param>
/// <param name="data">The parse array.</param>
/// <returns>The size of the array.</returns>
int parse(const char* filename, int* data)
{
	FILE* fp;
	fopen_s(&fp,filename, "r");
	int size;
	fscanf(fp,"%d\n", &size);
	for (int i = 0; i < size; i++) {
		fscanf(fp,"%d", data + i);
	}
	return size;
}

/// <summary>
/// Use Bubble Sort to sort the array.
/// </summary>
/// <param name="data">The array.</param>
/// <param name="size">The size of the array.</param>
void sort(int* data, int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (data[j] > data[j + 1]) {
				int tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
	}
}