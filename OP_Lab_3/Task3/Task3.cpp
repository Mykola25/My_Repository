#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a1 = 1000;
	double b1 = 0.0001, x1;
	double a2 = 1000, x2;
	float b2 = 0.0001;
	x1 = (pow(a1 - b1, 2) - (a1 * a1 - 2 * a1 * b1)) / (b1 * b1);
	printf("Вираз 1 = %.15f\n", x1);
	x2 = (pow(a2 - b2, 2) - (a2 * a2 - 2 * a2 * b2)) / (b2 * b2);
	printf("Вираз 2 = %.15f\n", x2);
	return 0;
}
