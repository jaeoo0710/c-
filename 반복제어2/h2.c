#include <stdio.h>

int main(void) {
    int n, a;
    scanf("%d %d", &n, &a);
    if (n > a) {
        int c = n;
        n = a;
        a = c;
    }
    for (int i = n; i <= a; i++) {
        printf("%d ", i);
    }
    return 0;
}