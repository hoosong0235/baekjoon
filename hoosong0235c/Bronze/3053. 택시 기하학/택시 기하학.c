#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    double n;
    scanf("%lf", &n);

    printf("%lf\n%lf", n * n * M_PI, n * n * 2);
}