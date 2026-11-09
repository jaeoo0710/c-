#include <stdio.h>

int main(void) {
    int n[4][3], a, b, c = 0;
    for (a = 0; a < 4; a++) {
        for (b = 0; b < 3; b++) {
            scanf("%d", &n[a][b]);
        }
    }
    for (a = 0; a < 4; a++) {
        int b = 0;
        for (int i = 0; i < 3; i++) {
            b += n[a][i];
        }
        printf("%d\n", b);
        c += b;
    }
    printf("%d", c);
    return 0;
}
```[cite: 16]