#include <stdio.h>
#include <ctype.h>

int gethex(char a[])
{
	char c;
	int len;
	len = 0;

	while ((c = getchar()) != EOF && c != '\n')
	{
		a[len] = c;
		len++;
	}

	return len;
}

int digit(char c)
{
	if (c - '0' < 10)
		return (c - '0');

	else
		return 10;
}



int main()
{
	char hex[100];
	int len;
	int fail = 0;

	int dec = 0;

	len = gethex(hex);

	int i = len - 1;
	int pow = 1;

	while (i >= 0)
	{
		//printf ("%c", hex[i]);

		if (digit(hex[i]) != 10)
		{
			dec += (hex[i] - '0') * (pow);
		}

		else if ((hex[i] - 'A') < 6)
		{
			dec += ((hex[i] - 'A') + 10) * pow;
		}

		else if ((hex[i] - 'a') < 6)
		{
			dec += ((hex[i] - 'a') + 10) * pow;
		}

		else 
		{
			fail = 1;
			printf("Error: Invalid Character\n");
			break;
		}

		pow = pow * 16;
		i--;
	}

	if (fail == 0)
		printf ("%d\n", dec);

	return 0;
}