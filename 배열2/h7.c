#include <stdio.h>

int main(void) {
    int n[4][2], a, b, c = 0;
    for (a = 0; a < 4; a++) {
        for (b = 0; b < 2; b++) {
            scanf("%d", &n[a][b]);
            c += n[a][b];
        }
    }
    for (a = 0; a < 4; a++) {
        printf("%d ", (n[a][0] + n[a][1]) / 2);
    }
    printf("\n");
    for (b = 0; b < 2; b++) {
        printf("%d ", (n[0][b] + n[1][b] + n[2][b] + n[3][b]) / 4);
    }
    printf("\n");
    printf("%d", c / 8);
    return 0;
}
```[cite: 16]