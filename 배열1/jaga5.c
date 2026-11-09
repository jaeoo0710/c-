#include <stdio.h>

int main(void) {
    int n[10], a, b = 1000;
    for (a = 0; a < 10; a++) {
        scanf("%d", &n[a]);
        if (n[a] < b) {
            b = n[a];
        }
    }
    printf("%d", b);
    return 0;
}