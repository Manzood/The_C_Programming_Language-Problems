#include <stdio.h>

void getl(char s[])
{
	int c;
	int i = 0;

	while ((c = getchar()) != '\n')
	{
		s[i] = c;
		printf ("%c", s[i]);
		i++;
	} 
}

int strp(char s1[], char s2[])
{
	int i, j;
	i = 0;
	j = 0;
	int loc = -1;

	while (s1[i] != '\0' && loc == -1)
	{
		j = 0;

		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j++])
			{
				loc = i + 1;
				break;
			}
		}
		i++;
	}

	return loc;
}

int main()
{
	char s1[1000], s2[1000];

	getl(s1);
	getl(s2);

	int loc;
	loc = strp (s1, s2);

	printf ("%d\n", loc);

	return 0;
}