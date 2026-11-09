#include <stdio.h>

int main(void) {
    int n[10], a = 0, b = 0, c;
    for (c = 0; c < 10; c++) {
        scanf("%d", &n[c]);
        if (c % 2 == 1) {
            a += n[c];
        } else {
            b += n[c];
        }
    }
    printf("sum : %d\n", a);
    printf("avg : %.1f\n", (double)b / 5);
    return 0;
}