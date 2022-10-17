#include <stdio.h>
#include <windows.h>

int main()
{
	int x;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Введіть число: ");
	scanf_s("%d", &x);
	if (x >= -999 && x <= -100)
		printf("Число %d - негативне тризначне число\n", x);
	else if (x >= -99 && x <= -10)
		printf("Число %d - негативне двозначне число\n", x);
	else if (x >= -9 && x <= -1)
		printf("Число %d - негативне однозначне число\n", x);
	else if (x == 0)
		printf("число = 0\n");
	else if (x <= 9 && x >= 1)
		printf("Число %d - позитивне однозначне число\n", x);
	else if (x <= 99 && x >= 10)
		printf("Число %d - позитивне двозначне число\n", x);
	else if (x <= 999 && x >= 100)
		printf("Число %d - позитивне тризначне число\n", x);
	else
		printf("Введіть число в діапазоні від -999 до 999\n");
	return 0;
}
