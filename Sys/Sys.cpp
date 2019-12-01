#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "ru");

	int n, m, res = 0;
	int k = 1;

	printf("Введите число: ");
	scanf("%d", &n);
	printf("Перевести в: ");
	scanf("%d", &m);
	int mm = 1;
	for (int nn = n; nn >= m; nn /= m)
	{
		mm *= m;
	}

	printf("Ответ: ");
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