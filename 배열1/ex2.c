#include <stdio.h>

int main(void) {
    int n;
    char a[26];
    for (n = 0; n < 26; n++) {
        a[n] = 'A' + n;
    }
    for (n = 25; n >= 0; n--) {
        printf("%c ", a[n]);
    }
    return 0;
}