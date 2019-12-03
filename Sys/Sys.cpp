#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int n, m, res = 0;
	int k = 1;
	scanf("%d%d", &n, &m);
	int mm = 1;
	for (int nn = n; nn >= m; nn /= m)
	{
		mm *= m;
	}

	while (mm != 0)
	{
		int d = n / mm;

		if (d < 10)
			printf("%d", d);
		else
			printf("%c", 55 + d);

		n -= mm * d;
		mm /= m;
	}
	return 0;
}