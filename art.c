#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"

/*
	Kevin Kinney's project for CS-261:
	program that scales a predetermined 5x5 ascii 
	charaters based on user input. If the input is 
	invalid (below 1), another prompt will appear.
	The included Makefile will build the program
	and provides
*/

int main() {
	// init vars
	int input = -1;
	char art[5][6];

	// ascii art to print
	strcpy(art[0], "\\:-. ");
	strcpy(art[1], "V\\:-.");
	strcpy(art[2], "0V\\:-");
	strcpy(art[3], "@0V\\:");
	strcpy(art[4], "#@0V\\");

	// print standard art
	scaledPrint(art, 1);
	printf("\n");

	// get valid user input
	while (input < 1) {
		printf("Enter a scaling factor: ");
		scanf("%d", &input);
	}

	printf("\n");
	// print scaled art
	scaledPrint(art, input);

	return 0;
}