#include <stdio.h>

void getl(char s[])
{
	int c, i;
	i = 0;

	while ((c = getchar()) != '\n')
	{
		s[i] = c;
		i++;
	}
}

int squeeze (char s1[], char s2[])
{
	int i, j;
	i = 0;
	j = 0;
	int k = 0;
	int present = 0;

	while (s1[i] != '\0')
	{
		j = 0;

		while (s2[j] != '\0')
			if (s1[i] == s2[j++])
				present = 1;

		if (present == 0)
		{
			s1[k++] = s1[i++];
		}

		else 
		{
			present = 0;
			i++;
		}
	}

	s1[k] = '\0';

	return k;
}

int main()
{
	char s1[1000];
	char s2[1000];

	getl(s1);
	getl(s2);

	int len;

	len = squeeze (s1, s2);

	
	printf ("%s", s1);
	printf ("\n%d\n", len);

	return 0;
}