/*
 * main.c
 *
 *  Created on: Jul 31, 2025
 *      Author: arafa
 */


#include <stdio.h>
#include <stdint.h>

struct carModel
{
	unsigned int carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;
};

int main(void)
{
	struct carModel carBMW = {2021,15000,220,1330};
	struct carModel carFord = {.carWeight = 1900.96,.carNumber = 4031, .carPrice = 35000,.carMaxSpeed = 160};

	printf("Details of BMW is as follows:\n");
	printf("Car Number: %u\n",carBMW.carNumber);
	printf("Car Price: %u\n",carBMW.carPrice);
	printf("Car Max Speed: %u\n",carBMW.carMaxSpeed);
	printf("Car Weight: %f\n",carBMW.carWeight);

	carFord.carMaxSpeed = 4;

	//Output 16 bytes, 14 comes from the data types, 2 is from struct padding
	printf("Size of carModel: %I64u", sizeof(struct carModel));


	return 0;
}
