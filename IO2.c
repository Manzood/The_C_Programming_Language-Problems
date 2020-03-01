#include <stdio.h>

int main()
{
	int ndigit[10], nwhite, nother;
	int c, i;

	nwhite = nother = 0;

	for (i = 0; i < 10; i++)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF && c != 'x')
	{
		if (c <= '9' && c >= '0')
		{
			ndigit[c-'0']++;
		}

		else if (c == ' ' || c == '\n' || c == '\t')
		{
			nwhite++;
		}

		else 
			nother++;
	}

	printf ("Digits = ");

	for (i = 0; i < 10; i++)
		printf("%d ", ndigit[i]);

	printf ("\nWhitespace = %d\nOthers = %d\n", nwhite, nother);
}