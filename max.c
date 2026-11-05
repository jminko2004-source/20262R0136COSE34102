#include <stdio.h>

int main(void) {
    int a[] = {3, 8, 1, 9, 4};
    int max = a[0];
    for (int i = 1; i < 5; i++)
        if (a[i] > max) max = a[i];
    printf("max = %d\n", max);
    return 0;
}
