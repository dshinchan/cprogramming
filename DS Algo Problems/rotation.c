/*
Given a singly linked list, rotate the linked list counter-clockwise by k nodes. Where k is
a given positive integer. For example, if the given linked list is 10-&gt;20-&gt;30-&gt;40-&gt;50-&gt;60
and k is 4, the list should be modified to 50-&gt;60-&gt;10-&gt;20-&gt;30-&gt;40. Assume that k is
smaller than the count of nodes in linked list.
*/

#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>

struct linked{
    int data_868;
    struct linked *next_868;
};

struct linked *kth_rotation(struct linked *head);
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

    kth_rotation(head_868);
    return 0;

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

struct linked *kth_rotation(struct linked *head){

    int count=0;int k;
    printf("Enter the rotation number \n");
    scanf("%d",&k);

    struct linked *temp = head;
    while(temp->next_868!=NULL){
        temp = temp->next_868;
    }

    while(count!=k){
        count++;
        temp ->next_868 = head;
        temp = head;
        head = head->next_868;
        temp->next_868 = NULL;
    }

    PRINTING(head);
    return head;



}
