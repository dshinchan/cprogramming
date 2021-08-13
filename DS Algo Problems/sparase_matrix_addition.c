#include<stdio.h>

void getMatrixInput(int row_size, int col_size, int mat[][col_size]);
int countt(int row, int col, int mat[][col]);
void ans(int count1,int count2,int row , int col , int mat1[][col],int mat2[][col]);
void printMatrix(int row_size, int col_size, int mat[][col_size]); 
void procedure(int matrix1[][3] , int matrix2[][3] , int count2 , int count1 , int row , int col);



//-------------------------------------------------------------------

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

//-----------------------------------------------------------------------------

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

    procedure(matrix1,matrix2,count2,count1,row,col);



}

//------------------------------------------------------------------------------------------------

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
    //printf("%d",count);

    int mat2[row1_868][col1_868];
    getMatrixInput(row1_868, col1_868, mat2); //function call
    printf("\nEntered matrix is : \n");
    printMatrix(row1_868, col1_868, mat2);
    int count2 = countt(row1_868,col1_868,mat2);

    ans(count1,count2,row1_868 ,col1_868 , mat1 , mat2);

    

}

//---------------------------------------------------------------------------------------

void printMatrix(int row_size, int col_size, int mat[][col_size])
{
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)  printf("%3d", mat[i][j]);
        
        printf("\n");
    }

    printf("\n*************************************************\n\n");
}

//----------------------------------------------------------------------------------

void getMatrixInput(int row_size, int col_size, int mat[][col_size])
{
    printf("Enter the Matrix elements : \n");
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)  scanf("%d", &mat[i][j]);
        
    }
}

//-----------------------------------------------------------------------------

void procedure(int matrix1[][3],int matrix2[][3],int count2,int count1 , int row , int col)
{
    int final[10][3];
    int count = 1;
    final[0][0] = row;
    final[0][1] = col;
    int i=1,j=0;
    int m=1,n=0;

    while(i<count1+1 && m<count2+1){

        if(matrix1[i][j] == matrix2[m][n]){
            if(matrix1[i][j+1] == matrix2[m][n+1]){
                final[count][j] = matrix1[i][j];
                final[count][j+1] = matrix1[i][j+1];
                final[count][j+2] = matrix1[i][j+2] + matrix2[m][n+2];
                i++;
                m++;
            }
            else{
                if(matrix1[i][j+1]>matrix2[m][n+1]){
                    final[count][j] = matrix2[m][n];
                    final[count][j+1] = matrix2[m][n+1];
                    final[count][j+2] = matrix2[m][n+2];
                    m++;

                }else{

                    final[count][j] = matrix1[i][j];
                    final[count][j+1] = matrix1[i][j+1];
                    final[count][j+2] = matrix1[i][j+2];
                    i++;

                }
            }
        }else{
            if(matrix1[i][j] > matrix2[m][n]){
                final[count][j] = matrix2[m][n];
                final[count][j+1] = matrix2[m][n+1];
                final[count][j+2] = matrix2[m][n+2];
                m++;

            }else{

                final[count][j] = matrix1[i][j];
                final[count][j+1] = matrix1[i][j+1];
                final[count][j+2] = matrix1[i][j+2];
                i++;

            }

        }
        count++;
    }

    while(i<count1+1){
        final[count][j] = matrix1[i][j];
        final[count][j+1] = matrix1[i][j+1];
        final[count][j+2] = matrix1[i][j+2];
        i++;
        count++;

    }

    while(m<count2+1){
        final[count][j] = matrix2[m][n];
        final[count][j+1] = matrix2[m][n+1];
        final[count][j+2] = matrix2[m][n+2];
        m++;
        count++;
    }

    final[0][2] = count-1;

    printf("\n------------------------------\n");
    for(int i=0;i<count;i++){
        for(int j=0;j<3;j++){
            printf("%d  ",final[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}

//-----------------------------------------------------------------------------------
