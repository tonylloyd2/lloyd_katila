#include <stdio.h>
#include <stdlib.h>

void main()
{
     int i, n , sum=0;

     printf("2..4..6..8.....n..ENTER A NUMBER n\n\n");
     scanf("%d",&n);
     for(i=0;i<=n;i=i+2)
     {
         sum=sum+i;
     }
     printf("sum=%d",sum);
    //getchar();
}
