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
void insertib(void);
void display(void);
void max(void);
main()
{
	int ch;
	do
{
	printf("1 for create 2 for insert 3 for insertib 4 for display 5 for max 6 for exit");
	scanf("%d",&ch);
switch(ch)
{
	case 1:create(); 
	break;
	case 2:insert(); 
	break;
	case 3:insertib;
	break;
	case 4:display(); 
	break;
	case 5:max();
	break;
	case 6:exit(0);
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
void insertib(void)
{  int item;
        struct node *temp = (struct node *)malloc(sizeof(struct node *));  
        if(temp == NULL)  
        {  
            printf("\nEmpty\n");  
        }  
        else  
        {  
            temp->data=item;  
            temp->next=start;  
            start = temp;  
            printf("\nNode inserted\n");  
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
void max(void)
{
	struct node * temp;
	temp=start;
	int max=0;

		while(temp!=NULL)
		{
			if(temp->data>max)
			{
				max=temp->data;
			}
			temp=temp->next;
		}
		printf("Max value: %d \n ",max);
}
