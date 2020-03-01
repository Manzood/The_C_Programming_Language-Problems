#include <stdio.h>

//Replacing the spaces by the minimum number of tabs and blanks required to achieve the same spacing

char line[1000];

int entab()
{
	int c;
	int i = 0;
	int space = 0;
	extern char line[1000];

	while ((c = getchar()) != EOF && c != '\n')
	{
		line[i] = c;

		if (c == ' ')
			space++;

		else
			space = 0;

		if (space == 4)
		{
			line[i - 3] = '\t';
			space = 0;
			i = i - 3;
		}

		i++;

		//if (c == 'x')
			//return 0;
	}

	return i;
}

int main()
{
	extern char line[1000];
	int len;

	len = entab(line);
	//{
		printf("%s\n", line);
		printf("%d\n", len);
	//}
}