#include <stdio.h>

int main(void) {
    int n[10] = {0}, a, b;
    while (1) {
        scanf("%d", &a);
        if (a == 0) {
            break;
        }
        n[a / 10]++;
    }
    for (b = 0; b < 10; b++) {
        if (n[b] > 0) {
            printf("%d : %d\n", b, n[b]);
        }
    }
    return 0;
}
```[cite: 16]