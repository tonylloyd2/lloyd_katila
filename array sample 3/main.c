#include <stdio.h>
#include <stdlib.h>
 #include <stdio.h>
int main(){
int i;
int a[3] = { 1, 2, 3 };
printf( " %d\n", a);
printf( " %d\na[1] ? %d\na[2] ? %d\n", a[0], a[1], a[2]);
printf( " %d\n&a[1] ? %d\n&a[2] ? %d\n", &a[0], &a[1], &a[2]);
/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
printf( "\na[0] <- 4 \n");
a[0] = 4;
printf( "a ? %d\n", a);
printf( "a[0] ? %d\na[1] ? %d\na[2] ? %d\n", a[0], a[1], a[2]);
printf( "&a[0] ? %d\n&a[1] ? %d\n&a[2] ? %d\n\n", &a[0], &a[1], &a[2]);
for (i=0; i<3; i++) {
printf( "a[%d] <- ",i);
scanf( "%d", &a[i]);
}
printf( "a ? %d\n", a);
printf( "a[0] ? %d\na[1] ? %d\na[2] ? %d\n", a[0], a[1], a[2]);
printf( "&a[0] ? %d\n&a[1] ? %d\n&a[2] ? %d\n", &a[0], &a[1], &a[2]);
}
