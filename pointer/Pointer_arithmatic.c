#include<stdio.h>

int main(){
    int a[5];
    double b[5];
    char c[5];
    int *ptr=a;
    double *dptr=b;
    char *cptr=c;

    int i;
    printf("Integer\t\tDouble\t\tCharacter\n");
    for(i=1;i<5;i++){
        printf("%ld\t\t%ld\t\t%ld\n",
            (long)((char*)(ptr+i) - (char*)(ptr+i-1)),
            (long)((char*)(dptr+i) - (char*)(dptr+i-1)),
            (long)((char*)(cptr+i) - (char*)(cptr+i-1))
        );    }
}