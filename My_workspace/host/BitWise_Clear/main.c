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

	// bitwise AND using 10001111 mask to clear 6th 5th and 4th bit
	printf("input: 0x%x output: 0x%x\n",n1, (n1&0x8f));

	//using shift and negate... we know 7 = 111, so we shift those to the left 4 times to get the mask, and then we negate
	printf("input: 0x%x output: 0x%x\n", n1, (n1&~(7<<4)));
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
