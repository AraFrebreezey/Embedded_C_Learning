/*
 * main.c
 *
 *  Created on: Jul 28, 2025
 *      Author: arafa
 */


#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);

int main(void)
{
	float n1,n2;

	//If the user enters a char, this will cause scanf to output 0, as this is not the expected input
	printf("Enter the first integer: ");
	if(scanf("%f",&n1) == 0)
	{
		printf("Invalid input! Exiting...\n");
		wait_for_user_input();
		return 0;
	}

	printf("Enter the second integer: ");
	if(scanf("%f",&n2) == 0)
	{
		printf("Invalid input! Exiting...\n");
		wait_for_user_input();
		return 0;
	}


	int32_t num1, num2;

	//This converts the real/float numbers to just the int part
	num1 = n1;
	num2= n2;

	if (num1 != n1 || num2 != n2)
		printf("Warning! Entered values are not integers.\n");

	if (num1 > num2)
		printf("%d is bigger\n", num1);
	else if (n1 < n2)
		printf("%d is bigger\n", num2);
	else
		printf("Both are equal\n");

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
