#include <stdio.h>

int power(int m, int n)
{
	int i, pow;
	pow = 1;

	for (i = 0; i < n; i++)
	{
		pow = pow * m;
	}

	return pow;
}

int main()
{
	int m, n, ans;

	scanf("%d%d", &m, &n);

	ans = power(m,n);

	printf ("%d\n", ans);

	return 0;
}