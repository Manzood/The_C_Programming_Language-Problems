#include <stdio.h>
#define MAX 1000

int getl (char line[])
{
	int c, len;
	len = 0;

	while ((c = getchar()) != '\n' && c != 'x' && len < MAX)
	{
		line[len] = c;
		len++;
	}

	//len++;
	line[len] = '\0';

	//printf ("The current char: %d\n", line[len]);

	//len--;

	while (line[len] == ' ' || line[len] == '\t')
	{
		len--;
	}

	//printf("%s\n", line);

	if (c == 'x')
		return 0;

	else
		return len;
}

int main ()
{
	int len;
	char line[MAX];

	while ((len = getl(line)) != 0)
	{
		//if (len > 80)
		//{
			printf ("%s\n", line);
			printf ("Length = %d\n", len);
		//}
	}

	return 0;
}