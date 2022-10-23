#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a1 = 1000, b1 = 0.0001, x1, y1, s1;
	printf("Обчислення при float:\n");
	x1 = (pow((a1 - b1), 2)) - (pow(a1, 2) - 2 * a1 * b1);
	y1 = pow(b1, 2);
	s1 = (x1) / (y1);
	printf("Результат = %f\n", s1);
	printf("\nОбчислення при double:\n");
	double a2 = 1000, b2 = 0.0001, x2, y2, s2;
	x2 = (pow((a2 - b2), 2)) - (pow(a2, 2) - 2 * a2 * b2);
	y2 = pow(b2, 2);
	s2 = (x2) / (y2);
	printf("Результат = %f\n", s2);
	printf("\nРізниця = %f\n", s2 - s1);
	return 0;
}
