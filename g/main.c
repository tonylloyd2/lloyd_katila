#include <stdio.h>
#include <stdlib.h>

void inc_array(int a[ ], int size);
main()
        {
        int test[3]={1,2,3};
        int ary[4]={1,2,3,4};
        int i;
        //inc_array(test,3);
        for(i=0;i<3;i++){
         printf("%d",test[i]);
        // inc_array(ary,4);
        for(i=0;i<4;i++){
        printf("%d\n",ary[i]);
        }
       /* for(i=0;i<3;i++)
         printf("%d",test[i]);
        // inc_array(ary,4);
        for(i=0;i<4;i++)
        printf("%d\n",ary[i]);*/}
        return 0;
        }
