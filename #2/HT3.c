/*
				weightInKilograms
BMI = -----------------------------------------
		heightInMeters × heightInMeters

Create a BMI calculator application that reads the user’s weight in pounds
and height in inches (or, if you prefer, the user’s weight in kilograms and
height in meters), then calculates and displays the user’s body mass index.
Also, the application should display the following information from the
Department of Health and Human Services/National Institutes of Health and
evaluate user’s BMI:

BMI VALUES
Underweight: less than 18.5
Normal: between 18.5 and 24.9
Overweight: between 25 and 29.9
Obese: 30 or greater
---------------------------------
Yours: 55.5 - Obese
*/

#include <stdio.h>


int main()
{
	float kg = 0,cm = 0,BMI = 0;


	printf("Enter you weight in kg: ");
	while (scanf("%f", &kg) != 1)
	{
		while (getchar() != '\n');
		printf ("Try again enter you weight in kg: ");
	}

	
	printf("Enter you height in cm: ");
	while (scanf("%f", &cm) != 1)
	{
		while (getchar() != '\n');
		printf ("Try again enter you height in cm: ");
	}

	cm = cm / 100;
	
	BMI = kg / (cm * cm);
	
	
	

	printf("\nBMI VALUES\nUnderweight: less than 18.5\nNormal: between 18.5 and 24.9\nOverweight: between 25 and 29.9\nObese: 30 or greater\n---------------------------------");	
	
	printf("\nBMI: %.2f - ",BMI);
	if (BMI < 18.5) printf("Underweight\n");
	if (18.5 > BMI && BMI < 24.9) printf("Normal\n");
	if (25 > BMI && BMI < 29.9) printf("Overweight\n");
	if (30 > BMI) printf("Obese\n");
	
	

	return 0;
}

