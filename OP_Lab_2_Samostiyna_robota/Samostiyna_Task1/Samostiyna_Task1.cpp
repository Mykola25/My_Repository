#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float A, B, C, a, b, c, h, S, P, pi = 3.14159265;
	S = 25, h = 10, a = 30.0;
	printf("Дано: \nПлоща трикутника S = %f\nВисота h = %f\nКут альфа = %f градусів\n", S, h, a);
	C = 2 * S / h;
	printf("Результати обчислення: \nСторона C = %f\n", C);
	B = 2 * S / (C * sin(a * pi / 180));
	printf("Сторона B = %f\n", B);
	A = sqrt(B * B + C * C - 2 * B * C * cos(a * pi / 180));
	printf("Сторона A = %f\n", A);
	b = (A * A + C * C - B * B) / (2 * A * C);
	b = acos(b) * 180 / pi;
	printf("Кут бета = %f градусів\n", b);
	c = 180 - (a + b);
	printf("Кут гама = %f градусів\n", c);
	P = A + B + C;
	printf("Периметр трикутника P = %f", P);
	return 0;
}
