#include <stdio.h>

int main(void) {
    int n, a = 0, b = 0;
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        b += n;
        a++;
    }
    printf("cnt = %d\n", a);
    printf("sum = %d\n", b);
    printf("avg = %.2f\n", (float)b / a);
    return 0;
}