#include<stdio.h>
#include<stdlib.h>

void swap(void* a,void* b,size_t size){

    unsigned char* aa = (unsigned char*)a;
    unsigned char* bb = (unsigned char*)b;

    unsigned char* temp=(unsigned char*)malloc(size);;
    if(temp== NULL){
        printf("\n Memory allocation failed ");
    }
    for(size_t i=0;i<size;i++){
        temp[i]=aa[i];
    }
    for(size_t i=0;i<size;i++){
        aa[i]=bb[i];
    }
    for(size_t i=0;i<size;i++){
        bb[i]=temp[i];
    }
    free(temp);
}

int main(){
    char a='j',b='2';
    swap(&a,&b,sizeof(char));
    printf("\nswapped values are");
    printf("\na:%c",a);
    printf("\nb:%c",b);
}