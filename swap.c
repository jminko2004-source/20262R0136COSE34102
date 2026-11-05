#include <stdio.h>

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

int main(void) {
    int a = 10, b = 20;
    printf("before: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("after:  a=%d, b=%d\n", a, b);
    return 0;
}
