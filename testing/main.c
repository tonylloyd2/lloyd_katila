#include <stdio.h>
#include <stdlib.h>

int main()
{
 int even,odd;
 int sum = 0 ;
 int i ;
 int numbers[24] ; /* array declaration */
 for ( i = 0 ; i < 24 ; i++ )
 {
 printf ( "\nEnter marks " ) ;
 scanf ( "%d", &numbers[i] ) ; /* store data in array */
 }

 for ( i = 0 ; i < 24 ; i++)
{
   if (numbers[i]%2==0 )
     {
     even=numbers[i];
     printf("\t\nEVEN NUMBERS =%d ",even);
     sum += even++ ;
     printf("\nsum of even numbers :=  %d",sum);
     }
   /*else
     {
     odd=numbers[i];
     printf("\t\nEVEN NUMBERS =%d ",odd);
     sum += odd++ ;
     printf("\nsum of even numbers :=  %d",sum);
     }*/
}

return 0;
}


