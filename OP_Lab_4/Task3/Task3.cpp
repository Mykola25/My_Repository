#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y, z, u, min, max;
	printf("Введіть число x: ");
	scanf_s("%lf", &x);
	printf("Введіть число y: ");
	scanf_s("%lf", &y);
	printf("Введіть число z: ");
	scanf_s("%lf", &z);
	min = x;
	if (y < x && y < z) min = y;
	else if (z < x && z < y) min = z;
	max = x;
	if (y > x && y > z) max = y;
	else if (z > x && z > y) max = z;
	u = (pow(max, 2) - pow(2, x) * pow(min, 3)) / (cos(5 * x) + max / min);
	printf("u = %f", u);
	return 0;
}
