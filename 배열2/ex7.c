#include <stdio.h>

int main(void) {
    int n[10][10] = {0}, a, b;
    for (a = 0; a < 5; a++) {
        n[a][0] = 1;
        for (b = 1; b <= a; b++) {
            n[a][b] = n[a - 1][b - 1] + n[a - 1][b];
        }
    }
    for (a = 0; a < 5; a++) {
        for (b = 0; b <= a; b++) {
            printf("%d ", n[a][b]);
        }
        printf("\n");
    }
    return 0;
}
```[cite: 16]