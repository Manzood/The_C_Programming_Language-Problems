#include <stdio.h>

#define TAB 8
#define MAX 1000

int detab(char input[])
{
	int c;
	int i = 0;
	int j;

	while ((c = getchar()) != '\n' && c != EOF && i < MAX)
	{
		if (c == '\t')
		{
			for (j = 0; j < TAB; j++)
			{
				input[i+j] = ' ';
			}
			i += TAB;
		}
		
		else 
		{
			input[i] = c;
			i++;
		}
	}

	return i;
}


int main()
{
	char input[MAX];
	int len;

	len = detab(input);

	printf ("%s\n", input);
	printf ("%d\n", len);
}