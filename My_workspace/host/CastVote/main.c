/*
 * main.c
 *
 *  Created on: Jul 28, 2025
 *      Author: arafa
 */


#include <stdio.h>

int main(void)
{
	int age;
	printf("How old are you: \n");
	scanf("%d",&age);

	if (age < 18)
		printf("You are not old enough to vote\n");
	else
		printf("You can vote\n");

	printf("Press any key to close.");
	while(getchar() != '\n')
	{

	}


	getchar();
	return 0;
}
