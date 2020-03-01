#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;

	while ((c = getchar()) != EOF && c != 'x')
	{
		++nc;

		if (c == '\n')
		{
			++nl;
		}

		if (c == ' ' || c == '\t' || c == '\n')
			state = OUT;

		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}

	printf("%d %d %d\n", nl, nw, nc);

	return 0;
}