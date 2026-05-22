//Swap two integers using pointers.

#include<stdio.h>

int main(){
    int a,b, *temp;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);

    int *ptra=&a;
    int *ptrb=&b;
    
    printf("Address of A and b Before swaping.\n");
    printf("a:%p\n",ptra);
    printf("b:%p\n",ptrb);
    
    temp=ptra;
    ptra=ptrb;
    ptrb=temp;
    
    printf("After swaping:\n");
    printf("a:%p\n",ptra);
    printf("b:%p\n",ptrb);
}