#include <stdio.h>
#include <string.h>

int a, b;

int recursion(const char *s, int l, int r)
{
    b++;
    if (l >= r)
        return 1;
    else if (s[l] != s[r])
        return 0;
    else
        return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char *s)
{
    return recursion(s, 0, strlen(s) - 1);
}

int main()
{
    int t;
    scanf("%i", &t);

    char s[1001];
    for (int i = 0; i < t; i++)
    {
        a = 0;
        b = 0;
        scanf("%s", &s);
        a = isPalindrome(s);
        printf("%i %i\n", a, b);
    }
}