#include<stdio.h>
#include<string.h>
struct std
{
	int data;
	struct node * next;
}
struct node * start=NULL;
void create(void);
void insert(void);
void display(void);
main()
{
	int ch;
	do
}
printf("1 for create 2 for insert 3 for display 4 for exit");
scanf("%d",&ch);
switch(ch)
{
	case 1:create();
	break();
	case 2:insert();
	break();
	case 3:display();
	break();
	case 4:exit;
}
while(1);
}
void create(void)
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if (temp==NULL)
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
	
}
