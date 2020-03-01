#include <stdio.h>

int mod (int var)
{
	//printf ("var = %d\n", var);

	while (var > 2)
	{
		var = var - 2;
	}

	if (var == 1)
	{
		return 1;
	}

	else
		return 0;
}

int main()
{
	int curly, par, sq, doubleq, singleq;
	par = 0;
	curly = 0;
	sq = 0;
	doubleq = 0;
	singleq = 0; 
	int c;
	int normal = 0;
	int slash = 0;
	int star = 0;

	//printf("%d\n", par);

	/*
		switch (c)
		{
			case '{':
				curly++;
				break;

			case '(':
				par++;
				break;

			case '}':
				curly--;
				break;

			case ')':
				par--;
				break;
switch (c)
		{
			case '{':
				curly++;
				break;

			case '(':
				par++;
				break;

			case '}':
				curly--;
				break;

			case ')':
				par--;
				break;

			case '[':
				sq++;
				break;

			case ']':
				sq--;
				break;
		}
			case '[':
				sq++;
				break;

			case ']':
				sq--;
				break;
		}
	*/

	char prev;
	int numlines, row;
	numlines = 0;
	row = 0;

	while ((c = getchar()) != EOF && c != 'x')
	{
		row++;

		if (c == '/')
		{
			slash++;

			if (slash == 2)
			{
				normal = 2;
			}
		}

		else if (normal != 2)
			slash = 0;

		if (slash == 1 && c == '*')
		{
			normal = 3;
		}

		if (normal == 2)
		{
			if (c == '\n')
			{
				normal = 0;
			}
		}

		if (normal == 3)
		{
			if (c == '*')
				star++;

			else
				star = 0;

			if (c == '\\')
				if (star == 1)
				{
					normal = 0;
				}
		}

		if ((c == '{' || c == '(' || c == '}' || c == ')') && (normal != 2))
		{
			normal = 1;
		}

		if (c == 34 || c == 39)
		{
			normal = 4;
		}
		
		if (normal == 0 || normal == 4)
		{
			if (c != ' ' && c != '\t' && c != '\n')
			{
				prev = c;
				//printf ("%c\n", prev);
			}

			if (c == '\n')
			{
				numlines++;

				if (prev != ';')
					printf ("%d:%d: Error: Expected ';'\n", numlines, row);

				row = 0;
			}
		}

		if (normal == 1 || normal == 4)
		{
			switch (c)
			{
				case '{':
					curly++;
					break;

				case '(':
					par++;
					break;

				case '}':
					curly--;
					break;

				case ')':
					par--;
					break;

				case '[':
					sq++;
					break;

				case ']':
					sq--;
					break;

				case 34:
					doubleq++;
					break;

				case 39:
					singleq++;
					break;
			}
		}

		if (c == '\n')
		{
			normal = 0;
		}
	}

	if (par < 0)
	{
			printf ("Error: you are missing %d '(' token(s)\n", (0 - par));
	}

	else if (par > 0)
	{
		printf ("Error: You are missing %d ')' token(s)\n", par);
	}

	if (curly < 0)
	{
		printf("Error: You are missing %d '{' token(s)\n", (0 - curly));
	}

	else if (curly > 0)
	{
		printf("Error: You are missing %d '}' token(s)\n", curly);
	}

	if (sq < 0)
	{
		printf("Error: You are missing %d '[' token(s)\n", (0 - sq));
	}

	else if (sq > 0)
	{
		printf("Error: You are missing %d ']' token(s)\n", sq);
	}

	//int x = mod (doubleq);
	//printf ("x = %d\n", x);

	if (mod (doubleq) != 0)
	{
		printf ("Error: You are missing 1 '\"' token\n");
	}

	if (mod (singleq) != 0)
	{
		printf ("Error: You are missing 1 '\' token\n");
	}

	// Error detection
}