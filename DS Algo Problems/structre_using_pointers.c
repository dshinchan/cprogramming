//Creator : Daya Agrawal (2005868)
#include<stdio.h>
#include <stdlib.h>
struct EMPL{
    char* name;
    int member_id;
    int age;
    long salary;
};

void input(struct EMPL*,int no_emp);
void display(struct EMPL*,int no_emp);
void average(struct EMPL*,int no_emp);
void maxi(struct EMPL*,int no_emp);

/-------------------------------------------

int main(){
    
    int no_emp;
    printf("how many employees are there \n");
    scanf("%d",&no_emp);
    struct EMPL* employe = malloc(no_emp * sizeof *employe);
    input(employe,no_emp);
    display(employe,no_emp);
    average(employe,no_emp);
    maxi(employe,no_emp);
}

/--------------------------------------------------------------------

void input(struct EMPL *employe,int no_emp){

   for(int i=0 ; i<no_emp ; i++){

        employe[i].name=(char*)malloc(sizeof(char*));
        printf("\nenter the name of %dth employe\n",i);
        scanf("%s",employe[i].name);
        printf("\nenter the memberid of %dth employe\n",i);
        scanf("%d",&employe[i].member_id);
        printf("\nenter the age of %dth employe\n",i);
        scanf("%d",&employe[i].age);
        printf("\nenter the salary of %dth employe\n",i);
        scanf("%ld",&employe[i].salary);
        
    }
}

/----------------------------------------------------------------------------------

void display(struct EMPL *employe,int no_emp){

    printf("\n********************************************************\n");
    for(int i=0 ;i < no_emp;i++){
        printf("\n-------------------------------------------------------\n");
        printf("name is = %s \nid is = %d \nage is = %d \nsalary is = %ld \n",employe[i].name,employe[i].member_id,employe[i].age,employe[i].salary);
    }
    printf("\n");
}  

/-------------------------------------------------------------------------

void average(struct EMPL *employe,int no_emp){

    int avrg=0,sum=0;
    for(int i=0;i<no_emp;i++){
        sum = sum + employe[i].salary;
    }
    avrg = sum / no_emp;
    printf("\n\n average salary is %d \n\n",avrg);

}

/-------------------------------------------------------------------------------

void maxi(struct EMPL *employe,int no_emp){

    int max = -1;
    for(int i=0;i<no_emp;i++){
        if(max < employe[i].salary){
            max = employe[i].salary;
        }
    }
    printf("\n\n maxi salary is %d \n\n",max);

}

/---------------------------------------------------------------------------------