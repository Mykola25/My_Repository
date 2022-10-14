#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int m, n, r;
    printf("Введіть число m: ");
    scanf_s("%d", &m);
    printf("Введіть число n: ");
    scanf_s("%d", &n);
    printf("m = %d, n = %d\n", m, n);
    r = m - ++n;
    printf("1) m - ++n = %d\n", r);
    printf("m = %d, n = %d\n", m, n);
    r = ++m > --n;
    printf("2) ++m > --n = %d\n", r);
    printf("n = %d, m = %d\n", n, m);
    r = --n < ++m;
    printf("3) --n < ++m = %d\n", r);
    printf("n = %d, m = %d\n", n, m);
    r = ++n * ++m;
    printf("4) ++n * ++m = %d\n", r);
    printf("n = %d, m = %d\n", n, m);
    r = ++n * m++;
    printf("5) ++n * m++ = %d\n", r);
    printf("n = %d, m = %d\n", n, m);
    r = n * ++m;
    printf("6) n * ++m = %d\n", r);
    return 0;
}
