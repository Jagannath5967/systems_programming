#include<stdio.h>
#include<stdlib.h>

void print_array(void *arr,int size, char type){
    if(type=='i'){
        int *ptr=(int*)arr;
        printf("\nInteger Array : ");
        for(int i=0;i<size;i++){
            printf("%d\t",*(ptr+i));
        }
    }
    if(type=='c'){
        char *ptr=(char*)arr;
        printf("\nCharacter Array : ");
        for(int i=0;i<size;i++){
            printf("%c",*(ptr+i));
        }
    }
    if(type=='f'){
        float *ptr=(float*)arr;
        printf("\nFloat Array : ");
        for(int i=0;i<size;i++){
            printf("%f\t",*(ptr+i));
        }
    }
}

int main(){
    int arr_int[]={4,2,5,1,9};
    char arr_c[]="JAGANNATH";
    print_array(arr_int,(sizeof(arr_int)/sizeof(arr_int[0])),'i');
    print_array(arr_c,(sizeof(arr_c)/sizeof(arr_c[0])),'c');

}