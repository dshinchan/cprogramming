//number of elements between two elements a and b - question 5


#include<stdio.h>
int main(){

           int x_868,a,b;
           printf("enter how many numbers you want to insert \n"); 
           scanf("%d",&x_868);
           printf("\nenter an array \n");
           int array[x_868] ;
           
           for(int i=0;i<x_868;i++) scanf("%d",&array[i]);
           
           printf("\nenter a and b \n");
           scanf("%d %d",&a,&b);
           int count =0;
           
           int i = x_868-1 , j = x_868-1;
           int p = 0 , q =0;
          
           
           for(int i =0 ; i<x_868 ; i++){
             if( a == array[i] && p ==0) p++;
             if( b == array[i] && q == 0) q++;
    
             if( a <= array[i] && array[i]<= b) count++;
           }
           
           int flag = p+q;
           
           if(flag==0) printf("\n ans is = %d \n",count+2);
           if(flag==1) printf("\n ans is = %d \n",count+1);
           if(flag>=2) printf("\n ans is = %d \n",count);
                      
}
