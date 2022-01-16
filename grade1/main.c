#include <stdio.h>
#include <stdlib.h>
int catmarks,exammark,sum,total;
char grade;
int main(){
    entry1:
    printf("enter your cat marks\n");
    scanf ("%d",&catmarks);
    printf("enter your exam marks\n");
    scanf ("%d",&exammark);
     while(catmarks>=31 || exammark>=71){
     goto entry1 ;
     }
     sum=catmarks+exammark;
     switch(sum/10){
      case 10:case 9:case 8: case 7:{
        printf("Total Marks:%d\nGRADE:= 'A'",sum);
        }
      break;case 6:{
        printf("Total Marks:%d\nGRADE:= 'B'",sum);
        }
      break;case 5:{
        printf("Total Marks:%d\nGRADE:= 'C'",sum);
        }
      break;case 4:{
        printf("Total Marks:%d\nGRADE:= 'D'",sum);
        }
      break;case 3:case 2:case 1:case 0:{
        printf("Total Marks:%d\nGRADE:= 'E'",sum);
        }

     }

return 0;
}
