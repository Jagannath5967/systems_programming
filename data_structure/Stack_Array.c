#include<stdio.h>
#include<stdlib.h>
#define MAX 100

struct Stack{
    int arr[MAX];
    int top;
};

void init(struct Stack *s){
    s->top=-1;
}

void push(struct Stack *s, int value){
    if(s->top==MAX-1){
        printf("\nStack is full");
        return;
    }
    s->top++;
    s->arr[s->top]=value;
}
int pop(struct Stack *s){
    if(s->top==-1){
        printf("\nStack is empty");
        return -1;
    }
    int pop_element=s->arr[s->top];

    s->top--;
    return pop_element;
}

int peek(struct Stack *s){
    if(s->top==-1){
        printf("\nStack is empty");
        return -1;
    }
    return s->arr[s->top];
}
int isEmpty(struct Stack *s){
    return s->top==-1;
}
int isFull(struct Stack *s){
    return s->top==MAX-1;
}

void printStack(struct Stack *s){
    if(s->top==-1){
        printf("\n stack is empty");
        return;
    }
    printf("\nStack Elements are:");
    for(int i=s->top;i>=0;i--){
        printf("\t%d",s->arr[i]);
    }
}

int main(){
    struct Stack s;
    init(&s);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    printStack(&s);
    printf("\nTop Element is: %d\n", peek(&s));
    int popped = pop(&s);
    printf("\nReturned Popped Element: %d", popped);
    printStack(&s);
    printf("\n");
    return 0;
}