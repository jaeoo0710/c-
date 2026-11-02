#include <stdio.h>

int main(void) {
    int n, a = 0, b = 0;
    while (1) {
        scanf("%d", &n);
        if (n < 0 || n > 100) {
            break;
        }
        b += n;
        a++;
    }
    if (a > 0) {
        printf("sum : %d\n", b);
        printf("avg : %.1f\n", (float)b / a);
    }
    return 0;
}