/*
 * main.c
 *
 *  Created on: Jul 26, 2025
 *      Author: arafa
 */

#include <stdio.h>

int main(void)
{
	char ex = 100;
	printf("Address of ex is %p\n", &ex);
	char* ex_ptr = &ex;
	printf("Data in ex_ptr is %c, which is %d\n", *ex_ptr,*ex_ptr);
	*ex_ptr = 65;
	printf("ex is %c, which is %d", ex, ex);
}
