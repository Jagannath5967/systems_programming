// Byte-Level Memory Viewer
#include <stdio.h>
int main() {
    int x = 21000;
    unsigned char *ptr = (unsigned char*)&x;
    printf("Byte-by-byte memory view:\n");
    for(int i = 0; i < sizeof(x); i++) {
        printf("Byte %d - %p: %x\n", i, ptr+i,*(ptr + i));
    }
    return 0;
}