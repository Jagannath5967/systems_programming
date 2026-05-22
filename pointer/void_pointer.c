//VOID POINTER POWER

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=8;
    char c='J';
    void *vp;
    vp=&a;
    printf("\nAddress of VP:%p",(int*)vp);
    printf("\nValue at VP:%d",*(int*)vp);
    
    vp=&c;
    printf("\n\nAddress of VP:%p",vp);
    printf("\nValue at VP:%c",*(char*)vp);



}