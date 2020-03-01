#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float convert(float fahr)
{
	float cel;
	cel = (((fahr - 32.0)*5.0)/9.0);
	return cel;
}

int main()
{
	float cel, fahr;

	fahr = LOWER;
	
	while (fahr <= UPPER)
	{
		cel = convert (fahr);
		printf ("%.0f %.2f\n", fahr, cel);

		fahr += STEP;
	}
}              