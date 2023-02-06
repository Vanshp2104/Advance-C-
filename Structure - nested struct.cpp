#include <stdio.h>  
#include <string.h>  
struct Student  
{     
   int roll;  
   char name[20];  
   struct Date  
    {  
      int dd;  
      int mm;  
      int yyyy;   
    }doj;  
}s1;  
main( )  
{   
   s1.roll=101;  
   strcpy(s1.name, "Sonoo Jaiswal");  
   s1.doj.dd=10;  
   s1.doj.mm=11;  
   s1.doj.yyyy=2014;  
    
   printf( "student roll : %d\n", s1.roll);  
   printf( "student name : %s\n", s1.name);  
   printf( "student date of joining (dd/mm/yyyy) : %d/%d/%d\n", s1.doj.dd,s1.doj.mm,s1.doj.yyyy);  
   return 0;  
}  
