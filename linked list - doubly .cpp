#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
	struct node*previous;
};
struct node*start=NULL;
void create(void);
void insert(void);
void display(void);
void revdisp(void);
main()
{
	int ch ;
	do
{
	printf("1 for create 2 for insert 3 for display 4 for revdisp 5 for exit");
	scanf("%d",&ch);
switch(ch)
{
	case 1:create(); 
	break;
	case 2:insert(); 
	break;
	case 3:display(); 
	break;
	case 4:revdisp();
	break;
	case 5:exit(0);
}
}
while(1);
}
void create(void)
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("Memory not allocated");
	}
	else
	{
		printf("Enter data");
		scanf("%d",&temp->data);
		temp->next=NULL;
		start=temp;
	}
}
void insert(void)
{
	node*temp1;
	node*temp=start;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp1=(struct node*)malloc(sizeof(struct node));
	if(temp1==NULL)
	{
		printf("Memory not allocated");
	}
	else
	{
		printf("Enter data");
		scanf("%d",&temp1->data);
		temp1->next=NULL;
		temp->next=temp1;
		temp1->previous=temp;
	}
}
void display(void)
{
	node*temp1;
	temp1=start;
	printf("Start-> ");
	while(temp1!=NULL)
	{
		printf("%d",temp1->data);
		temp1=temp1->next;
	}
	printf(" End");
}
void revdisp(void)
{
	node*temp1=NULL;
	temp1=start;
	start->previous=NULL;
	printf("End->");
	while(temp1->next!=NULL)
	{
		printf("%d",temp1->data);
		temp1=temp1->next;
	}
	printf("%d",temp1->data);
	while(temp1!=NULL)
	{
		printf("%d",temp1->data);
		temp1=temp1->previous;
	}
	printf(" Start");
}

