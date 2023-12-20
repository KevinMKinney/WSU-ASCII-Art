#include <stdio.h>
#include <stdlib.h>
#include "func.h"

// helper function prints scaled art to screen 
void scaledPrint(char art[5][6], int scale) {
	for (int i = 0; i < 5; i++) {
		for (int m = 0; m < scale; m++) {
			for (int j = 0; j < 6; j++) {
				for (int n = 0; n < scale; n++) {
					printf("%c", art[i][j]);
				}
			}
			printf("\n");
		}
	}
}