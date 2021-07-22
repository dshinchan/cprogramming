#include<stdio.h>
#include<stdlib.h>
struct linklist
{
	int data;
	struct linklist *next;
};
int  main()
{	
	int x,n=0;
	struct linklist *newnode_x,*temp,*head;
	for(x=0;x<3;x++)
	{
		head =0 ; int flag =1;
		printf("\n linked lists = %d \n ",x);
		while(flag!=0)
		{
			newnode_x=(struct linklist*)malloc(sizeof(struct linklist));
			print("\n enter the data \n");
			scanf("%d",&newnode_x->data);
			if(head==0)
				head=temp=newnode_x;
			else
			{
				head->next=newnode_x;
				head=newnode_x;
			}
			printf("for continue 1 else 0 \n");
			scanf("%d",&flag);	
		}
		head=temp;
		while(head!=0)
		{
			printf("%d \t",head->data);
			head=head->next;
		}	
		printf("\n delete node number \n");
		int i=0;
		n=(2*x)+1;
		head=temp;
		while(head!=0)
		{
			i=i+1;
			if(i!=n)
			{
				printf("%d \t",head->data);
				head=head->next;
			}else
				head=head->next;	
		}
		n++;
	}
}
