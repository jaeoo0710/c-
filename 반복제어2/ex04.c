#include <stdio.h>

int main(void) {
    int n, a, c = 0;
    scanf("%d", &n);
    for (a = 1; a <= n; a++) {
        c += a;
    }
    printf("%d", c);
    return 0;
}