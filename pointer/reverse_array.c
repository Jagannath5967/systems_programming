//Reverse Array Using Pointers ONLY

#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};
    int *start;
    int *end;
    int temp,n=sizeof(arr)/sizeof(arr[0]);
    start=arr;
    end=arr+n-1;
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }

    printf("reversed array\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;

}