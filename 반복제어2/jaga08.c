#include <stdio.h>

int main(void) {
    int n, a;
    for (n = 2; n <= 4; n++) {
        for (a = 1; a <= 4; a++) {
            printf("%d * %d = %2d   ", n, a, n * a);
        }
        printf("\n");
    }
    return 0;
}