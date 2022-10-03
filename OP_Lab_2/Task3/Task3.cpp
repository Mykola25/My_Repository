#include <stdio.h>
#include <windows.h>
#include <utility>
using std::swap;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float A, B, C;
    printf("До змін :\nA = ");
    scanf_s("%f", &A);
    printf("B = ");
    scanf_s("%f", &B);
    printf("C = ");
    scanf_s("%f", &C);
    swap(A, C);
    swap(C, B);
    swap(B, A);
    printf("Після змін : \nA = %f\n", A);
    printf("B = %f\n", B);
    printf("C = %f", C);
    return 0;
}