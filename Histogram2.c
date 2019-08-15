#include <stdio.h>

// Program to print a vertical histogram of the number of occurences of each letter in the alphabet in input
// Characters can be both lower or upper case

int main()
{
	int c, i, j, k;
	char res;
	int arr[26];

	for (i = 0; i< 26; i++)
	{
		arr[i] = 0;
	}

	while ((c = getchar()) != EOF && c != '\n')
	{
		if (c - 'A' < 26)
			arr[c - 'A']++;

		else
			arr[c - 'a']++;
	}

	for (i = 0; i < 5; i++)
	{
		for (k = 0; k < 3; k++)
		{
			for (j = 0; j < 26; j++)
			{
				if (i >= (5 - arr[j]))
				{
					printf("-  ");
				}

				else
					printf("   ");
			}

			printf("\n");
		}
	}

	for (i = 0; i < 26; i++)
	{
		res = 'a' + i;
		printf("%c  ", res);
	}

	printf("\n");

	return 0;
}