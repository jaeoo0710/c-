#include <stdio.h>

int main(void) {
    int n[11] = {0}, a, b = 0;
    while (1) {
        scanf("%d", &a);
        if (a < 1 || a > 10) {
            break;
        }
        n[a]++;
    }
    for (b = 1; b <= 10; b++) {
        if (n[b] > 0) {
            printf("%d : %d\n", b, n[b]);
        }
    }
    return 0;
}