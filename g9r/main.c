#include <stdio.h>
#include <stdlib.h>

int main()
{ int r,c;
   int marks[1][1] ;
   for (r=0;r<2;r++)
    {
        for (c=0;c<2;c++)
        {
            printf("ENTER MARKS:\n ");
            scanf("%d",&marks[r][c]);
        }

    }

     printf("%d %d \n %d %d ",marks[0][0],marks[0][1],marks[1][0],marks[1][1]);


}
