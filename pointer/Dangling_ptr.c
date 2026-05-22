//Dangling Pointer Simulator

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=8;
    int *ptr=(int*)malloc(sizeof(int));
    *ptr=a;
    printf("Before Free stored value:%d\n",*ptr);
    free(ptr);
    printf("Aftre Free stored value:%d\n",*ptr);
    ptr = NULL;

}