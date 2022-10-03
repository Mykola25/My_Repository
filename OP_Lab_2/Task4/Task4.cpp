#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a, x;
	const double pi = 3.14159265;
	printf("Радіани a = ");
	scanf_s("%f", &a);
	x = 180 * a / pi;
	if (a > 0 && a < 2 * 3.14) printf("Значення кута = %f", x);
	else printf("Помилка");
	return 0;
}