#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float A, B, C, a, b, c, h, S, P, pi = 3.14159265;
	h = 10, a = 30.0, c = 70.0;
	printf("Дано: \nВисота трикутника h = %f\nКут альфа = %f градусів\nКут гама = %f градусів\n", h, a, c);
	b = 180 - (a + c);
	printf("Результати обчислення: \nКут бета = %f градусів\n", b);
	B = h / sin(a * pi / 180);
	printf("Сторона B = %f\n", B);
	C = sqrt(B*B-h*h) * 2;
	printf("Сторона C = %f\n", C);
	A = sqrt(B * B + C * C - 2 * B * C * cos(a * pi / 180));
	printf("Сторона A = %f\n", A);
	S = 0.5 * C * h;
	printf("Площа трикутника S = %f\n", S);
	P = A + B + C;
	printf("Периметр трикутника P = %f", P);
	return 0;
}