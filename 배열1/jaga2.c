#include <stdio.h>

int main(void) {
    int n, a[10];
    for (n = 0; n < 10; n++) {
        a[n] = n + 1;
    }
    for (n = 0; n < 10; n++) {
        printf("%d ", a[n]);
    }
    return 0;
}