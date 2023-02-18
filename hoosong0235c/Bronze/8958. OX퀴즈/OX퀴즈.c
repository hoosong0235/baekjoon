#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char s[100] = { [0 ... 99] = 0};
        scanf("%s", &s);
        int cons = 0, score = 0;
        for (int j = 0; j < 100; j++) {
            if (s[j] == 'O') {
                cons += 1;
                score += cons;
            } else {
                cons = 0;
            }
        }
        printf("%d\n", score);
    }
    return 0;
}