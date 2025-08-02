#include <stdio.h>

int main() {
    int i, len, temp;
    int array[5] = {1, 2, 3, 4, 5};
    
    len = sizeof(array)/sizeof(int);
    
    for (i = 0; i < len / 2; i++) {
        temp = array[i];
        array[i] = array[len - i - 1];
        array[len - i - 1] = temp;
    }

    // Print the reversed array
    for (i = 0; i < len; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
