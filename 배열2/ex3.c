#include <stdio.h>

int main(void) {
    int n[20], a, b;
    n[0] = 1;
    n[1] = 1;
    for (a = 2; a < 20; a++) {
        n[a] = n[a - 1] + n[a - 2];
    }
    for (b = 0; b < 20; b++) {
        printf("%d ", n[b]);
    }
    return 0;
}
```[cite: 16]