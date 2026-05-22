#include<stdio.h>
#include<stdlib.h>


void  memcpyfun(void *src, void *dest, size_t size){
    unsigned char *s=(unsigned char*) src;
    unsigned char *d=(unsigned char*) dest;
    for(int i=0;i<size;i++){
        *(d+i)=*(s+i);
    }

}

int main(){
    int src, dest;
    printf("\n Enter the input source you wish to copy to destination:");
    scanf("%d",&src);
    memcpyfun(&src,&dest,sizeof(src));
    printf("\n after copying:");
    printf("\n dest:%d",dest);

}