#include<stdio.h>
main()
{
	FILE*input,*output;
	input=fopen("input.txt","r");
	output=fopen("output.txt","w");
	if(input==NULL || output==NULL)
	{
		printf("File Not Created");
	}
	int num;
	while(fscanf(input,"%d",&num)==1)
	{
		fprintf(output,"%d",num*2);
	}
	fclose(input);
	fclose(output);
}
