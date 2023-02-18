#include <stdio.h>

int main(void) {
    unsigned int n;
    scanf("%u", &n);
    switch (n % 5) {
        case 0: printf("%u", n / 5); break;
        case 1: if (n > 5) printf("%u", (n - 6) / 5 + 2); else printf("-1"); break;
        case 2: if (n > 11) printf("%u", (n - 12) / 5 + 4); else printf("-1"); break;
        case 3: printf("%u", (n - 3) / 5 + 1); break;
        case 4: if (n > 8) printf("%u", (n - 9) / 5 + 3); else printf("-1"); break;
    }
    
    return 0;
}