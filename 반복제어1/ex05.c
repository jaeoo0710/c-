#include <stdio.h>

int main(void) {
    int n, a = 0, b = 101;
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        if (n >= 1 && n <= 100) {
            if (n > a) {
                a = n;
            }
            if (n < b) {
                b = n;
            }
        }
    }
    printf("MAX = %d\n", a);
    printf("MIN = %d\n", b);
    return 0;
}