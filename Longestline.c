#include <stdio.h>

int getl(char line[])
{
	int c, len;

	len = 0;

	while ((c = getchar()) != '\n' && len < 50)
	{
		line[len] = c;
		if (c == EOF || c == 'x')
			return 0;

		len++;
	}

	//printf ("%d\n", len);

	return len;
}

void copy (char to[], char from[])
{
	int i = 0;

	while((to[i] = from[i]) != '\0')
		i++;
}

int main ()
{
	int len, i;
	int maxlen = 0;
	char line[50];
	char longestline[50];

	while ((len = getl(line)) != 0)
	{
		if (len > maxlen)
		{
			maxlen = len;
			copy (longestline, line);
		}
	}

	for (i = 0; i < maxlen; i++)
	{
		printf("%c", longestline[i]);
	}

	printf ("\nLength = %d\n", maxlen);
}