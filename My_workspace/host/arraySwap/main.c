/*
 * main.c
 *
 *  Created on: Aug 16, 2025
 *      Author: arafa
 */

//This program asks the user for the size of two arrays, then asks them to input the contents of the array.
//Then, the two arrays will have their contents swap.
#include <stdio.h>
#include <stdint.h>

void display(int32_t *array, int8_t array_size);
void wait_for_user_input(void);

int main(void)
{
	uint32_t arrayASize, arrayBSize, smallestArraySize;

	//User enters size of two arrays
	printf("Enter # of elements for Array 1 and Array 2:");
	scanf("%u %u", &arrayASize, &arrayBSize);

	if(arrayASize < arrayBSize)
		smallestArraySize = arrayASize;
	else
		smallestArraySize = arrayBSize;

	//Declare arrays
	int32_t arrayA[arrayASize];
	int32_t arrayB[arrayBSize];

	//Use for loops to ask user to enter elements of arrays
	for(int i = 0; i < arrayASize; i++)
	{
		printf("Enter element %u of Array A:",i);
		scanf("%d", &arrayA[i]);
	}

	//Use for loops to ask user to enter elements of arrays
	for(int i = 0; i < arrayBSize; i++)
	{
		printf("Enter element %u of Array B:",i);
		scanf("%d", &arrayB[i]);
	}

	//display contents of array before swap
	printf("Contents of arrays before swap\n");
	display(arrayA, arrayASize);
	display(arrayB, arrayBSize);

	//using for loop to swap array contents
	for(int i = 0; i < smallestArraySize;i++)
	{
		//have temp variables to store the values before overwriting
		int32_t tempA, tempB;
		tempA = arrayA[i];
		tempB = arrayB[i];

		arrayA[i] = tempB;
		arrayB[i] = tempA;

	}

	//display after swapping
	printf("Contents of arrays after swap\n");
	display(arrayA, arrayASize);
	display(arrayB, arrayBSize);

	wait_for_user_input();
}

void display(int32_t array[], int8_t array_size)
{
	for(int i = 0; i < array_size; i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\n");
}

void wait_for_user_input(void)
{
	printf("\nPress enter key to close.");
	while(getchar() != '\n')
	{

	}


	getchar();
}
