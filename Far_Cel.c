#include<stdio.h>

int main()
{
	float fahr, cels;

	#define LOWER 20
	#define UPPER 300
	#define STEP 20

	cels = LOWER;

	while (cels <= UPPER)
	{
		fahr = 9.0 * cels / 5.0;
		fahr += 32;
		printf ("%3.0f\t%6.1f\n", cels, fahr);
		cels += STEP;
	}
}              