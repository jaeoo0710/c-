#include <stdio.h>

int main(void) {
    int n, a;
    for (n = 1; n <= 5; n++) {
        for (a = 1; a <= 5 - n; a++) {
            printf(" ");
        }
        for (a = 1; a <= 2 * n - 1; a++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}