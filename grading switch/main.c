#include <stdio.h>
#include <stdlib.h>
int marks,menu;
char grade;
int main()
{
 printf("select range of your marks\n");
 printf("1.marks 70-100\n");
 printf("2.marks 60-69\n");
 printf("3.marks 50-59\n");
 printf("4.marks 40-49\n");
 printf("5.marks below 40\n");
 scanf("%d",&menu);
 switch(menu)
 {
  case 1:
   printf ("enter marks\n");
   scanf("%d",&marks);
   if (marks>=70 && marks<=100)
     {
       grade='A';
       printf("\nmarks:%d\t\tgrade:= %c\n\n",marks,grade);
     }
   else printf("invalid input\n");
   break;

  case 2:
    printf ("enter marks\n");
   scanf("%d",&marks);
   if (marks>=60 && marks<=69)
     {
       grade='B';
       printf("\nmarks:%d\t\tgrade:= %c\n\n",marks,grade);
    }
    else printf("invalid input\n");
   break;
   case 3:
    printf ("enter marks\n");
   scanf("%d",&marks);
   if (marks>=50 && marks<=59)
     {
       grade='C';
       printf("\nmarks:%d\t\tgrade:= %c\n\n",marks,grade);
    }
    else printf("invalid input\n");
   break;
   case 4:
    printf ("enter marks\n");
   scanf("%d",&marks);
   if (marks>=40 && marks<=49)
     {
       grade='D';
       printf("\nmarks:%d\t\tgrade:= %c\n\n",marks,grade);
    }
    else printf("invalid input\n");
   break;
   case 5:
   printf ("enter marks\n");
   scanf("%d",&marks);
   if ( marks>=0 && marks<=39)
     {
       grade='E';
       printf("\nmarks:%d\t\tgrade:= %c\n\n",marks,grade);
    }
    else printf("invalid input\n");
   break;
 }

return 0;
}
