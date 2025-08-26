/*
 * main.c
 *
 *  Created on: Jul 29, 2025
 *      Author: arafa
 */


#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);

int main(void)
{
	int32_t n1;

	printf("Enter integer: ");
	scanf("%d", &n1);

	if((n1&1))
		printf("%d is odd.\n",n1);
	else
		printf("%d is even.\n",n1);

	wait_for_user_input();
	return 0;
}


void wait_for_user_input(void)
{
	printf("Press any key to close.");
	while(getchar() != '\n')
	{

	}


	getchar();
}
