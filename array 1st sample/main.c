#include <stdio.h>
#include <stdlib.h>

int main()
{
     char color[5];
     char color2[5];
     char pluralnoun[5];


    printf("ENTER COLOR : ");
    scanf("%s%s",&color,&color2);
    printf ("ENTER PLURAL NOUN ");
    scanf("%s",&pluralnoun);

    printf("%s are %s %s in color ",pluralnoun,color,color2);

    return 0;
}
