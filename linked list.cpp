#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*start=NULL;
void create(void);
void insert(void);
void display(void);
void deleteend(void);
void deletebeg(void);
void deletemid(void);
void search(void);
main()
{
	int ch ;
	do
{
	printf("1 for create 2 for insert 3 for display 4 for deleteend 5 for deletebeg 6 for deletemid 7 for search 8 for max 9 for nmax 10 for min 11 for reverse 12 for exit");
	scanf("%d",&ch);
switch(ch)
{
	case 1:create(); 
	break;
	case 2:insert(); 
	break;
	case 3:display(); 
	break;
	case 4:deleteend();
	break;
	case 5:deletebeg();
	break;
	case 6:deletemid();
	break;
	case 7:search();
	break;
	case 8:exit(0);
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
	}
}
void display(void)
{
	node*temp1;
	temp1=start;
	printf("Start->");
	while(temp1!=NULL)
	{
		printf("%d",temp1->data);
		temp1=temp1->next;
	}
	printf("END");
}
void deleteend(void)
{
	struct node * temp1,*temp2;
	temp1=start;
	if(start==NULL)
	{
	printf("List is Empty");
	}
	else
	{
	while(temp1->next->next=NULL)
	{
	temp1=temp1->next;
	}
    temp2=temp1->next;
	printf("deleted node is%d\n",temp2->data);
	free(temp2);
	temp1->next=NULL;
	}
}
void deletebeg(void)
{
	struct node*temp=NULL;
	if (start==NULL)
	printf("List is empty");
	else 
	temp=start;
	start=start=start->next;
	printf("deleted node is: %d\n",temp->data);
	free(temp);
}
void deletemid(void)
{
	struct node *temp,*temp1;
	temp=start;
	int x;
	printf("Enter the number to be deleted\n");
	scanf("%d",&x);
	while(temp->next->data!=x)
	{
		temp=temp->next;
	}
	temp1=temp;
	temp=temp->next;
	struct node *temp2=temp->next;
	free(temp);
	printf("node eliminated\n");
	temp1->next=temp2;
}
void search(void)
{
struct node *temp	;
temp=start;
int x ;
int flag=0;
printf("Enter the number to be searched\n ");
scanf("%d"&x);
while(temp->data!=x)
{
flag++;
temp=temp->next;
}
printf("%d is found at %d\n",temp->data,flag);
}

