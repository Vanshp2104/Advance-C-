#include<stdio.h>
#include<string.h>
struct ndt{
	int roll;
	char name[20];
	int marks;
}st1;
typedef struct ndt student;
main()
{
	student st1[10];
	char tname[20];	
	for(int i=0;i<=4;i++)
	{
	printf("Enter roll no");
	scanf("%d",&st1[i].roll);
	printf("Enter Name");
	scanf("%s",&st1[i].name);
	printf("Enter marks");
	scanf("%d",&st1[i].marks);
	}
	for(int i=0;i<=4;i++)
	{
		printf("Roll no : %d Name : %s Marks : %d \n",st1[i].roll,st1[i].name,st1[i].marks);
	}
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(strcmp(st1[j].name,st1[j+1].name)>0)
			{
				int k=st1[j].roll;
				st1[j].roll=st1[j+1].roll;
				st1[j+1].roll=k;
				
				strcpy(tname,st1[j].name);
				strcpy(st1[j].name,st1[j+1].name);
				strcpy(st1[j+1].name,tname);
			}
		}
	}
	for(int i=0;i<=4;i++)
	{
		printf("%d%s\n",st1[i].roll,st1[i].name);
	}
	
}
