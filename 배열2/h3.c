#include <stdio.h>

int main(void) {
    int n[10], a, b;
    scanf("%d %d", &n[0], &n[1]);
    for (a = 2; a < 10; a++) {
        n[a] = (n[a - 2] + n[a - 1]) % 10;
    }
    for (b = 0; b < 10; b++) {
        printf("%d ", n[b]);
    }
    return 0;
}
```[cite: 16]