#include <stdio.h>

int main(void) {
    int n[5][5] = {0}, a, b;
    n[0][0] = 1;
    n[0][2] = 1;
    n[0][4] = 1;
    for (a = 1; a < 5; a++) {
        for (b = 0; b < 5; b++) {
            int c = 0;
            if (b > 0) c += n[a - 1][b - 1];
            if (b < 4) c += n[a - 1][b + 1];
            n[a][b] = c;
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