#include <stdio.h>

int main(void) {
    int n, a;
    for (a = 1; a <= 9; a++) {
        for (n = 2; n <= 4; n++) {
            printf("%d * %d = %2d   ", n, a, n * a);
        }
        printf("\n");
    }
    return 0;
}