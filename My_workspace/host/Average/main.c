/*
 * main.c
 *
 *  Created on: Jul 26, 2025
 *      Author: arafa
 */


#include <stdio.h>

int a;
int b;
int c;
int avg;


int main(void)
{
	printf("Give first number:");
	fflush(stdout);
	scanf("%d",&a);
	printf("\nGive second number:");
	fflush(stdout);
	scanf("%d",&b);
	printf("\nGive third number:");
	fflush(stdout);
	scanf("%d",&c);

	avg = (a+b+c)/3;

	printf("Result = %d\n",avg);

	printf("Press any key to close.");
	while(getchar() != '\n')
	{

	}


	getchar();
}
