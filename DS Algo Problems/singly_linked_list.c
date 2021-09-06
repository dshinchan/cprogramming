#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>

struct linked{
    int data_868;
    struct linked *next_868;
};

void PRINTING(struct linked *head_868_868);                         //CASE  1:
void Insert_AfterNODE_Item(struct linked *head_868_868);            //CASE  2:
void Insert_BeforeNODE_Item(struct linked *head_868_868);           //CASE  3:
void Delete_AfterNODE_Item(struct linked *head_868_868);            //CASE  4:
void Search_NODE_Item(struct linked *head_868_868);                 //CASE  5:
void Nth_Insert_NODE(struct linked *head_868_868);                  //CASE  6:
void Sorting(struct linked *head_868_868);                          //CASE  7:
void Nth_Printing_NODE_from_END(struct linked *head_868_868);       //CASE  8:
void Remove_Duplicates(struct linked *head_868_868);                //CASE  9:
void Reverse(struct linked *head_868_868);                          //CASE 10:
void Reverse_Printing(struct linked *head_868_868);                 //CASE 11:
void Delete_Before(struct linked *head_868_868);                    //CASE 12:
void Delete_KEY(struct linked *head_868_868);                       //CASE 13:
void Delete_Nth(struct linked *head_868_868);                       //CASE 14:
bool Check_Empty(struct linked *head_868);                          //CASE 15:

//***********************************************************************************************
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
    printf("\nOPTIONS\n\n");
    int choice;
    printf("Press  1 -- Print linked list \n");
    printf("Press  2 -- Insert a node after a given item \n");
    printf("Press  3 -- Insert a node Before a given item \n");
    printf("Press  4 -- Delete a node after a given item \n");
    printf("Press  5 -- Search_NODE_Item an element in the linked list \n");
    printf("Press  6 -- Insert a node at certain a position in the linked list\n");
    printf("Press  7 -- Sort the given linked list\n");
    printf("Press  8 -- Print the Nth node from the end of the linked list\n");
    printf("Press  9 -- Remove the duplicates from the linked list\n");
    printf("Press 10 -- Reverse the linked list\n");
    printf("Press 11 -- Print the elements of linked list in Reverse order\n");
    printf("Press 12 -- Delete a node Before a given item \n");
    printf("Press 13 -- Delete a KEY in a given the linked listen\n");
    printf("Press 14 -- Delete a node in a given the linked list at a given position\n");
    printf("Press 15 -- Check wether the linked list is empty or not\n");
    scanf("%d",&choice);

    printf("\nEntered linked list is:\n");
    PRINTING(head_868);
    

    switch(choice){
        case 1:{
            printf("\nYou have choosen to print the linked list\n");
            printf("____________________________________________________________________\n");
            PRINTING(head_868);
            break;
        }
        case 2:{
            printf("\nYou have choosen to insert a node after a given item in the linked list\n");
            printf("____________________________________________________________________\n");
            Insert_AfterNODE_Item(head_868);
            break;
        }

        case 3:{
            printf("\nYou have choosen to insert a node Before a given item in the linked list\n");
            printf("____________________________________________________________________\n");
            Insert_BeforeNODE_Item(head_868);
            break;
        }

        case 4:{
            printf("\nYou have choosen to Delete a node after a given item in the linked list\n");
            printf("____________________________________________________________________\n");
            Delete_AfterNODE_Item(head_868);
            break;
        }

        case 5:{
            printf("\nYou have choosen to Search_NODE_Item an element\n");
            printf("____________________________________________________________________\n");
            Search_NODE_Item(head_868);
            break;
        }
        
        case 6:{
            printf("\nYou have choosen to insert a node at a given position int the linked list\n");
            printf("____________________________________________________________________\n");
            Nth_Insert_NODE(head_868);
            break;
        }

        case 7:{
            printf("\nYou have choosen to sort the given linked list\n");
            printf("____________________________________________________________________\n");
            Sorting(head_868);
            break;
        }

        case 8:{
            printf("\nYou have choosen print the Nth node from the end of the linked list\n");
            printf("____________________________________________________________________\n");
            Nth_Printing_NODE_from_END(head_868);
            break;
        }

        case 9:{
            printf("\nYou have choosen to remove the duplicates from the linked list\n");
            printf("____________________________________________________________________\n");
            Remove_Duplicates(head_868);
            break;
        }

        case 10:{
            printf("\nYou have choosen to Reverse the linked list\n");
            printf("____________________________________________________________________\n");
            Reverse(head_868);
            break;
        }

        case 11:{
            printf("\nYou have choosen to printt the elements of linked list in Reverse order\n");
            printf("____________________________________________________________________\n");
            Reverse_Printing(head_868);
            printf("\n\n");
            break;
        }

        case 12:{
            printf("\nYou have choosen to Delete a node Before a given item in the linked list\n");
            printf("____________________________________________________________________\n");
            Delete_Before(head_868);
            break;
        }

        case 13:{
            printf("\nYou have choosen to Delete a KEY  in the linked list\n");
            printf("____________________________________________________________________\n");
            Delete_KEY(head_868);
            break;
        }

        case 14:{
            printf("\nYou have choosen to Delete a node  in the linked list at a given position\n");
            printf("____________________________________________________________________\n");
            Delete_Nth(head_868);
            break;
        }

        case 15:{
            printf("\nYou have choosen to check wether the linked list is empty or not\n");
            printf("____________________________________________________________________\n");
            int ans = Check_Empty(head_868);
            if(ans == 1)  printf("It is not Null\n");
            else printf("It is Null\n");
            break;
        }

    }
}

//********************************************************************************************
//case:1

void PRINTING(struct linked *head_868){
    while(head_868!=NULL)
    {
        printf("%d->",head_868->data_868);
        head_868 = head_868->next_868;
    }
    printf("\n\n");
}

//-----------------------------------------------------------------------------------------
//case2:

void Insert_AfterNODE_Item(struct linked *head_868){
    struct linked* temp = head_868;int value;
    printf("\nEnter the new node you want to insert and after which node item you want to insert\n");
    struct linked *newnode_868 = (struct linked*)malloc(sizeof(struct linked));
    scanf("%d %d",&newnode_868->data_868,&value);

    while(temp !=NULL && temp->data_868!=value){
        temp=temp->next_868;
    }
    if(temp == NULL){
        printf("\nThe entered node item does not exist--ivalid input\n");
        return;
    }
    newnode_868->next_868 = temp->next_868;
    temp->next_868 = newnode_868;

    PRINTING(head_868);
}

//-----------------------------------------------------------------------------------------
//case3:

void Insert_BeforeNODE_Item(struct linked *head_868){
    struct linked* temp = head_868;int value;
    struct linked* temp2 = head_868;
    printf("\nEnter the new node you want to insert and Before which node item you want to insert\n");
    struct linked *newnode_868 = (struct linked*)malloc(sizeof(struct linked));
    scanf("%d %d",&newnode_868->data_868,&value);

    if(head_868->data_868 == value){
        newnode_868->next_868 = head_868;
        head_868 = newnode_868;
        PRINTING(head_868);
        return;
    }

    while(temp!= NULL && temp->data_868!=value){
        temp2=temp;
        temp=temp->next_868;
    }

    if(temp == NULL){
        printf("\nThe entered node item does not exist--invalid input\n");
        return;
    }

    temp2->next_868=newnode_868;
    newnode_868->next_868 = temp->next_868;
    temp->next_868 = newnode_868;

    PRINTING(head_868);
}

//---------------------------------------------------------------------------------------
//case4:

void Delete_AfterNODE_Item(struct linked *head_868){
    struct linked* temp = head_868;int value;
    printf("\nEnter the node item after which you want to Delete a node\n");
    scanf("%d",&value);

    while(temp->next_868!=NULL && temp->data_868!=value){
        temp=temp->next_868;
    }

    if(temp->next_868 == NULL){
        printf("\nThe entered node item does not exist or it is the last node--ivalid input\n");
        return;
    }

    temp->next_868 = temp->next_868->next_868;
    PRINTING(head_868);
}

//--------------------------------------------------------------------------
//case5:

void Search_NODE_Item(struct linked *head_868){
    int value;
    printf("\nEnter the node item you want to Search_NODE_Item in a linked list\n");
    scanf("%d",&value);

    while(head_868!=NULL && head_868->data_868!=value){
        head_868 = head_868->next_868;
    }

    if(head_868 == NULL) printf("\nNO it is not present\n");
    else printf("\nYES it is present\n");
}

//----------------------------------------------------------------------------
//case6:

void Nth_Insert_NODE(struct linked *head_868){
    struct linked* temp = head_868;int value;
    printf("\nEnter the new node you want to insert and at which position you want to insert\n");
    struct linked *newnode_868 = (struct linked*)malloc(sizeof(struct linked));
    scanf("%d %d",&newnode_868->data_868,&value);
    int count = 1;
    if(value == 1){
        newnode_868->next_868 = head_868;
        head_868 = newnode_868;
        PRINTING(head_868);
        return ;
    }

    while(temp!=NULL && count+1!=value){
        temp=temp->next_868;
        count++;
    }

    if(temp == NULL){
        printf("\nThe entered POSITION does not exist--ivalid input\n");
        return;
    }

    newnode_868->next_868 = temp->next_868;
    temp->next_868 = newnode_868;

    PRINTING(head_868);
}

//--------------------------------------------------------------
//case7:

void Sorting(struct linked *head_868){

    struct linked* temp1 = head_868->next_868;
    struct linked* temp2 = head_868;
    while(temp2->next_868!=NULL){

        if(temp2->data_868 > temp1->data_868){
            int x = temp2->data_868;
            temp2->data_868 = temp1->data_868;
            temp1->data_868 = x;
        }
        
        temp1 = temp1->next_868;
        
        if(temp1 == NULL){
            temp2 = temp2->next_868;
            temp1 = temp2->next_868;
        }
    }

    PRINTING(head_868);
}

//-------------------------------------------------------------------------------------------
//case8:

void Nth_Printing_NODE_from_END(struct linked *head_868){
    struct linked* temp = head_868;
    int count = 0,num;
    printf("Enter the Nth node which you want from the end of the linked list\n");
    scanf("%d",&num);

    
    while(temp!=NULL){
        count++;
        temp=temp->next_868;
    }

    if(count < num){
        printf("Invalid Input\n");
        return;
    }

    if(count==1){
        printf("The Nth node from the end of the linked list is : %d \n",temp->data_868);
        return;
    }

    while(count!=num){
        count--;
        head_868 = head_868->next_868;
    }
    printf("The Nth node from the end of the linked list is : %d \n",head_868->data_868);
}

//------------------------------------------------------------------------------------------
//case9:

void Remove_Duplicates(struct linked *head_868){
    struct linked* temp = head_868->next_868;
    struct linked* temp2 = head_868;
    struct linked* x = head_868;
    
    while(temp2->next_868!=NULL){
        if(temp->data_868 == temp2->data_868){
            x->next_868 = temp->next_868;
            temp = x;
        }

        x = temp;
        temp = temp->next_868;

        if(temp == NULL){
            temp2 = temp2->next_868;
            if(temp2==NULL)
                break;
            x = temp2;
            temp = temp2->next_868;
        }
    }

    PRINTING(head_868);
}

//---------------------------------------------------------------------------------------------
//case10:

void Reverse(struct linked *head_868){
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
    PRINTING(head_868);
}

//-------------------------------------------------------------
//case11:

void Reverse_Printing(struct linked *head_868){
    if(head_868 == NULL){
        return;
    }

    Reverse_Printing(head_868->next_868);
    printf("%d->",head_868->data_868);
}

//--------------------------------------------------------------------
//case12:

void Delete_Before(struct linked *head_868){
    struct linked* temp = head_868;int value;
    struct linked* help = NULL;struct linked* temp2 = head_868;
    printf("\nEnter the node value Before which you want to Delete a node\n");
    scanf("%d",&value);

    if(head_868->data_868 == value){
        printf("No node exist Before this node \n");
        return;
    }

    while(temp2!= NULL && temp2->data_868!= value){
        help = temp;
        temp = temp2;
        temp2 = temp2->next_868;
    }

    if(temp2 == NULL){
        printf("No node with the given value \n");
        return;
    } 

    help->next_868 = temp2;
    
    PRINTING(head_868);
}

//--------------------------------------------------------------------------------------
//case13:

void Delete_KEY(struct linked *head_868){
    struct linked* temp = head_868;int KEY;

    printf("\nEnter the KEY you want to Delete a node\n");
    scanf("%d",&KEY);
    struct linked* x = head_868;

    if(head_868->data_868 == KEY){
        if(!Check_Empty(head_868->next_868)){
            printf("The linkedlist is now NULL");
            return;
        }
        x = head_868->next_868;
        head_868 = NULL;
        head_868 = x;
        PRINTING(head_868);
        return;
    }

    while(temp!=NULL && temp->data_868!= KEY){
        x =temp;
        temp= temp->next_868;
    } 


    if(temp == NULL){
        printf("invalid input");
        return;
    }

    x->next_868 = temp->next_868;
    
    PRINTING(head_868);
}

//------------------------------------------------------------------------
//case14:

void Delete_Nth(struct linked *head_868){
    struct linked* temp = head_868;int KEY;
    printf("\nEnter the position you want to Delete a node\n");
    scanf("%d",&KEY);
    struct linked* x = head_868;

    if(KEY == 1){
        if(head_868->next_868 == NULL){
            printf("The linkedlist is now NULL");
            return;
        }
        x = head_868->next_868;
        head_868 = NULL;
        head_868 = x;
        PRINTING(head_868);
        return;
    }
    int count=1;
    while(temp!=NULL && count!= KEY){
        x = temp;
        temp= temp->next_868;
        count++;
    } 

    if(temp == NULL){
        printf("invalid input");
        return;
    }
    x->next_868 = temp->next_868;

    PRINTING(head_868);
}

//-------------------------------------------------------------------------------
//case15:

bool Check_Empty(struct linked *head_868){
    return (head_868!=NULL);
}

//------------------------------------------------------------------------------


























