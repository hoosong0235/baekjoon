#include <stdio.h>

int main()
{
    int answer[26] = {0};
    char a[1000001];
    scanf("%s", a);

    for (char *pa = a; *pa; pa++)
    {
        if (*pa >= 'a')
        {
            answer[*pa - 'a']++;
        }
        else
        {
            answer[*pa - 'A']++;
        }
    }

    int max = 0, num = 0, index = 0;

    for (int i = 0; i < 26; i++)
    {
        if (answer[i] > max)
        {
            max = answer[i];
            num = 1;
            index = i;
        }
        else if (answer[i] == max)
        {
            num++;
        }
    }

    if (num > 1)
    {
        printf("?");
    }
    else
    {
        printf("%c", 'A' + index);
    }
}