#include <stdio.h>

int main(void) {
    int n[10], a, b, c;
    for (a = 0; a < 10; a++) {
        scanf("%d", &n[a]);
    }
    for (a = 0; a < 9; a++) {
        for (b = 0; b < 9 - a; b++) {
            if (n[b] < n[b + 1]) {
                c = n[b];
                n[b] = n[b + 1];
                n[b + 1] = c;
            }
        }
    }
    for (a = 0; a < 10; a++) {
        printf("%d ", n[a]);
    }
    return 0;
}