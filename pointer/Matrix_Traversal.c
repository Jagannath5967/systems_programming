//Matrix Traversal

#include<stdio.h>

int main(){
    int arr[2][2]={{1,2},{3,4}};
    int *ptr=&arr[0][0];
    int size=0;
    while(size!=4){
        printf("%d\t",*ptr);
        ptr++;
        size++;
    }
}