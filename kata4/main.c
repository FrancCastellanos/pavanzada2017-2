#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "kata4.h"

#define printDebug(msg) do { \
	char * value = getenv("ISLAND_DEBUG");\
	if (value != NULL && !strcmp(value, "t")) printf("%s", msg);\
} while(0);

/* Add function signatures here */

int main(int argc, char **argv) {
  int **island;
	int col, row, i, j;
	char message[200];
	char * rowToken;
	char rowMessage[101];
	char delimeter[2] = ",";

	printf("Row size: ");
	scanf("%d", &row);
	printf("Column size: ");
	scanf("%d", &col);
	
	sprintf(message, "col = %d, row = %d\n", col, row);
	printDebug(message);

	island = (int **) malloc(sizeof(int *) * row);
	for (i = 0; i < row; i++) {
		island[i] = (int *) malloc(sizeof(int *) * col);
		j = 0;
		printf("island %d:\n", i);
		scanf("%s", rowMessage);
		rowToken = strtok(rowMessage, delimeter);
		while(rowToken != NULL) {
			if (j >= col) {
				printf("Invalid row!\n");
				return 0;
			}
			island[i][j++] = atoi(rowToken);
			rowToken = strtok(NULL, delimeter);
		}
	}
	sprintf(message, "\n");
	printDebug(message);
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			sprintf(message, "%d ", island[i][j]);
			printDebug(message);
		}
		sprintf(message, "\n");
		printDebug(message);
	}

	sprintf(message, "\n");
	printDebug(message);

	int perimeter = kata4(island, row, col);
	printf("Perimeter = %d\n", perimeter);

	// Free-ing memory.
	for (i = 0; i < row; i++) {
		free(island[i]);
	}
	free(island);

	return 0;
}
