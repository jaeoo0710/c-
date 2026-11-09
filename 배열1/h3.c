#include <stdio.h>

int main(void) {
    int n[10], a = 0, b = 0, c;
    for (c = 0; c < 10; c++) {
        scanf("%d", &n[c]);
        if (c % 2 == 0) {
            a += n[c];
        } else {
            b += n[c];
        }
    }
    printf("odd : %d\n", a);
    printf("even : %d\n", b);
    return 0;
}