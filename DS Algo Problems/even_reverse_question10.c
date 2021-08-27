/*
Write a program to reverse only even position nodes in a singly linked list.
*/

#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>

struct linked{
    int data_868;
    struct linked *next_868;
};

void PRINTING(struct linked *head_868_868);  
struct linked *Reverse(struct linked *head_868_868); 
struct linked *even_reverse(struct linked *head_868,struct linked *head2);                     

int main()
{
    struct linked* head_868 = NULL;struct linked* temp = NULL;
    int count =1;
    while(1)
    {
       struct linked *newnode_868 = (struct linked*)malloc(sizeof(struct linked));
       printf("enter the data_868 or enter -1 to exist \n");

       scanf("%d",&newnode_868->data_868);
       if(newnode_868->data_868 == -1) break;
       if(head_868 == NULL)
        {
            head_868 = newnode_868;
        }
           
        if(temp == NULL) temp = newnode_868;
        else{
            temp->next_868 = newnode_868;
            temp = temp->next_868;
        }
    }

    printf("\nEntered linked list is:\n");
    PRINTING(head_868);

    struct linked *head2 = head_868->next_868;
    struct linked *a = head_868;
    struct linked *b = head_868->next_868;
    
    while(a->next_868!=NULL && b->next_868!=NULL){
        a->next_868=b->next_868;
        a=b->next_868;

        b->next_868 = a->next_868;
        b = b->next_868;
    }

    a->next_868 = NULL;

    head2 = Reverse(head2);

    head_868 = even_reverse(head_868,head2);

    printf("--------------------------------------------------");
    printf("\n\nfinal linked list is:\n");
    PRINTING(head_868);

    printf("\n\n\n");

}


void PRINTING(struct linked *head_868){
    while(head_868!=NULL)
    {
        printf("%d->",head_868->data_868);
        head_868 = head_868->next_868;
    }
    printf("\n\n");
}

struct linked *Reverse(struct linked *head_868){
    struct linked* current = head_868->next_868;
    struct linked* prev = NULL;
    while(current!=NULL){
        if(prev == NULL)
            head_868->next_868 = NULL;

        prev = current;
        current = current->next_868;
        prev->next_868 = head_868;
        head_868 = prev;
    }
    return head_868;
}

struct linked *even_reverse(struct linked *head_868,struct linked *head2){
    struct linked *a = head_868;
    struct linked *temp = NULL;
    while(a!=NULL && head2!=NULL){
        temp = a->next_868;
        a->next_868 = head2;
        a = temp;

        temp = head2->next_868;
        head2->next_868 = a;
        head2 = temp;
    }

    return head_868;

}
