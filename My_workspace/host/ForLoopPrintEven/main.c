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
	int32_t low, high, i;
	uint32_t count = 0;
	printf("Enter the lower and higher boundaries: ");
	scanf("%d %d", &low, &high);

	if(low > high)
	{
		printf("First number needs to be less than second number. Closing...\n");
		wait_for_user_input();
		return 0;
	}


	printf("Even numbers are:\n");
	for(i = low; i <= high;i++)
	{
		if (!(i%2))
		{
			printf("%4d\t", i);
			count++;
		}
	}
	printf("\nTotal number of even numbers = %d\n", count);
	wait_for_user_input();
	return 0;
}

void wait_for_user_input(void)
{
	printf("Press enter key to close.");
	while(getchar() != '\n')
	{

	}


	getchar();
}
