#include<stdio.h>
#include<string.h>  
#include <stdlib.h>

struct linked{
    
    int rollno;
    float cgpa;
    char name[30],city[30],branch[30];
    struct linked *next;
};

struct header{
    int data;
    struct linked *next;
};

struct header *create(struct header *head);
void display(struct header *head);
void count_nodes(struct header *head);
void display_branch(struct header *head);
void display_cgpa(struct header *head);

//----------------------------------------------------------------------------

int main(){

    struct header *head = (struct header*)malloc(sizeof(struct header));
    head->data = 0;
    int choice;
    while(1){
        printf("press 1 - Create");
        printf("press 2 - Display Student information");
        printf("press 3 - Display the total number of nodes");
        printf("press 4 - Display the students’ details belonging to a particular branch");
        printf("press 5 - Display the students’ details securing &gt; 7.5 CGPA and belonging to a given branch.");

        printf("Enter your choice \n");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                head=create(head);
                break;
            }

            case 2:{
                display(head);
                break;
            }

            case 3:{
                count_nodes(head);
                break;
            }

            case 4:{
                display_branch(head);
                break;
            }

            case 5:{
                display_cgpa(head);
                break;
            }

            default :{
                printf("\n\nEXIT\n\n");
                return 0;
            }
        }
    }
    return 0;
}

//--------------------------------------------------------------------------------

struct header *create(struct header *head){

    int count =1 ;
    struct linked *temp=NULL;
    while(count!=0){
        printf("1 to continue else 0 to exist");
        scanf("%d",&count);
        if(count == 0) return head;
        struct linked *new = (struct linked*)malloc(sizeof(struct linked));
        printf("Enter the name : ");
        scanf("%s",new->name);
        printf("Enter the Rollnumber : ");
        scanf("%d",&new->rollno);
        printf("Enter the cgpa : ");
        scanf("%f",&new->cgpa);
        printf("Enter the city : ");
        scanf("%s",new->city);
        printf("Enter the branch : ");
        scanf("%s",new->branch);

        if(head->next == NULL){
            head->next = new;
            temp = new;
            (head->data)++;
        }else{
          
            temp->next = new;
            temp = new;
            (head->data)++;
        }
    }
    return head;
}

//--------------------------------------------------------------------

void display(struct header *head){

    struct linked *temp = head->next;
    while(temp!=NULL){
        printf("%s ~ %d ~ %f ~ %s ~ %s -> \n",temp->name,temp->rollno,temp->cgpa,temp->city,temp->branch);
        temp = temp->next;
    }

}

//----------------------------------------------

void count_nodes(struct header *head){
    printf("There are %d nodes in a linked list \n\n",head->data);
}

//----------------------------------------------------------

void display_branch(struct header *head){
    char search[30];
    printf("Enter the branch you want to search \n");
    scanf("%s",search);
    struct linked *temp = head->next;
    while(temp!=NULL){
        if(strcmp(search , temp->branch)){
            printf("Details of the student are:");
            printf("%s ~ %d ~ %f ~ %s ~ %s -> \n",temp->name,temp->rollno,temp->cgpa,temp->city,temp->branch);
        }

        temp = temp->next;

    }
}


//------------------------------------------------------


void display_cgpa(struct header *head){
    char search[30];
    printf("Enter the branch you want to search \n");
    scanf("%s",search);
    struct linked *temp = head->next;
    while(temp!=NULL){
        if(temp->cgpa > 7.5 && strcmp(search , temp->branch)){
            printf("Details of the student are:");
            printf("%s ~ %d ~ %f ~ %s ~ %s -> \n",temp->name,temp->rollno,temp->cgpa,temp->city,temp->branch);
        }

        temp = temp->next;
    }
}
