#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Primzahl(int x)
{
	if (x == 2)
	{
		printf("%i ist eine Primzahl!\n", x);
		return 1;
	}
	int y;
	for (y = 2; y <= (x / 2); y++) {
		if (x % y == 0) {
			return 0;
		}
	}
	printf("%i ist eine Primzahl!\n", x);
	return 1;
}

int main()
{
	int n; int x;
	printf("Geben Sie eine natürliche Zahl n ein\n");
	scanf("%d", &n);
	for (x = 2; x <= n; x++)
	{
		Primzahl(x);
	}
	return 0;
}