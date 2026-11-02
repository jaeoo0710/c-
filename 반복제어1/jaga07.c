#include <stdio.h>

int main(void) {
    int n = 2;
    int a = 0;
    while (n < 5) {
        n++;
        a += n;
    }
    printf("%d\n", a);
    return 0;
}