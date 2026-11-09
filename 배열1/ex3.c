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
    for (b = 1; b < a; b += 2) {
        printf("%d ", n[b]);
    }
    return 0;
}