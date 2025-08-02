#include <stdio.h>

int main() {
    int i, len, max, min;
    int array[5];
    len = sizeof(array) / sizeof(int);

    printf("Enter %d integers:\n", len);
    for(i = 0; i < len; i++) {
        scanf("%d", &array[i]);
    }
    
    int *ptr = array;
    max = *ptr;
    min = *ptr;

    for(i = 1; i < len; i++) {
        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }
        if(*(ptr + i) < min) {
            min = *(ptr + i);
        }
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
