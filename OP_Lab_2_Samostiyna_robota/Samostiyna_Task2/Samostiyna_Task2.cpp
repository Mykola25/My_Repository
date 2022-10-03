#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float A, B, C, a, b, c, h, S, P, pi = 3.14159265;
	A = 15, h = 10, a = 30.0;
	printf("Дано: \nСторона A = %f\nВисота h = %f\nКут альфа = %f градусів\n", A, h, a);
	C = sqrt(A * A - h * h) * 2;
	printf("Результати обчислення: \nСторона C = %f\n", C);
	B = sqrt(h * h + pow(C / 2, 2));
	printf("Сторона B = %f\n", B);
	b = (A * A + C * C - B * B) / (2 * A * C);
	b = acos(b) * 180 / pi;
	printf("Кут бета = %f градусів\n", b);
	c = 180 - (a + b);
	printf("Кут гама = %f градусів\n", c);
	S = 0.5 * C * h;
	printf("Площа трикутника S = %f\n", S);
	P = A + B + C;
	printf("Периметр трикутника P = %f", P);
	return 0;
}