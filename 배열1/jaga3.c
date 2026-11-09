#include <stdio.h>

int main(void) {
    int n[100], a = 0, b;
    while (a < 100) {
        scanf("%d", &b);
        if (b == 0) {
            break;
        }
        n[a++] = b;
    }
    for (b = a - 1; b >= 0; b--) {
        printf("%d ", n[b]);
    }
    return 0;
}