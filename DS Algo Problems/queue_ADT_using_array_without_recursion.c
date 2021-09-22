//CREATOR:DAYA AGRAWAL(2005868)
#include<stdio.h>
#include<stdlib.h>

int t;
struct queue_868
{
    int Q[10];
    int front_868;
    int rear_868;
};

void display(struct queue_868 *q);
void delete(struct queue_868 *q1 ,int *t);
void insert(struct queue_868 *q1,int n);
void copy(struct queue_868 *q, struct queue_868 *q1);
void reverse(struct queue_868 *q, struct queue_868 *q1);

//----------------------------------------------------------

int main()
{
    int item,choice;
    struct queue_868 s1;
    s1.front_868=-1;
    s1.rear_868=-1;
    
    struct queue_868 s2;
    s2.front_868=-1;
    s2.rear_868=-1;

    while(1)
    {
        printf("\n\n_______________________________________________________________");
        printf("\n\nPress 1 - INSERT\n");
        printf("Press 2 - DELETE\n");
        printf("Press 3 - DISPLAY\n");
        printf("Press 4 - COPY\n");
        printf("Press 5 - REVERSE\n");
        printf("press 6 - EXIT\n");

        printf("\nEnter the choice: ");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
            case 1:{

                printf("Enter the item you wish to push: ");
                scanf("%d",&item);
                insert(&s1,item);
                break;
            
            }

            case 2:{
                delete(&s1,&t);
                break;
            }
            
            case 3:{
                display(&s1);
                break;
            }

            case 4:{
                copy(&s1,&s2);
                break;
            }

            case 5:{
                reverse(&s1 , &s2);
                break;
            }

            default:{
                printf("---------EXIT------------\n");
                break;
            }
        }
    }
    return 0;
}


//--------------------------------------------

void delete(struct queue_868 *q1 ,int *t)
{
    if(q1->front_868==-1 && q1->rear_868==-1)
    {
        printf("Underflow\n");
        return;

    }else{
        if(q1->rear_868 == q1->front_868){
            q1->front_868 == -1;
            *t = q1->Q[q1->rear_868];
            q1->rear_868=-1;
        }else{
            *t = q1->Q[q1->front_868];
            (q1->front_868)++;
        }
    }
    printf("\nDeleted:- %d\n",*t);

}

//-----------------------------------------

void insert(struct queue_868 *q1,int n)
{
    if(q1->front_868 ==-1 && q1->rear_868==-1)
    {
        q1->front_868=q1->rear_868=0;
        q1->Q[q1->rear_868]=n;
    }
    else{
        if(q1->rear_868==9)
        {
                printf("Overflow\n");
        }
        else
        {
            q1->rear_868++;
            q1->Q[q1->rear_868]=n;
        }
    }
}

//--------------------------------------------

void display(struct queue_868 *q)
{    
    if(q->rear_868==-1){
        printf("---EMPTY---\n");
        return;
    }else{
       int i;
       printf("\n\n--PRINTING--\n\n");
       for(i = q->front_868;i<=q->rear_868;i++){
            printf("%d ",q->Q[i]);
       }
    }
}

//----------------------------------------------

void copy(struct queue_868 *q, struct queue_868 *q1){

    if(q->front_868 == -1 && q->rear_868 == -1){
        printf("QUEUE_868 IS EMPTY");
        return;
    }

    for(int i=q->front_868;i<=q->rear_868;i++){
        insert(q1,q->Q[i]);

    }

    display(q1);

}

//-------------------------------------------------------

void reverse(struct queue_868 *q, struct queue_868 *q1){

    if(q->front_868 == -1 && q->rear_868 == -1){
        printf("QUEUE_868 IS EMPTY");
        return;
    }

    q1->front_868 = -1;
    q1->rear_868 = -1;

    for(int i=q->rear_868;i>=q->front_868;i--){
        insert(q1,q->Q[i]);
    }

    q->front_868 = -1;
    q->rear_868 = -1;


    for(int i=q1->front_868;i<=q1->rear_868;i++){
        insert(q,q1->Q[i]);
    }

    display(q);

}

//------------------------------------------