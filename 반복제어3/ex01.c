#include <stdio.h>

int main(void) {
    int n, a;
    for (n = 1; n <= 3; n++) {
        for (a = 1; a <= n; a++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}