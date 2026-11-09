#include <stdio.h>

int main(void) {
    int n[100], a = 0, b, c;
    while (a < 100) {
        scanf("%d", &b);
        if (b == 0) {
            break;
        }
        n[a++] = b;
    }
    printf("%d\n", a);
    for (c = 0; c < a; c++) {
        if (n[c] % 2 != 0) {
            printf("%d ", n[c] * 2);
        } else {
            printf("%d ", n[c] / 2);
        }
    }
    return 0;
}