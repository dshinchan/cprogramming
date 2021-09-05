#include<stdio.h>
#include <stdlib.h>

struct linked{
    int data;
    struct linked *next;
    struct linked *prev;
}*start = NULL, *lt = NULL;

void create(struct linked **start , struct linked **lt);
void display_front(struct linked *start);
void display_end(struct linked *lt);
void insert_frist(struct linked *start);
void delete_frist(struct linked *start);
void insert_after_node(struct linked *start);  
void insert_before_node(struct linked *start); 
void delete_position_node(struct linked *start);
void reverse(struct linked *start , struct linked *lt);

//---------------------------------------------------------------

int main(){

    while(1){
        printf("\n\n-----------------------------------------------------------");
        printf("\n\n"); 
        int choice;
        printf("press 1 - to create a list\n");
        printf("press 2 - treaversing from front\n");
        printf("press 3 - traversing from end\n");
        printf("press 4 - add a node at first\n");
        printf("press 5 - deleting a node at first\n");
        printf("press 6 - Adding a node at after a given data\n");
        printf("press 7 - Adding a node at before a given data\n");
        printf("press 8 - delete a node at a position\n");
        printf("press 9 - reverse linked list");

        printf("\n\nEnter your choice:\n\n");
        scanf("%d",&choice);


        switch(choice){
            case 1:{
                create(&start,&lt);
                break;
            }

            case 2:{
                display_front(start);
                break;
            }

            case 3:{
                display_end(lt);
                break;
            }

            case 4:{
                insert_frist(start);
                break;
            } 

            case 5:{
                delete_frist(start);
                break;
            }

            case 6:{
                insert_after_node(start);
                break;
            }

            case 7:{
                insert_before_node(start);
                break;

            }

            case 8:{
                delete_position_node(start);
                break;
            }

            case 9:{
                reverse(start , lt);
                break;
            }

            default:{
                printf("\n\nEXIT\n\n");
                return 0;
            }
        }
    }


}

//--------------------------------------------------------

//case1:

void create(struct linked **start , struct linked **lt){
    printf("Enter the data or press -1 to exist");
    while(1){
        struct linked *new = (struct linked*)malloc(sizeof(struct linked));
        new->next==NULL;
        new->prev=NULL;
        scanf("%d",&new->data);

        if(new->data==-1) break;

        if((*start) == NULL){
            *start = new;
            *lt =new;
        }else{
            new->prev=*lt;
            (*lt)->next = new;
            *lt = new;
        }
    }

}

//-----------------------------------------------

//case2:

void display_front(struct linked *start){
    struct linked *t1 = start;

    while(t1!=NULL){
        printf("%d->",t1->data);
        t1 = t1->next;
    }
}

//------------------------------------------------

//case3:

void display_end(struct linked *lt){
    struct linked *t2 = lt;

    while(t2!=NULL){
        printf("%d->",t2->data);
        t2 = t2->prev;
    }
}

//----------------------------------------------------

//case4:

void insert_frist(struct linked *start){
    printf("enter new data");
    struct linked *new = (struct linked*)malloc(sizeof(struct linked));
    scanf("%d",&new->data);
    new->next=start;
    start->prev=new;
    start = new;

    //printf("\n\nAfter adding node in front\n\n");
    display_front(start);
    printf("\n");
}

//--------------------------------------------------------------

//case5:

void delete_frist(struct linked *start){

    struct linked *t = start;
    start = start->next;
    start->prev=NULL;
    free(t);

    //printf("\n\nAfter deleting first node\n\n");
    display_front(start);
    printf("\n");
}

//---------------------------------------------------

//case6:

void insert_after_node(struct linked *start){

    struct linked *t = start;
    int search;
    printf("enter new data you want to insert and after which node you want to insert");
    struct linked *new = (struct linked*)malloc(sizeof(struct linked));
    scanf("%d %d",&new->data,&search);
    new->next=NULL;
    new->prev = NULL;   

    while(t->data!=search){
     //   printf("%d\n",t->data);
        t=t->next;
    }

    new->next = t->next;
    t->next = new;
    new->prev = t;
    new->next->prev=new;

    display_front(start);

}

//-------------------------------------------------------

//case7:

void insert_before_node(struct linked *start){

    struct linked *t = start;
    int search;
    printf("enter new data you want to insert and before which node you want to insert");
    struct linked *new = (struct linked*)malloc(sizeof(struct linked));
    scanf("%d %d",&new->data,&search);
    new->next=NULL;
    new->prev = NULL;   

    while(t->data!=search){
     //   printf("%d\n",t->data);
        t=t->next;
    }

    t->prev->next = new;
    new->prev = t->prev;
    new->next=t;
    t->prev = new;

    display_front(start);

}

//--------------------------------------------------

//case8:

void delete_position_node(struct linked *start){
    int count =1,pos;
    struct linked *t = start;
    printf("Enter the position of the node you want to delete\n");
    scanf("%d",&pos);
    if(pos == 1 ){
        delete_frist(start);
        return;
    }

    while(count!=pos){
        t = t->next;
        count++;
    }

    t->prev->next = t->next;
    t->next->prev = t->prev;
    t=NULL;
    free(t);

    display_front(start);
}

//---------------------------------------------------

//case9:

void reverse(struct linked *start , struct linked *lt){
    struct linked *temp=start;
    struct linked *curr=NULL;
    int flag=0;
    while(temp!=NULL){
        curr =temp->next;
        start->prev = temp;
        temp->next = start;
        if(flag == 0) start->next =NULL;
        flag =1;
        temp->prev = NULL;
        start = temp;
        temp=curr;
    }

    display_front(start);
    
}
