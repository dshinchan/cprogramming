#include<stdio.h>
#include<stdlib.h>
#include <math.h>
struct linklist {
	int data;
	struct linklist *next;
};
int convertbinary(struct linklist *head,int count)
{
	int sum=0,x;
	while(head!=0)
	{
		if(head->data*2==2)
		{
			x=pow(2,count);
			sum=sum+x;
			head=head->next;
		}
		else
			head=head->next;
		count--;
	}
	printf("\n\n%d\n\n",sum);
}
int main()
{
	struct linklist *head,*temp,*newnode;
	head=0;int flag=1,count=-1;
	while(flag!=0)
	{
		newnode=(struct linklist*)malloc(sizeof(struct linklist));
		printf("\n enter the data \n");
		scanf("%d",&newnode->data);
		if(head==0)
			temp=head=newnode;
		else
		{
			head->next=newnode;
			head=newnode;
		}
		printf("\n for countinue 1 esle 0 \n");
		scanf("%d",&flag);
		count++;	
	}
	head=temp;
	while(head!=0)
	{
		printf("%d \t",head->data);
		head=head->next;
	}
	head=temp;
	convertbinary(head,count);
}

