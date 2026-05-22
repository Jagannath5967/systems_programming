#include <stdio.h>
#include "my_memset.h"

int main() {

    char arr[10];
    my_memset(arr, 'X', sizeof(arr));
    printf("Memory After memset:\n");
    for(int i = 0; i < sizeof(arr); i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
    return 0;
}