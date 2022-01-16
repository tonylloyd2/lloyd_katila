#include <stdio.h>
#include <stdlib.h>

int main()

{
    int x,count;
    for(count=100; count>=0; count--)
    {
         x=count;
         printf("count=%d   x=%d\n",count,x);
    }

    return 0;
}
