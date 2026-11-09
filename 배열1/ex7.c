#include <stdio.h>

int main(void) {
    int n[10], a = 0, b;
    for (b = 0; b < 10; b++) {
        scanf("%d", &n[b]);
        a += n[b];
    }
    printf("sum = %d\n", a);
    printf("avg = %.1f\n", (double)a / 10);
    return 0;
}