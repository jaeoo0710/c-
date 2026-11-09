#include <stdio.h>

int main(void) {
    int n[5][5], a, b;
    for (a = 0; a < 5; a++) {
        for (b = 0; b < 5; b++) {
            if (a == 0 || b == 0) {
                n[a][b] = 1;
            } else {
                n[a][b] = n[a - 1][b] + n[a][b - 1];
            }
        }
    }
    for (a = 0; a < 5; a++) {
        for (b = 0; b < 5; b++) {
            printf("%d ", n[a][b]);
        }
        printf("\n");
    }
    return 0;
}