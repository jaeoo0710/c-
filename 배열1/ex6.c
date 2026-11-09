#include <stdio.h>

int main(void) {
    int n[10], a, b, c;
    for (a = 0; a < 10; a++) {
        scanf("%d", &n[a]);
    }
    b = n[0];
    c = n[0];
    for (a = 1; a < 10; a++) {
        if (n[a] > b) {
            b = n[a];
        }
        if (n[a] < c) {
            c = n[a];
        }
    }
    printf("%d %d", b, c);
    return 0;
}