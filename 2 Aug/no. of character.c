#include <stdio.h>

int main() {
    char array[10] = "Naisha";
    char *ptr = array;  
    int len = 0;
    
    while (*ptr != '\0') {
        len++;
        ptr++;
    }
    
    printf("Number of characters in string: %d\n", len);
    
    return 0;
}
