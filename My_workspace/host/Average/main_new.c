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
	printf("Give three number:");
	scanf("%d %d %d",&a,&b,&c);

	avg = (a+b+c)/3;

	printf("Result = %d\n",avg);

	printf("Press any key to close.");
	while(getchar() != '\n')
	{

	}


	getchar();
}
