#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int view;
	double x, y, a, f{};
	printf("Введіть x: ");
	scanf_s("%lf", &x);
	printf("Введіть y: ");
	scanf_s("%lf", &y);
	printf("Виберіть вид функції f(x):\n1 - sin(x)\n2 - x^2\n3 - e^x\n");
	scanf_s("%d", &view);
	switch (view)
	{
	case 1: f = sin(x); printf("Ви обрали f(x): sin(x)"); break;
	case 2: f = pow(x, 2); printf("Ви обрали f(x): x^2"); break;
	case 3: f = exp(x); printf("Ви обрали f(x): e^x"); break;
	default: printf("Помилка\n"); break;
	}
	if (pow(x, 3) > 0)
	{
		a = pow(log(f), 3);
		printf("\na = %f\n", a);
	}
	else if (pow(x, 3) < 0)
	{
		a = pow(tan(x), 3) + f;
		printf("\na = %f\n", a);
	}
	else
	{
		a = pow(fabs(pow(y, 3) - pow(x, 2)), (1.0 / 3));
		printf("\na = %f\n", a);
	}
	return 0;
}