/*
 * main.c
 *
 *  Created on: Aug 16, 2025
 *      Author: arafa
 */
/*This program displays a menu to the user where they can select 4 options.
 *  1. Display all of the student records
 *  2. Add a new student record, limit of 10 records
 *  3. Delete a student record
 *  4. Exit
 *
 */

#include <stdint.h>
#include <stdio.h>
#include "student.h"


int menu(void);
void display(struct student records[], uint32_t count);
int addRecord(struct student records[], uint32_t count);
int deleteRecord(struct student records[], uint32_t count);
void wait_for_user_input(void);

int main(void)
{
	struct student records[10];

	uint32_t recordsCount = 0;

	uint32_t choice;


	do{
		 choice = menu();
		 switch(choice){
		 	 case 1:
		 		 display(records,recordsCount);
		 		 break;
		 	 case 2:
		 		 recordsCount = addRecord(records,recordsCount);
		 		 break;
		 	 case 3:
		 		 recordsCount = deleteRecord(records,recordsCount);
		 		 break;
		 	 default:

		 }

	}while(choice != 0); //keep looping until 0 is selected

	wait_for_user_input();
	return 0;
}

int menu(void)
{
	uint32_t choice;

	do{
	printf("\nDisplay all records  -->1\n");
	printf("Add new record       -->2\n");
	printf("Delete a record      -->3\n");
	printf("Exit application     -->0\n");
	printf("Enter your option here:");
	scanf("%u", &choice);
	}while(choice != 0 && choice != 1 && choice != 2 && choice != 3);//If the user doesn't enter 0,1,2,3, then repeat

	return choice;
}

void display(struct student records[], uint32_t count)
{

	if(count == 0)
	{
		printf("No records to display\n");
	}
	else
	{
		printf("Displaying all students record\n***************\n");
		for(int i = 0; i < count; i++)
		{
			printf("\nRoll Number\t\t: %u\n", records[i].rollnumber);
			printf("Student Semester\t: %u\n", records[i].studentSemester);
			printf("Student DOB\t\t: %s\n", records[i].studentDOB);
			printf("Student Branch\t\t: %s\n", records[i].studentBranch);
			printf("Student Name\t\t: %s\n",records[i].studentName);
			printf("***************\n");
		}
	}

}

int addRecord(struct student records[], uint32_t count)
{
	if (count == 10)
		printf("Can only store 10 records.\n");
	else
	{
		uint32_t tempRollNumber = 0;
		printf("Add a new record\n");
		printf("Enter the roll number : ");
		scanf("%d",&tempRollNumber);

		// Need to check if the roll number has already been used to avoid duplication.
		for(int i = 0;i < count;i++)
		{
			if(tempRollNumber == records[i].rollnumber)
			{
				printf("Roll number already being used.");
				return count;
			}
		}

		records[count].rollnumber = tempRollNumber;
		printf("Enter the Student Semester : ");
		scanf("%hu", &records[count].studentSemester);
		printf("Enter the Student DOB(mm/dd/yyyy) : ");
		scanf(" %s", records[count].studentDOB);
		printf("Enter the Student Branch : ");
		scanf(" %[^\n]s", records[count].studentBranch);
		printf("Enter the Student Name : ");
		scanf(" %[^\n]s", records[count].studentName);
		printf("Record added successfully\n");
		count++;
	}

	return count;
}

int deleteRecord(struct student records[], uint32_t count)
{
	uint32_t rollNumber;
	if(count == 0)
	{
		printf("No record to delete\n");
		return count;
	}
	else
	{
		printf("Enter roll number of record to be deleted: ");
		scanf("%d", &rollNumber);
		for(int i = 0; i < count;i++)
		{
			// if roll number inputed matches, then we have to move array elements to the left
			if (rollNumber == records[i].rollnumber)
			{
				for(int j = i; j < count - 1; j++)
				{
					records[j] = records[j+1];
				}
				printf("Delete successful\n");
				count--;
				return count;
			}

		}

	}
		printf("Roll number does not exist\n");
		return count;

}

void wait_for_user_input(void)
{
	printf("Press enter key to close.");
	while(getchar() != '\n')
	{

	}


	getchar();
}
