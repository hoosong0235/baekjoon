#include <stdio.h>
#include <string.h>

int solve(char *s)
{
    int len = 1;

    if (*s == 'c')
    {
        if (*(s + 1) == '=')
            len = 2;
        else if (*(s + 1) == '-')
            len = 2;
    }
    else if (*s == 'd')
    {
        if (*(s + 1) == 'z' && *(s + 2) == '=')
            len = 3;
        else if (*(s + 1) == '-')
            len = 2;
    }
    else if (*s == 'l' && *(s + 1) == 'j')
        len = 2;
    else if (*s == 'n' && *(s + 1) == 'j')
        len = 2;
    else if (*s == 's' && *(s + 1) == '=')
        len = 2;
    else if (*s == 'z' && *(s + 1) == '=' && *(s - 1) != 'd')
        len = 2;

    return len - 1;
}

int main()
{
    char a[101];
    scanf("%s", a);
    int len = strlen(a);

    for (char *pa = a; *pa; pa++)
    {
        len -= solve(pa);
    }

    printf("%i", len);
}