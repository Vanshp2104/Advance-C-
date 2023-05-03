#include<stdio.h>
main()
{
	FILE * fptr;
	char name[]="fh.txt";
	fptr = fopen(name,"w+");
	if(fptr==NULL)
	{
		printf("ERROR in File Creation");
	}
	else
	{
		fprintf(fptr,"Hello world");
	}
}
