#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a, b, c, D, x, x1, x2;
	printf("Дано квадратне рівняння: a*x*x + b*x + c = 0\nВведіть число a: ");
	scanf_s("%f", &a);
	printf("Введіть число b: ");
	scanf_s("%f", &b);
    printf("Введіть число c: ");
	scanf_s("%f", &c);
	D = b * b - 4 * a * c;
	printf("Дискримінант D = %g\n", D);
	if (D > 0)
	{
		x1 = (-b - sqrt(D)) / (2 * a);
		x2 = (-b + sqrt(D)) / (2 * a);
		printf("Корінь x1 = %g\nКорінь x2 = %g\n", x1, x2);
	}
	else if (D == 0)
	{
		x = -b / (2 * a);
		printf("Корінь x = %g\n", x);
	}
	else printf("Коренів немає\n");
	return 0;
}