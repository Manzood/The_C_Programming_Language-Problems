#include <stdio.h>

int fold(char line[])
{
	int c;
	int len = 0;
	int i = 0;
	int j;
	int prev = 0;          //Last non-whitespace character location;
	int last = 0; 
	int reps = 0;

	while ((c = getchar()) != EOF && c != 'x')
	{
		line[i] = c;
		len++;

		if (c != ' ' && c != '\t')
			prev = i;

		if (c == ' ' || c == '\t')
		{
			last = prev + 1;
		}

		//printf("%d\n", prev);

		if (i == 50)
		{
			for (j = 0; j < last; j++)
			{
				printf("%c", line[j]);
			}

			printf("\n");

			for (j = last + 1; j < 50; j++)
			{
				printf ("%c", line[j]);
			}

			printf("\n");

			i = 0;
			last = 0;
			prev = 0;
			reps++;
		}

		else
			i++;
	}

	while (i < (len - (reps * 50)))
	{
		printf("%d", line[i]);
		i++;
	}

	return 0;
}

int main()
{
	char line[50];

	fold (line);

	return 0;
}