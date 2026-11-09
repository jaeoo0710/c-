#include <stdio.h>

int main(void) {
    int n, a[5];
    for (n = 0; n < 5; n++) {
        scanf("%d", &a[n]);
    }
    for (n = 0; n < 5; n++) {
        printf("%d ", a[n]);
    }
    return 0;
}