#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float a, b, c, d, result;
    printf("������ a = ");
    scanf_s("%f", &a);
    printf("������ b = ");
    scanf_s("%f", &b);
    printf("������ c = ");
    scanf_s("%f", &c);
    printf("������ d = ");
    scanf_s("%f", &d);
    result = (c / a - d) / (a / 4 + d) - ((5 * d - b) / (c - a * a));
    printf("���������: r = %f\n", result);
    return 0;
}