#include <stdio.h>

int test(int);

int main()
{
    int n, cnt = 0;
    scanf("%i", &n);
    for (int i = 666; 1; i++)
    {
        if (test(i))
        {
            cnt++;
            if (n == cnt)
            {
                printf("%i", i);
                break;
            }
        }
    }
}

int test(int n)
{
    while (n > 665)
    {
        if (n % 1000 == 666)
        {
            return 1;
        }
        n /= 10;
    }
    return 0;
}