#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* createNode(int value){

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    if(newNode == NULL){
        printf("\nMemory Allocation Failed");
        exit(EXIT_FAILURE);
    }

    newNode->data = value;
    newNode->next = NULL;

    return newNode;
}

void insertAtEnd(struct Node **head, int value){

    struct Node *newNode = createNode(value);

    // Empty List
    if(*head == NULL){
        *head = newNode;
        return;
    }

    // Traverse till last node
    struct Node *temp = *head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    // Connect last node to new node
    temp->next = newNode;
}

void traverseList(struct Node *head){

    if(head == NULL){
        printf("\nList is Empty");
        return;
    }

    struct Node *temp = head;

    printf("\nLinked List:\n");

    while(temp != NULL){

        printf("Data = %d\tAddress = %p\tNext = %p\n",
                temp->data,
                (void*)temp,
                (void*)temp->next);

        temp = temp->next;
    }
}

void freeList(struct Node **head){

    struct Node *temp;

    while(*head != NULL){

        temp = *head;

        *head = (*head)->next;

        free(temp);
    }

    printf("\nList Memory Freed Successfully\n");
}

int main(){

    struct Node *head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    traverseList(head);

    freeList(&head);

    return 0;
}