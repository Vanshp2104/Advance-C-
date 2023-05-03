#include <stdio.h>
main()
{
    FILE* fp;
	int count = 0;
    char filename[1000];
    char c;
    
    printf("Enter fname:");
    scanf("%s",&filename);
    
    fp = fopen(filename, "r");
      if (fp == NULL) 
	{
        printf("Could not open file %s",filename);
    }
    while (c = fgetc(fp) != EOF)
    {
     count = count + 1;
	}
    fclose(fp);
    printf("The file %s has %d characters\n ",filename, count);
}
