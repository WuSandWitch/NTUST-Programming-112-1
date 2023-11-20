#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdbool.h>

void move(int* x, int *y, int destination) {
	if (destination == 0) {
		*y -= 1;
	}
	else if (destination == 1) {
		*x += 1;
	}
	else if (destination == 2) {
		*y += 1;
	}
	else if (destination == 3) {
		*x -= 1;
	}
}

char next(char maze[15][15], int x, int y, int destination) {
	if (destination == 0) {
		return maze[y - 1][x];
	}
	else if (destination == 1) {
		return maze[y][x + 1];
	}
	else if (destination == 2) {
		return maze[y + 1][x];
	}
	else if(destination == 3) {
		return maze[y][x - 1];
	}
}


int main()
{
	char maze[15][15];
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			scanf("%c", &maze[i][j]);
		}
		if(i != 14) scanf("\n");
	}
	bool has_exit = false;
	int entry_y, entry_x;
	int exit_y, exit_x;
	for (int i = 0; i < 15; i++) {
		if (maze[i][14] == 'X') {
			has_exit = true;
			exit_x = 14;
			exit_y = i;
		}
		if (maze[i][0] == 'X') {
			entry_x = 0;
			entry_y = i;
		}
	}
	if (!has_exit) {
		printf("This maze has no solution");
		return;
	}

	int y = entry_y, x = entry_x;
	int destination = 1; // 0:up, 1:right, 2:down, 3:left
	while (!(x == exit_x && y == exit_y)) {
		//printf("(%d,%d)\n", x, y);
		if (next(maze, x, y, (destination + 1) % 4) == 'X') {
			destination = (destination + 1) % 4;
			move(&x, &y, destination);
		}
		else if (next(maze, x, y, destination) == 'X') {
			move(&x, &y, destination);
		}
		else if (next(maze, x, y, (destination + 3) % 4) == 'X') {
			destination = (destination + 3) % 4;
			move(&x, &y, destination);
		}
		else if (next(maze, x, y, (destination + 2) % 4) == 'X') {
			destination = (destination + 2) % 4;
			move(&x, &y, destination);
		}

		if (x == entry_x && y == entry_y) {
			printf("This maze has no solution");
			return;
		}
	}
	printf("This maze has a solution");
}