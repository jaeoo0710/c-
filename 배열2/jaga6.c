#include <stdio.h>

int main(void) {
    int n[5][4], a, b, c;
    for (a = 0; a < 5; a++) {
        for (b = 0; b < 4; b++) {
            scanf("%d", &n[a][b]);
        }
    }
    for (a = 0; a < 5; a++) {
        c = 0;
        for (b = 0; b < 4; b++) {
            c += n[a][b];
        }
        printf("%d %.1f\n", c, (double)c / 4);
    }
    return 0;
}
```[cite: 16]