#include "fuelMinder.h"

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
	/* pointer declaration */

	printf("\t\t\t\t\t	WELCOME TO FUELMINDER \t\t\n");
	printf("\t\t\t\t\t	---------------------\n\n");
	printf("This is a simple command-line program to help you calculate the amount of fuel required to complete a journey in terms of litres and the amount of money required.\n\n\n");
	printf("First of all, we require a few details!\n\n");
	getStr("Which vehicle will you be using to travel?\n a) Truck\n b) SUV\n c) Saloon\n\n", vehicleType, 30);
	printf("%s\n", vehicleType);
	getStr("Which type of fuel does the vehicle use?\n a? Petrol\n b) Diesel\n\n", fuelType, 30);
	printf("%s\n", fuelType);
	getFlt("What distance do you expect to cover for the whole journey in km?\n\n", &distance);
	printf("%f\n", distance);
	/* function to calculate the amount of fuel */
	printf("Travelling using ... consumes... km/l will require...litres of ... at ...price at a total cost of ...\n");

	return (0);
}
