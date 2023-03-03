#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	char name[25];
};
struct temp
{
	char tname[25];
};

typedef struct student stud;
typedef struct temp temp;

main()
{
stud s[5];
temp t[5];
for(int i=0;i<5;i++)
{
	printf("enter roll number");
	scanf("%d",&s[i].roll);

	printf("enter names");
	scanf("%s",&s[i].name);
	fflush(stdin);
}

for(int i=0;i<5;i++)
	printf("roll=%d\t name=%s\n",s[i].roll,s[i].name);

for(int i=0;i<5;i++)
{
	for(int j=0;j<4;j++)
	{
		if(strcmp(s[j].name,s[j+1].name)>0)
			{
			int k=s[j].roll;
			s[j].roll=s[j+1].roll;
			s[j+1].roll=k;

			strcpy(t[j].tname,s[j].name);
			strcpy(s[j].name,s[j+1].name);
			strcpy(s[j+1].name,t[j].tname);
			}
	}
}

for(int i=0;i<5;i++)
	printf("%d\t %s\n",s[i].roll,s[i].name);
}
