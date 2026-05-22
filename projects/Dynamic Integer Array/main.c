#include<stdio.h>
#include<stdlib.h>

struct vector{
    int *data;
    int size;
    int capacity;
};
void init(struct vector *v){
    v->capacity=2;
    v->size=0;
    v->data=(int*)malloc(v->capacity*sizeof(int));
    if(v->data==NULL){
        printf("The Memory allocationis failed");
        exit(EXIT_FAILURE);
    }
}
void push_back(struct vector *v, int value){
    if(v->size==v->capacity){
        v->capacity*=2;
        int* temp=(int*)realloc(v->data,v->capacity*sizeof(int));
        if(temp==NULL){
            printf("Reallocation failed");
            return;
        }
        v->data=temp;
    }
    v->data[v->size]=value;
    v->size++;
}
void pop_back(struct vector *v){//deletes last element
    if(v->size==0){
        printf("\n The vector is empty");
        return;
    }
    v->size--;
}

void destroy(struct vector *v){
    if(v->data!=NULL){
        free(v->data);
        v->data = NULL;
    }
    v->size=0;
    v->capacity=0;

}

void print_vector(struct vector *v){
    printf("\nVector elements:");
    for(int i=0;i<v->size;i++){
        printf("\t%d",v->data[i]);
    }
    printf("\n");
}

int main(){
    struct vector v;

    init(&v);

    push_back(&v, 10);
    push_back(&v, 20);
    push_back(&v, 30);
    push_back(&v, 40);
    print_vector(&v);
    pop_back(&v);
    printf("\nAfter pop_back:\n");
    print_vector(&v);
    destroy(&v);
    printf("\nAfter destroy:\n");
    print_vector(&v);
    return 0;


}