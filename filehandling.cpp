#include<stdio.h>
main()
{
	FILE * fptr;
	char name[]="van.txt";
	fptr = fopen(name,"w+");
	if(fptr==NULL)
	{
		printf("ERROR in File Creation");
	}
	else
	{
		fprintf(fptr,"Hello guys");
	}
}
