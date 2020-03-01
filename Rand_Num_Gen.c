#include <stdio.h>

unsigned long int next = 1;

int rand()
{
	next = next * 1103515245 + 12345;
	printf ("%ld\n", next);

	return (unsigned int) (next / 65536) % 32768;
}

void srand (unsigned int seed)
{
	next = seed;
}

int main()
{
	unsigned int random;
	
	random = rand();

	printf("%u\n", random);
}