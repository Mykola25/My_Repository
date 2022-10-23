#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a = 2.53, y, x;
	y = modf(a, &x);
	y = y * 100;
	printf("\n%g студента групи ПІ-%g %g рази отримали по %g за залік з математики\n", x, y, x, x);
	return 0;
}
