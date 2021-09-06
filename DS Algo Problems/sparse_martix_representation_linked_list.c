#include<stdio.h>
#include <stdlib.h>


struct linked{
    int row1;
    int column;
    int val;
    struct linked *next;
};struct linked *head1,*head2;

void getMatrixInput(int row_size, int col_size, int mat[][col_size]);
void printMatrix(int row_size, int col_size, int mat[][col_size]);
int countt(int row, int col, int mat[][col]);
void ans(int count1,int count2,int row , int col , int mat1[][col],int mat2[][col]);
void create(int matrix1[][3],int matrix2[][3]);
void PRINTING(struct linked *head_868);
void add(struct linked *head1,struct linked *head2);    


//-------------------------------------------------------

int main()
{

    int row1_868, col1_868;
    printf("Enter the size of first matrix \n");
    scanf("%d %d", &row1_868, &col1_868);  //input - row1_868,col1_868
    int mat1[row1_868][col1_868];
    getMatrixInput(row1_868, col1_868, mat1); //function call
    printf("\nEntered matrix is : \n");
    printMatrix(row1_868, col1_868, mat1);
    int count1 = countt(row1_868,col1_868,mat1);


    int mat2[row1_868][col1_868];
    getMatrixInput(row1_868, col1_868, mat2); //function call
    printf("\nEntered matrix is : \n");
    printMatrix(row1_868, col1_868, mat2);
    int count2 = countt(row1_868,col1_868,mat2);

    ans(count1,count2,row1_868 ,col1_868 , mat1 , mat2);

}

//------------------------------------------------------

void printMatrix(int row_size, int col_size, int mat[][col_size])
{
    for(int i = 0; i < row_size; i++)
    {
        for(int j = 0; j < col_size; j++)  printf("%3d", mat[i][j]);
        
        printf("\n");
    }

    printf("\n*************************************************\n\n");
}

//----------------------------------------------------------------------------------

void getMatrixInput(int row_size, int col_size, int mat[][col_size])
{
    printf("Enter the Matrix elements : \n");
    for(int i = 0; i < row_size; i++)
    {
        for(int j = 0; j < col_size; j++)  scanf("%d", &mat[i][j]);

    }
}

//-------------------------------------

int countt(int row, int col, int mat[][col]){
    int count =0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(mat[i][j]!=0){
                count++;
            }
        }
    }
    return count;
}

//-----------------------------------------------------

void ans(int count1,int count2,int row , int col , int mat1[][col],int mat2[][col])
{ 

    int matrix1[count1+1][3];
    matrix1[0][0] = row ;
    matrix1[0][1] = col;
    matrix1[0][2] = count1;
    int k=0;
    for(int i =0 ; i< row ; i++){
        for(int j=0;j<col;j++){
            if(mat1[i][j]!=0){
                k++;
                matrix1[k][0] = i;
                matrix1[k][1] = j;
                matrix1[k][2] = mat1[i][j];   
            }

        }
    }

    int matrix2[count2+1][3];
    matrix2[0][0] = row ;
    matrix2[0][1] = col;
    matrix2[0][2] = count2;
    k=0;
    for(int i =0 ; i< row ; i++){
        for(int j=0;j<col;j++){
            if(mat2[i][j]!=0){
                k++;
                matrix2[k][0] = i;
                matrix2[k][1] = j;
                matrix2[k][2] = mat2[i][j];   
            }

        }
    }

    for(int i=0;i<count1+1;i++){
        for(int j=0; j<3;j++){
            printf("%3d",matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for(int i=0;i<count2+1;i++){
        for(int j=0; j<3;j++){
            printf("%3d",matrix2[i][j]);
        }
        printf("\n");
    }

    create(matrix1,matrix2);
}

//--------------------------------------------------

void create(int matrix1[][3],int matrix2[][3]){

    head1 =NULL;
    head2 =NULL;
    struct linked *temp =NULL;
    int count1 = matrix1[0][2] + 1;
    int count2 = matrix2[0][2] + 1;
    for(int i=1;i<count1;i++){
        struct linked *newnode = (struct linked*)malloc(sizeof(struct linked));
        newnode->row1 = matrix1[i][0];
        newnode->column = matrix1[i][1];
        newnode->val= matrix1[i][2];

        if(head1== NULL){
            head1 = newnode;
            temp = newnode;                       
        }else{
            temp->next = newnode;
            temp = newnode;
        }

    }

    temp = NULL;
    for(int i=1;i<count2;i++){
        struct linked *newnode = (struct linked*)malloc(sizeof(struct linked));
        newnode->row1 = matrix2[i][0];
        newnode->column = matrix2[i][1];
        newnode->val= matrix2[i][2];

        if(head2 == NULL){
            head2 = newnode;
            temp = newnode;                       
        }else{
            temp->next = newnode;
            temp = newnode;
        }

    }

    printf("\n\n-------------------------------------------------\n\n");
    printf("First linkedlist format: \n\n");
    PRINTING(head1);

    printf("Second linkedlist format: \n\n");
    PRINTING(head2);
    printf("\n\nAddition of sparse matrix representation in linkedlist format: \n\n");
    add(head1,head2);
}

//---------------------------------------------------------------

void add(struct linked *head1,struct linked *head2){
    struct linked *head3=NULL;
    struct linked *t1 = head1;
    struct linked *t2 = head2;

    struct linked *temp =  head3;

    while(t1!=NULL && t2!=NULL){
        if(t1->row1 == t2->row1){
            if(t1->column == t2->column){
                struct linked *newnode = (struct linked*)malloc(sizeof(struct linked));
                newnode->row1 = t1->row1;
                newnode->column = t2->column;
                newnode->val = t1->val + t2->val;

                if(head3 == NULL){
                    head3=newnode;
                    temp=newnode;
                }else{
                    temp->next = newnode;
                    temp = temp->next; 
                }
                t1=t1->next;
                t2=t2->next;
            }else{
                if(t1->column > t2->column){
                    struct linked *newnode = (struct linked*)malloc(sizeof(struct linked));
                    newnode = t2;
                    if(head3 == NULL){
                        head3=newnode;
                        temp=newnode;
                    }else{
                        temp->next = newnode;
                        temp = temp->next; 
                    }
                    t2=t2->next;


                }else{
                    
                    struct linked *newnode = (struct linked*)malloc(sizeof(struct linked));
                    newnode = t1;
                    if(head3 == NULL){
                        head3=newnode;
                        temp=newnode;
                    }else{
                        temp->next = newnode;
                        temp = temp->next; 
                    }
                    t1=t1->next;
                }
            }
        }else{
            if(t1->row1 > t2->row1){
                struct linked *newnode = (struct linked*)malloc(sizeof(struct linked));
                    newnode = t2;
                    if(head3 == NULL){
                        head3=newnode;
                        temp=newnode;
                    }else{
                        temp->next = newnode;
                        temp = temp->next; 
                    }
                    t2=t2->next;
            }else{
                 
                 struct linked *newnode = (struct linked*)malloc(sizeof(struct linked));
                    newnode = t1;
                    if(head3 == NULL){
                        head3=newnode;
                        temp=newnode;
                    }else{
                        temp->next = newnode;
                        temp = temp->next; 
                    }
                    t1=t1->next;
            }

        }
    }

    while(t1!=NULL){
        struct linked *newnode = (struct linked*)malloc(sizeof(struct linked));
        newnode = t1;
        if(head3 == NULL){
            head3=newnode;
            temp=newnode;
        }else{
            temp->next = newnode;
            temp = temp->next; 
        }
        t1=t1->next;
    }

    while(t2!=NULL){
        struct linked *newnode = (struct linked*)malloc(sizeof(struct linked));
        newnode = t2;
        if(head3 == NULL){
            head3=newnode;
            temp=newnode;
        }else{
            temp->next = newnode;
            temp = temp->next; 
        }
        t2=t2->next;
    }

    PRINTING(head3);

}

//--------------------------------------------------------

void PRINTING(struct linked *head_868){
    while(head_868!=NULL)
    {
        printf("%d~%d~%d  ->   ",head_868->row1 , head_868->column,head_868->val);
        head_868 = head_868->next;
    }
    printf("\n\n");
}

//--------------------------------------------------------------
