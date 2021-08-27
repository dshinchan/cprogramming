/*
Write a program to swap kth node from beginning with kth node from end in a Linked
List

*/

#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>

struct linked{
    int data_868;
    struct linked *next_868;
};

struct linked *kth_swap(struct linked *head);
void PRINTING(struct linked *head_868);

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

    kth_swap(head_868);
    return 0;

}

struct linked *kth_swap(struct linked *head){
    
    int count=0;int k;
    printf("Enter the kth postion\n");
    scanf("%d",&k);

    struct linked *temp = head;
    struct linked *x = NULL;
    struct linked *y = NULL;

    while(temp!=NULL){
        count++;

        if(count+1 == k) x = temp;
        temp = temp->next_868;
    }

    temp = head;
    while(count!=k){

        count--;
        temp = temp->next_868;
        if((count-1) == k ){  
            y=temp;
            break;
        }        
    }

    struct linked *temp1 = x->next_868;
    struct linked *temp2 = y->next_868;

    x->next_868 = temp2;
    y->next_868 = temp1;



    x = temp1->next_868;
    y = temp2->next_868;

    temp1->next_868 = y;
    temp2->next_868 =x;

    PRINTING(head);

    return head;

}

void PRINTING(struct linked *head_868)
{
    while(head_868!=NULL)
    {
        printf("%d->",head_868->data_868);
        head_868 = head_868->next_868;
    }
    printf("\n\n");
}


