#include <stdlib.h>
#include <stdio.h>
#include "kata4.h"

int kata4(int ** island, int rowSize, int colSize) {
	int perimeter = 0, i, j, tempPerimeter;
	for (i = 0; i < rowSize; i++) {
		for (j = 0; j < colSize; j++) {
			tempPerimeter = 4;
			if (island[i][j] == 0) {
				tempPerimeter = 0;
			}
			else {
				if (i != 0) {
					tempPerimeter -= island[i - 1][j];
				}
				if (i != rowSize - 1) {
					tempPerimeter -= island[i + 1][j];
				}
				if (j != 0) {
					tempPerimeter -= island[i][j - 1];
				}
				if (j != colSize - 1) {
					tempPerimeter -= island[i][j + 1];
				}
			}
			perimeter += tempPerimeter;
		}
	}

	return perimeter;
}