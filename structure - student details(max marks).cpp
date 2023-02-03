#include<stdio.h>
struct ndt{
	int roll;
	char name[20];
	int marks;
};
typedef struct ndt student;
main()
{
	student st1[10];
	for(int i=0;i<3;i++)
	{
	printf("Enter roll no");
	scanf("%d",&st1[i].roll);
	printf("Enter Name");
	scanf("%s",&st1[i].name);
	printf("Enter marks");
	scanf("%d",&st1[i].marks);
	}
	for(int i=0;i<3;i++)
	{
		printf("Roll no : %d Name : %s Marks : %d \n",st1[i].roll,st1[i].name,st1[i].marks);
	}
	int max,j;
	for(int i=0;i<3;i++)
	{
		if (max<st1[i].marks)
		{
			max=st1[i].marks;
			j=i;
		}
	}
	printf("%s",st1[j].name);
}

