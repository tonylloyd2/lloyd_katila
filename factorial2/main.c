#include <stdio.h>
#include <stdlib.h>
 main( )
{
 int a, fact ;
 printf ( "\nEnter any number " ) ;
 scanf ( "%d", &a ) ;

 fact = factorial ( a ) ;//passsing the arguement to the method

 printf ( "Factorial value = %d", fact ) ;
}
factorial ( int x )
{
 int f = 1, i ;
 for ( i = x ; i >= 1 ; i-- )
 f  *= i ;
 return  f  ;
}
