#include <stdio.h>
#include <math.h>

int main()
{
    float x = 16.165, y = 7.433 * pow(10, -3), z = 8.13 * pow(10, 4), s;
    s = (pow((y + (pow(x - 1, 1 / 3))), 1 / 4)) / (fabs(x - y) * ((pow(sin(z), 2) + tan(z))));
    printf("Result s = %f\n", s);
    return 0;
}