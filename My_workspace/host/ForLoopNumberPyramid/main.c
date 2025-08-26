/*
 * main.c
 *
 *  Created on: Jul 29, 2025
 *      Author: arafa
 */


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
	int32_t num;

	printf("Enter integer: ");
	scanf("%d", &num);


	for(int i = 1; i <= num;i++)
	{
		for(int j = i;j >= 1; j--)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}

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
