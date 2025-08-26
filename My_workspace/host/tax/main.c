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
	uint64_t income, tax;
	double temp_income;

	printf("Please enter your income: ");
	scanf("%lf", &temp_income);
	// We dont want negative numbers.
	if (temp_income <0)
	{
		wait_for_user_input();
		return 0;

	}

	income = (uint64_t) temp_income;
	if(income <= 9525)
	{
		tax = 0;
	}
	else if((income <= 38700) && (income > 9525))
	{
		tax = income * 0.12;
	}
	else if((income <= 82500) && (income > 38700))
	{
		tax = income * 0.22;
	}
	else
	{
		tax = (income * 0.32) + 1000;
	}

	printf("You have to pay %I64u in taxes.\n",tax);

	printf("Press any key to close.");
	while(getchar() != '\n')
	{

	}


	getchar();
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
