#include<stdio.h>
#include<string.h>
struct search
{
 char name[20];
 int id;
}
 a[5];
 int fun(int);

main()
{
 int i;
 for(i=0;i<=4;i++)
 {
  printf("Enter any name:");
  scanf("%s",&a[i].name);
// printf("%s",a[i].name);

 a[i].id= fun(i);
 }
 for(i=0;i<=4;i++)
 {
  printf(" %s %d\n",a[i].name,a[i].id);
 }
}

int fun(int i)
{
 int j;
 int sum=0;
 for(j=0;j<strlen(a[i].name);j++)
 {
  sum=sum+a[i].name[j];
 }
 printf("%d\n",sum);
 return (sum%23);
}
