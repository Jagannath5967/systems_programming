//Structure Memory Inspector

#include<stdio.h>
#include<stdlib.h>

struct demo{
    int a;
    char b;
    double c;
}
int main(){
    struct demo d;
    printf("Address of struct a:%lu",&(d.a));
    printf("Address of struct b:%lu",&(d.b));
    printf("Address of struct c:%lu",&(d.c));
    printf("Size of struct a:%d",sizeof(d.c));
    printf("Size of struct b:%d",sizeof(d.c));
    printf("Size of struct c:%d",sizeof(d.c));
}