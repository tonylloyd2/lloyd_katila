#include <stdio.h>
#include <stdlib.h>
int num,x,i,f=1;
int main()
{
    printf("enter number to find the factorial\n");
    scanf("%d",&num);
    for ( i= num ;i >= 1 ;i-- )
    f=f*i;
    printf("%d\n",f);

    return 0;
}
