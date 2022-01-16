#include <stdio.h>
main()
{
int a=6;
short b;
double c;
int *ptr;
/* example of sizeof operator */
printf("Line 1 - Size of variable a = %d\n", sizeof(a) );
printf("Line 2 - Size of variable b = %d\n", sizeof(b) );
printf("Line 3 - Size of variable c= %d\n", sizeof(c) );
/* example of & and * operators */
ptr = &a; /*’ptr’ now contains the address of ‘a’ */
printf("value of a is %d\n", a);
printf("*ptr is %d.\n", *ptr);
/* example of ternary operator */
a = c =20;
b = (a == 10) ? 30:20 ;
printf( "Value of b is %d\n", b );
c = (a == 10) ? 20: 30;
printf( "Value of c is %d\n", c );
}
