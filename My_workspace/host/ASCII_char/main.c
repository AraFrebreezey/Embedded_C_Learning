/*
 * main.c
 *
 *  Created on: Jul 26, 2025
 *      Author: arafa
 */

#include <stdio.h>


int main(void)
{
	char char1, char2, char3, char4, char5, char6;
	printf("Enter 6 characters of your choice: ");
	scanf("%c %c %c %c %c %c", &char1, &char2, &char3, &char4, &char5, &char6);

	printf("ASCII Codes: %d, %d, %d, %d, %d, %d\n", (int)char1, (int)char2, (int)char3, (int)char4, (int)char5, (int)char6);

	printf("Press any key to continue.");
	while (getchar() != '\n')
	{

	}
	getchar();

}
