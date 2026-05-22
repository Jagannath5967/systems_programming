#include "my_memset.h"

void* my_memset(void *dest, int value, int size) {

    unsigned char *d = (unsigned char*)dest;

    for(int i = 0; i < size; i++) {
        *(d + i) = (unsigned char)value;
    }

    return dest;
}