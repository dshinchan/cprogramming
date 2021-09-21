/*

Write a menu driven program to perform the following operations in a QUEUE ADT (Using linked list) 
by using suitable user defined functions for each case.

1. Inserting an element into the queue.

2. Deleting an element from the queue.
[Define Isempty( ) function to check underflow].

3. Display the element of the queue.

*/

#include<stdio.h>
#include <stdlib.h>

struct queue{
    int data;
    struct queue *next;

};

struct queue *front = NULL;
struct queue *rear = NULL; 

//-----------------------------

void insert(int x);
void delete();
void display();
int isempty();

//------------------------------

int main(){

    while(1){
        printf("\n\n-------OPTIONS-------------\n\n");
        printf("Press 1 - insert\n");
        printf("press 2 - delete\n");
        printf("press 3 - display\n\n");

        int choice;
        printf("ENTER YOUR CHOICE: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:{
                int x;
                printf("ENTER data: ");
                scanf("%d",&x);
                insert(x);
                break;
            }

            case 2:{
                delete();
                break;
            }

            case 3:{
                display();
                break;
            }

            default :{
                printf("\n\n---EXIT----\n\n");
                return 0;
            }
        }
    }

}

//------------------------------------------------

void insert(int x){
    struct queue *newnode;
    newnode = (struct queue*)malloc(sizeof(struct queue));
    newnode->data = x;
    newnode->next = NULL;
    if(front == NULL && rear == NULL){
        front = newnode; 
        rear = newnode;
    }else{

        rear->next = newnode;
        rear = newnode;

    }

}

//-------------------------------------------

void display(){
    if(front == NULL && rear == NULL){
        printf("LIST IS EMPTY");
        return ;
    }else{

        struct queue *temp;
        temp = front;
        while(temp!=NULL){
            printf("%d-> ",temp->data);
            temp = temp->next;
        }
    }
}

//-------------------------------------------

int isempty(){
   if(front == NULL && rear == NULL) return 0;
   else return 1;

}

//-----------------------------------------

void delete(){
    
    struct queue *temp;
    temp = front;

    if(!isempty()){
        printf("LIST IS EMPTY");
        return ;
    }else{
        printf("%d",temp->data);
        front = front->next;
        free(temp);
    }
}

//-----------------------------------------