//Memcpy() Function

#include<stdio.h>
#include<stdlib.h>

void memcpyfunc(void *src,  void* dest,int n){
    unsigned char *s=(unsigned char*)src;
    unsigned char *d=(unsigned char*)dest;
    for(int i=0;i<n;i++){
        *(d+i)=*(s+i);
    }
}

int main(){
    int source = 12345;
    int destination = 0;

    printf("Before Copy:\n");
    printf("Source      : %d\n", source);
    printf("Destination : %d\n", destination);

    memcpyfunc(&source,&destination, sizeof(source));

    printf("\nAfter Copy:\n");
    printf("Source      : %d\n", source);
    printf("Destination : %d\n", destination);

    return 0;

}