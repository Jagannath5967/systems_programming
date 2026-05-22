//Wild Pointer Detector

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    printf("Wild ptr: %p",ptr);
    ptr=NULL;
}