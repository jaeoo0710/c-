#include <stdio.h>

int main(void) {
    int n[7] = {0}, a, b;
    for (a = 0; a < 10; a++) {
        scanf("%d", &b);
        n[b]++;
    }
    for (a = 1; a <= 6; a++) {
        printf("%d : %d\n", a, n[a]);
    }
    return 0;
}
```[cite: 16]