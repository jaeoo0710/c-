#include <stdio.h>

int main(void) {
    int n;
    printf("1. ADD\n2. EDIT\n3. DEL\nSelect: ");
    scanf("%d", &n);
    if (n == 1) {
        printf("You selected ADD.\n");
    } else if (n == 2) {
        printf("You selected EDIT.\n");
    } else if (n == 3) {
        printf("You selected DEL.\n");
    }
    return 0;
}