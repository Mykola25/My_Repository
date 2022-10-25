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
		case 1: f = sin(x); printf("Ви обрали f(x): sin(x)");
			if (pow(x, 3) > 0)
				a = pow(log(f), 3);
			else if (pow(x, 3) < 0)
				a = pow(tan(x), 3) + f;
			else
				a = pow(fabs(pow(y, 3) - pow(x, 2)), (1.0 / 3));
			printf("\na = %f\n", a);
			break;
		case 2: f = pow(x, 2); printf("Ви обрали f(x): x^2");
			if (pow(x, 3) > 0)
				a = pow(log(f), 3);
			else if (pow(x, 3) < 0)
				a = pow(tan(x), 3) + f;
			else
				a = pow(fabs(pow(y, 3) - pow(x, 2)), (1.0 / 3));
			printf("\na = %f\n", a);
			break;
		case 3: f = exp(x); printf("Ви обрали f(x): e^x");
			if (pow(x, 3) > 0)
				a = pow(log(f), 3);
			else if (pow(x, 3) < 0)
				a = pow(tan(x), 3) + f;
			else
				a = pow(fabs(pow(y, 3) - pow(x, 2)), (1.0 / 3));
			printf("\na = %f\n", a);
			break;
		default: printf("Помилка\n"); break;
		}
		break;
	case 3: printf("Введіть достоїнство карти: ");
		scanf_s("%d", &N);
		switch (N)
		{
		case 6: printf("Введіть масть карти: ");
			scanf_s("%d", &M);
			switch (M)
			{
			case 1: printf("Шістка піки\n"); break;
			case 2: printf("Шістка христей\n"); break;
			case 3: printf("Шістка бубни\n"); break;
			case 4: printf("Шістка черви\n"); break;
			default: printf("Помилка\n"); break;
			}
			break;
		case 7: printf("Введіть масть карти: ");
			scanf_s("%d", &M);
			switch (M)
			{
			case 1: printf("Сімка піки\n"); break;
			case 2: printf("Сімка треф\n"); break;
			case 3: printf("Сімка бубни\n"); break;
			case 4: printf("Сімка черви\n"); break;
			default: printf("Помилка\n"); break;
			}
			break;
		case 8: printf("Введіть масть карти: ");
			scanf_s("%d", &M);
			switch (M)
			{
			case 1: printf("Вісімка піки\n"); break;
			case 2: printf("Вісімка треф\n"); break;
			case 3: printf("Вісімка бубни\n"); break;
			case 4: printf("Вісімка черви\n"); break;
			default: printf("Помилка\n"); break;
			}
			break;
		case 9: printf("Введіть масть карти: ");
			scanf_s("%d", &M);
			switch (M)
			{
			case 1: printf("Дев'ятка піки\n"); break;
			case 2: printf("Дев'ятка треф\n"); break;
			case 3: printf("Дев'ятка бубни\n"); break;
			case 4: printf("Дев'ятка черви\n"); break;
			default: printf("Помилка\n"); break;
			}
			break;
		case 10: printf("Введіть масть карти: ");
			scanf_s("%d", &M);
			switch (M)
			{
			case 1: printf("Десятка піки\n"); break;
			case 2: printf("Десятка треф\n"); break;
			case 3: printf("Десятка бубни\n"); break;
			case 4: printf("Десятка черви\n"); break;
			default: printf("Помилка\n"); break;
			}
			break;
		case 11: printf("Введіть масть карти: ");
			scanf_s("%d", &M);
			switch (M)
			{
			case 1: printf("Валет піки\n"); break;
			case 2: printf("Валет треф\n"); break;
			case 3: printf("Валет бубни\n"); break;
			case 4: printf("Валет черви\n"); break;
			default: printf("Помилка\n"); break;
			}
			break;
		case 12: printf("Введіть масть карти: ");
			scanf_s("%d", &M);
			switch (M)
			{
			case 1: printf("Дама піки\n"); break;
			case 2: printf("Дама хрест\n"); break;
			case 3: printf("Дама бубни\n"); break;
			case 4: printf("Дама черви\n"); break;
			default: printf("Помилка\n"); break;
			}
			break;
		case 13: printf("Введіть масть карти: ");
			scanf_s("%d", &M);
			switch (M)
			{
			case 1: printf("Король піки\n"); break;
			case 2: printf("Король треф\n"); break;
			case 3: printf("Король бубни\n"); break;
			case 4: printf("Король черви\n"); break;
			default: printf("Помилка\n"); break;
			}
			break;
		case 14: printf("Введіть масть карти: ");
			scanf_s("%d", &M);
			switch (M)
			{
			case 1: printf("Туз піки\n"); break;
			case 2: printf("Туз треф\n"); break;
			case 3: printf("Туз бубни\n"); break;
			case 4: printf("Туз черви\n"); break;
			default: printf("Помилка\n"); break;
			}
			break;
		default: printf("Помилка\n"); break;
		}
		break;
	default: printf("Помилка\n"); break;
	}
	return 0;
}