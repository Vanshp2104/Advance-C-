#include<stdio.h>
#include<string.h>
struct ndt{
	int roll;
	char name[20];
	int marks;
}st1;
struct temp
{
	char tname[25];	
}t[5];
typedef struct ndt student;
main()
{
	student st1[10];
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
		for(int j=0;j<=4;j++)
		{
			if(st1[i].roll<st1[j].roll)
			{
				int k=st1[i].roll;
				st1[i].roll=st1[j].roll;
				st1[j].roll=k;
				
				strcpy(t[i].tname,st1[i].name);
				strcpy(st1[i].name,st1[j].name);
				strcpy(st1[j].name,t[i].tname);
			}
		}
	}
	for(int i=0;i<=4;i++)
	{
		printf("%d%s\n",st1[i].roll,st1[i].name);
	}
	
}
