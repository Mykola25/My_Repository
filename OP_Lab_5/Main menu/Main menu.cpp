#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int task, mounth, view, N, M;
	double x, y, a, f;
	printf("\tГоловне меню:\nВиберіть завдання 1 або 2 або 3 - (самостійна):\n");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1: printf("Введіть місяць: ");
		scanf_s("%d", &mounth);
		switch (mounth)
		{
		case 1: printf("1 - перший квартал\n"); break;
		case 2: printf("2 - перший квартал\n"); break;
		case 3: printf("3 - перший квартал\n"); break;
		case 4: printf("4 - другий квартал\n"); break;
		case 5: printf("5 - другий квартал\n"); break;
		case 6: printf("6 - другий квартал\n"); break;
		case 7: printf("7 - третій квартал\n"); break;
		case 8: printf("8 - третій квартал\n"); break;
		case 9: printf("9 - третій квартал\n"); break;
		case 10: printf("10 - четвертий квартал\n"); break;
		case 11: printf("11 - четвертий квартал\n"); break;
		case 12: printf("12 - четвертий квартал\n"); break;
		default: printf("Помилка\n"); break;
		}
		break;
	case 2: printf("Введіть x: ");
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
		break;
	case 3: printf("Введіть достоїнство карти: ");
		scanf_s("%d", &N);
		printf("Введіть масть карти: ");
		scanf_s("%d", &M);
		switch (N)
		{
		case 6: printf("Шістка ");
			break;
		case 7: printf("Сімка ");
			break;
		case 8: printf("Вісімка ");
			break;
		case 9: printf("Дев'ятка ");
			break;
		case 10: printf("Десятка ");
			break;
		case 11: printf("Валет ");
			break;
		case 12: printf("Дама ");
			break;
		case 13: printf("Король ");
			break;
		case 14: printf("Туз ");
			break;
		default: printf("Помилка\n"); break;
		}
		switch (M)
		{
		case 1:
			printf("піки\n");
			break;
		case 2:
			printf("треф\n");
			break;
		case 3:
			printf("бубни\n");
			break;
		case 4:
			printf("черви\n");
			break;
		default: printf("Помилка\n"); break;
		}
		break;
	default: printf("Помилка\n"); break;
	}
	return 0;
}


