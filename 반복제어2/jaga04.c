#include <stdio.h>

int main(void) {
    int n, a, c = 0;
    scanf("%d", &n);
    for (a = n; a <= 100; a++) {
        c += a;
    }
    printf("%d", c);
    return 0;
}