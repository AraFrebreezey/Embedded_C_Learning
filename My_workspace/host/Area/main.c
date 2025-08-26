/*
 * main.c
 *
 *  Created on: Jul 28, 2025
 *      Author: arafa
 */

#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);
int isNegative(double n1);

int main(void)
{
	int8_t shape;
	double n1,n2,n3,area;

	printf("Choose the appropriate letter for the area you want: \n(t) triangle\n(z) trapezoid\n(c) circle\n(s) square\n(r) rectangle\n");
	scanf("%c",&shape);

	switch(shape){
	case 't':
		printf("What is the triangle's base: ");
		scanf("%lf",&n1);

		printf("What is the triangle's height: ");
		scanf("%lf",&n2);
		area = .5*n1*n2;
		break;
	case 'z':
		printf("What is the trapezoid's top base length: ");
		scanf("%lf",&n1);
		printf("What is the trapezoid's bottom base length: ");
		scanf("%lf",&n2);
		printf("What is the trapezoid's height: ");
		scanf("%lf",&n3);
		area = .5*(n1+n2)*n3;
		break;
	case 'c':
		printf("What is the circle's radius: ");
		scanf("%lf",&n1);
		area = n1*n1*3.14;
		break;
	case 's':
		printf("What is the square's edge length: ");
		scanf("%lf",&n1);
		area = n1*n1;
		break;
	case 'r':
		printf("What is the rectangle's base: ");
		scanf("%lf",&n1);
		printf("What is the rectangle's height: ");
		scanf("%lf",&n2);
		area = n1*n2;
		break;
	default:
		printf("Incorrect input. Closing...\n");
		wait_for_user_input();
		return 0;
	}
	if(area < 0)
		printf("Invalid Area. Cannot use negative number\n");
	else
		printf("Area is %0.3lf\n", area);


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
