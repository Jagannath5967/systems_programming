//Manual String Length (strlen)


#include<stdio.h>

int main(){
    char array[]="Jagannath";
    int i=0;
    char *ptr=array;
    while(*ptr!='\0'){
        ptr++;
        i++;
    }
    printf("length of array: %d\n",i);
}