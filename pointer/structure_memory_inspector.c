//Structure Memory Inspector

#include<stdio.h>
#include<stdlib.h>

struct demo{
    int a;
    double c;
    char b;
};
int main(){
    struct demo d;
    printf("\nAddress of struct int:%p",(void*)&(d.a));
    printf("\nAddress of struct double:%p",(void*)&(d.c));
    printf("\nAddress of struct b:%p",(void*)&(d.b));
    printf("\n\nSize of struct a:%zu",sizeof(d.a));
    printf("\nSize of struct b:%zu",sizeof(d.b));
    printf("\nSize of struct c:%zu",sizeof(d.c));
    printf("\n\nSize of Structure Demo:%zu",sizeof(d));
}