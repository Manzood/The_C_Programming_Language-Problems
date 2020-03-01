#include <stdio.h>

int getl (char line[])
{
	int c, len;
	len = 0;

	while ((c = getchar()) != '\n')
	{
		if (c == 'x')
		{
			return 0;
		}

		else
		{
			line[len] = c;
			len++;
		}
	}	

	//printf ("%s\n", line);
	//printf ("%d\n", len);

	line[len] = '\0';
	//printf ("The current char: %d\n", line[len]);

	return len;
}

void reverse (char line[], int len)
{	
	int temp, i;
	
	for (i = 0; i < (len/2); i++)
	{
		temp = line[i]; 
		line[i] = line[(len - 1) - i];
		line[(len - 1) - i] = temp;
		//printf ("%c", line[i]);
	}

	//printf("\n");

	//printf("%s\n", line);
}

int main()
{
	char line [1000];
	int len;

	while ((len = getl(line)) != 0)
	{
		reverse (line, len);
		//printf ("%d\n", len);
		printf("%s\n", line);
	} 

	return 0;
}