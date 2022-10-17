#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x, y;
	printf("Введіть число x: ");
	scanf_s("%f", &x);
	printf("Введіть число y: ");
	scanf_s("%f", &y);
	if (x*x + y*y <= 16 && y <= exp(x) && y >= -exp(x))
		printf("True\n");
	else printf("False\n");
	return 0;
}

