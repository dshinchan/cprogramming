#include<stdio.h>
#include<stdlib.h>
struct linklist
{
	int data;
	struct linklist *next;
};
struct linklist *head;
int main()
{
	int flag=1;
	struct linklist *newnode,*temp;
	while(flag!=0)
	{
		newnode=(struct linklist*)malloc(sizeof(struct linklist));
		scanf("%d",&newnode->data);
		if(head==0)
		{
			temp=head=newnode;
		}
		else
		{
			head->next=newnode;
			head=head->next;
			printf("\n countinue=1 stop=0 \n");
			scanf("%d",&flag);
		}
	}
	head=temp;
	reverse(head);
	while(head!=0)
	{
		printf("%d \t",head->data);
		head=head->next;
	}
}
int reverse(struct linklist *x)
{
	if(x->next==0)
	{
		head=x;      
		return;
	}
	reverse(x->next);
	struct linklist *y;
		y=x->next;
		y->next=x;
		x->next=0;
}	
