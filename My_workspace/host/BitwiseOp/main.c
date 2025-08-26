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
	int32_t n1, n2;

	printf("Enter first integer: ");
	scanf("%d", &n1);

	printf("Enter second integer: ");
	scanf("%d", &n2);

	printf("Bitwise AND: %d\n", n1&n2);
	printf("Bitwise OR: %d\n", n1|n2);
	printf("Bitwise XOR: %d\n",n1^n2);
	printf("Bitwise NOT:\n First integer %d\n Second integer %d\n", ~n1,~n2);

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
