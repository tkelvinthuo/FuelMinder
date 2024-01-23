#include "fuelMinder.h"

#define PETROL 207
#define DIESEL 197
#define COMPACT_DIESEL 20
#define COMPACT_PETROL 15
#define MIDSIZE_DIESEL 18
#define MIDSIZE_PETROL 12
#define TRUCK_DIESEL 11
#define TRUCK_PETROL 6
#define MOTORCYCLES 20
/**
 * main - Calculates the fuel required to a complete a journey
 * Return: 0(success)
 */

int main(void)
{
	/* Variable declaration */
	char fuelType[30];
	char vehicleType[30];
	float distance;
	float fuelPrice;
	float avgConsumption;
	float fuelAmount;
	float fuelCost;

	/* pointer declaration */

	printf("\t\t\t\t\t	WELCOME TO FUELMINDER \t\t\n");
	printf("\t\t\t\t\t	---------------------\n\n");
	printf("This is a simple command-line program to help you calculate the amount of fuel required to complete a journey in terms of litres and the amount of money required.\n\n\n");
	printf("First of all, we require a few details!\n\n");
	getStr("Which vehicle will you be using to travel?\n a) Compact \n b) Midsize \n c) Truck \n d) Motorcycles\n\n", vehicleType, 30);
	printf("%s\n", vehicleType);
	getStr("Which type of fuel does the vehicle use?\n a? Petrol\n b) Diesel\n\n", fuelType, 30);
	printf("%s\n", fuelType);
	getFlt("What distance do you expect to cover for the whole journey in km?\n\n", &distance);
	printf("%f\n", distance);
	/* function to calculate the amount of fuel */

	/* Initialize avgConsumption and fuel price variables with values */
	if (strcmp(vehicleType, "compact") == 0)
	{
		if (strcmp(fuelType, "diesel") == 0)
		{
			fuelPrice = DIESEL;
			avgConsumption = COMPACT_DIESEL;
			fuelAmount = distance / avgConsumption;
			fuelCost = fuelAmount * fuelPrice;
			printf("To travel %lf with %s, you will need %lf litres of fuel and it will cost you %lf Ksh.\n", distance, vehicleType, fuelAmount, fuelCost);
		}
		else
		{
			fuelPrice = PETROL;
			avgConsumption = COMPACT_PETROL;
			fuelAmount = distance / avgConsumption;
			fuelCost = fuelAmount * fuelPrice;
			printf("To travel %lf with %s, you will need %lf litres of fuel and it will cost you %lf Ksh.\n", distance, vehicleType, fuelAmount, fuelCost);

			/* fuel calculator function */
		}
	}
	else if (strcmp(vehicleType, "midsize") == 0)
	{
		if (strcmp(fuelType, "diesel") == 0)
		{
			fuelPrice = DIESEL;
			avgConsumption = MIDSIZE_DIESEL;
			fuelAmount = distance / avgConsumption;
			fuelCost = fuelAmount * fuelPrice;
			printf("To travel %lf with %s, you will need %lf litres of fuel and it will cost you %lf Ksh.\n", distance, vehicleType, fuelAmount, fuelCost);
		}
		else
		{
			fuelPrice = PETROL;
			avgConsumption = MIDSIZE_PETROL;
			fuelAmount = distance / avgConsumption;
			fuelCost = fuelAmount * fuelPrice;
			printf("To travel %lf with %s, you will need %lf litres of fuel and it will cost you %lf Ksh.\n", distance, vehicleType, fuelAmount, fuelCost);
		}
	}
	else if (strcmp(vehicleType, "truck") == 0)
	{
		if (strcmp(fuelType, "diesel") == 0)
		{
			fuelPrice = DIESEL;
			avgConsumption = TRUCK_DIESEL;
			fuelAmount = distance / avgConsumption;
			fuelCost = fuelAmount * fuelPrice;
			printf("To travel %lf with %s, you will need %lf litres of fuel and it will cost you %lf Ksh.\n", distance, vehicleType, fuelAmount, fuelCost);
		}
		else
		{
			fuelPrice = PETROL;
			avgConsumption = TRUCK_PETROL;
			fuelAmount = distance / avgConsumption;
			fuelCost = fuelAmount * fuelPrice;
			printf("To travel %lf with %s, you will need %lf litres of fuel and it will cost you %lf Ksh.\n", distance, vehicleType, fuelAmount, fuelCost);
		}
	}
	else
	{
		fuelPrice = PETROL;
		avgConsumption = MOTORCYCLES;
		fuelAmount = distance / avgConsumption;
		fuelCost = fuelAmount * fuelPrice;
		printf("To travel %lf with %s, you will need %lf litres of fuel and it will cost you %lf Ksh.\n", distance, vehicleType, fuelAmount, fuelCost);
	}


	return (0);
}

