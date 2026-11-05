#include <stdio.h>

int main(void) {
    int a = 0, b = 1;
    for (int i = 0; i < 15; i++) {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
