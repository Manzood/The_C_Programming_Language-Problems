#include <stdio.h>

//Program to print a vertical histogram of the occurances of lengths of words in the input
//Write your input in a single line, with words separated by spaces or tabs
//Currently designed to read words up to length 5 to have a visible output; it can easily be changed by changing the value of MAXLEN

#define MAXLEN 5

int main()
{
	int c, i, j, k;
	int wlen = 0;
	int histo[MAXLEN + 1];

	for (i = 0; i < MAXLEN + 1; i++)
	{
		histo[i] = 0;
	}

	while ((c = getchar()) != EOF && c != '\n')
	{
		if (c == ' ' || c == '\t')
		{
			histo[wlen]++;
			wlen = 0;
		}

		else
		{
			wlen++;
		}
	}

	histo[wlen]++;

	for (i = 0; i < MAXLEN; i++)
	{
		for (k = 0; k < 3; k++)
		{
			for (j = 1; j < MAXLEN + 1; j++)
			{
				if (i >= (MAXLEN - histo[j]))
				{
					printf("-   ");
				}

				else 
					printf("    ");
			}

			printf("\n");
		}
	}

	for (i = 1; i < MAXLEN + 1; i++)
	{
		printf("%d   ", i);
	}

	printf ("\n");

	/*
	for (i = 1; i < 15; i++)
	{
		printf ("%d letter words: ", i);
		for (j = 0; j < histo[i]; j++)
		{
			printf("---");
		}

		printf("\n");
	}
	*/

	return 0;
}