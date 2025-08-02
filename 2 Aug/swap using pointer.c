#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *p = &a, *q = &b;
    int temp;

    printf("Before swap:\n");
    printf("a = %d, b = %d\n", a, b);

    temp = *p;
    *p = *q;
    *q = temp;

    printf("After swap:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
