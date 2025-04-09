#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fahreheitToCelsius(void)
{
	double a, b;

	printf("È­¾¾¿Âµµ?");
	scanf("%lf", &a);

	b = (a - 32) * 5.0 / 9.0;
	printf("%.2f F = %.2f C\n", a, b);

	return;
}

int main()
{
	fahreheitToCelsius();
	return 0;
}