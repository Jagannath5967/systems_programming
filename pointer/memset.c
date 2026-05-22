// Build Your Own memset()

#include <stdio.h>

void my_memset(void *dest, int value, int size) {

    unsigned char *d = (unsigned char*)dest;

    for(int i = 0; i < size; i++) {
        *(d + i) = (unsigned char)value;
    }
}

int main() {

    char arr[10];

    my_memset(arr, 'X', sizeof(arr));

    printf("Memory After memset:\n");

    for(int i = 0; i < sizeof(arr); i++) {
        printf("%c ", arr[i]);
    }

    return 0;
}