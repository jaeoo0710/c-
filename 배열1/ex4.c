#include <stdio.h>

int main(void) {
    int n, a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (1) {
        scanf("%d", &n);
        if (n < 1 || n > 12) {
            break;
        }
        printf("%d\n", a[n]);
    }
    return 0;
}