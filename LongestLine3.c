#include <stdio.h>

#define MAX 1000

char line[MAX];
char longest[MAX];
int max = 0;

int getl ()
{
	extern char line[MAX];
	int len = 0;
	int c;

	while ((c = getchar()) != EOF && c != 'x' && c != '\n')
	{
		line[len] = c;
		len++;
	}

	return len;
}

void copy()
{
	extern char line[MAX];
	extern char longest[MAX];
	int i;

	for (i = 0; i < max; i++)
	{
		longest[i] = line[i];
	}
}

int main()
{
	extern char longest[MAX];
	int len;
	extern int max;

	while ((len = getl()) != 0)
	{
		if (len > max)
		{
			max = len;
			copy();
		}
	}

	printf ("%s\n", longest);
}