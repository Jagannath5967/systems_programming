#include<stdio.h>

#define SIZE 5

struct Queue{
    int arr[SIZE];
    int front;
    int rear;
};

void init(struct Queue *q){
    q->front = -1;
    q->rear = -1;
}
int isEmpty(struct Queue *q){
    return q->front == -1;
}
int isFull(struct Queue *q){
    return (q->rear + 1) % SIZE == q->front;
}

void enqueue(struct Queue *q, int value){

    // Queue Full
    if(isFull(q)){
        printf("\nQueue Overflow");
        return;
    }

    // First insertion
    if(isEmpty(q)){
        q->front = q->rear = 0;
    }

    // Normal insertion
    else{
        q->rear = (q->rear + 1) % SIZE;
    }

    q->arr[q->rear] = value;
}

int dequeue(struct Queue *q){

    if(isEmpty(q)){
        printf("\nQueue Underflow");
        return -1;
    }

    int removed = q->arr[q->front];

    // Single element case
    if(q->front == q->rear){
        q->front = q->rear = -1;
    }
    // Normal dequeue
    else{
        q->front = (q->front + 1) % SIZE;
    }
    return removed;
}
int peek(struct Queue *q){
    if(isEmpty(q)){
        printf("\nQueue is Empty");
        return -1;
    }
    return q->arr[q->front];
}
void printQueue(struct Queue *q){
    if(isEmpty(q)){
        printf("\nQueue is Empty");
        return;
    }
    int i = q->front;
    printf("\nQueue Elements: ");
    while(1){
        printf("%d ", q->arr[i]);
        if(i == q->rear){
            break;
        }
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main(){
    struct Queue q;
    init(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    printQueue(&q);
    printf("\nDequeued: %d", dequeue(&q));
    printQueue(&q);
    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60);
    printQueue(&q);
    return 0;
}