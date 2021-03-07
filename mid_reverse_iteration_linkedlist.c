//linked list//
#include<stdio.h>
#include<stdlib.h>
struct linklist
{
	int data;
	struct linklist *next;
};
struct linklist *left,*right,*head;
struct linklist *reverse(struct linklist *x)
{
	if(x->next==0)
	{
		head=x;      
		return x;
	}
	struct linklist *y=reverse(x->next);
		y->next=x;
		x->next=0;
		return x;
}

int main()
{
	struct linklist *temp,*newnode,*rightnexttemp;
	head=0;int flag=1,count=0;
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
	printf("\n");
	head=temp;
	rightleft(head,count,temp);
	head=temp;
	while(temp->next!=left)
		temp=temp->next;
	temp->next=right;
	if(right->next!=0)
		rightnexttemp=right->next;
	right->next=0;
	reverse(left);
	head=temp;
	while(temp->next!=0)
		temp=temp->next;
	temp->next=rightnexttemp;
	while(head!=0)
	{
		printf("%d \t",head->data);
		head=head->next;
	}
}
int rightleft(struct linklist *head,int count,struct linklist *temp)
{
	int x;
	printf("for left");
	scanf("%d",&x);
	if(x!=1)
	{	for(int i=1;i<x;i++)
		{
			head=head->next;
			left=head;
		}
	}
	else
		left=head;
	printf("for right");
	scanf("%d",&x);
	head=temp;
	for(int i=1;i<count-x+1;i++)
		{
			head=head->next;
			right=head;
		}
	printf("\n left is %d \n right is %d\n",left->data,right->data);	
}

