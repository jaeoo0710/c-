#include <stdio.h>

int main(void) {
    int n[26] = {0}, a, b;
    while (1) {
        scanf(" %c", (char*)&b);
        if (b < 'A' || b > 'Z') {
            break;
        }
        n[b - 'A']++;
    }
    for (a = 0; a < 26; a++) {
        if (n[a] > 0) {
            printf("%c : %d\n", a + 'A', n[a]);
        }
    }
    return 0;
}
```[cite: 15]