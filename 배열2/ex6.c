#include <stdio.h>

int main(void) {
    int n[3][4] = {0}, a, b, c = 0;
    for (a = 0; a < 3; a++) {
        for (b = 0; b < 3; b++) {
            scanf("%d", &n[a][b]);
            n[a][3] += n[a][b];
            n[3][b] += n[a][b];
            c += n[a][b];
        }
    }
    for (a = 0; a < 3; a++) {
        for (b = 0; b < 4; b++) {
            printf("%d ", n[a][b]);
        }
        printf("\n");
    }
    for (b = 0; b < 3; b++) {
        printf("%d ", n[3][b]);
    }
    printf("%d", c);
    return 0;
}
```[cite: 16]