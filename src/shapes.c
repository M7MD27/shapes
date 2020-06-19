#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void drawUpTriangle(int size) {
	for (int i = size; i > -1; i--) {
		for (int j = 0; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
}

void drawDownTriangle(int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
void drawRectangle(int height, int width) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			printf("* ");
		}
		printf("\n");
	}
}

int main() {
	drawUpTriangle(6);
	printf("\n");
	drawUpTriangle(4);
	printf("\n");
	drawDownTriangle(4);
	printf("\n");
	drawRectangle(5, 5);
	printf("\n");
	drawRectangle(10, 5);
	printf("\n");
	return 0;
}
