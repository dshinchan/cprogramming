#include<stdio.h>
#include<stdlib.h>
struct linklist
{
	int data;
	struct linklist *next;
};
struct linklist *head;
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
struct linklist *rightleft(int l,int r)
{
	if(l==r)
		return head;
	
	struct linklist *temp,*right,*left,*rightnext;
	temp=head;
	int i=1;
	while(i<=r)	
	{
		if(i==l || i<l)
			left=head;
		if(i==r)
		{
			right=head;
			rightnext=right->next;
			right->next=0;
		}
		head=head->next;
		i++;	
	}
	head=temp;
	printf("\n");
	if(temp==left)
	{
		if(rightnext==0)
		{
			reverse(left);
			while(head!=0)
			{
				printf("%d \t",head->data);
				head=head->next;
			}
			return 0;
		}
	}else{
			while(temp->next!=left)
				temp=temp->next;
			temp->next=right;
	    }temp=head;
	    reverse(left);
	if(temp!=left)
		head=temp;
	while(temp->next!=0)
		temp=temp->next;
	temp->next=rightnext;
	while(head!=0)
	{
		printf("%d \t",head->data);
		head=head->next;
	}
}
	
int main()
{
	struct linklist *temp,*newnode,*rightnexttemp,*x;
	head=0;int flag=1;int l,r;
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
	}
	printf("enter left and right");
	scanf("%d%d",&l,&r);
	head=temp;
	while(head!=0)
	{
		printf("%d \t",head->data);
		head=head->next;
	}
	head=temp;
	rightleft(l,r);
}

