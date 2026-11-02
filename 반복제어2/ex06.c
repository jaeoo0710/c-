#include <stdio.h>

int main(void) {
    int n, a = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        a += n;
    }
    double b = (double)a / 5;
    printf("sum : %d\n", a);
    printf("avg : %.1f", b);
    return 0;
}