#include <stdio.h>

int main(void) {
    int n[11] = {0}, a, b;
    while (1) {
        scanf("%d", &a);
        if (a == 0) {
            break;
        }
        n[a / 10]++;
    }
    for (b = 10; b >= 0; b--) {
        if (n[b] > 0) {
            printf("%d : %d\n", b * 10, n[b]);
        }
    }
    return 0;
}
```[cite: 16]