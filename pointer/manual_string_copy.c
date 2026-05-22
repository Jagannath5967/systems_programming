// manual string copy

#include<stdio.h>

int main(){
    char source[]="JAGANNATH";
    char destination[10];

    char *scrptr=source;
    char *destptr=destination;

    while(*scrptr!='\0'){
        *destptr=*scrptr;
        destptr++;
        scrptr++;
    }
     *destptr = '\0';
    printf("%s",destination);
    return 0;

}