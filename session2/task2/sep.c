#include <stdio.h>
#include <math.h>

int main(void)
{
    long double a = 2 * (pow(10, 32));
    long double b = 2 * (pow(10, 33));
    long double c;

    c = a + b;
    printf("%Lf\n",c);
}