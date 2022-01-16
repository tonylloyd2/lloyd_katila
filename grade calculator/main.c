#include <stdio.h>
#include <stdlib.h>
long int i,idno,sum=0,a,b,c,d,e,f,g,h,j,i;
int nounits,entries;
char adm[20];
double avg;
char grade[5]={'A','B','C','D','E'};
int main()
{
    printf("ENTER YOUR ADMISSION NUMBER\n");
    scanf("%s",adm);
    printf("\nENTER THE TOTAL  NUMBER OF UNITS YOU TAKE :=   \n");
    scanf("%d",&nounits);
    for(i=1;i<=nounits;i++){
        printf("enter marks for unit number %d  : ",i);
        scanf("%d",&entries[i]);
        sum+=entries;
        }
        printf(sum);

return 0;
}
/*

    printf("UNIT 1:=  \n");
    scanf("%d",&a);
    if (a>100){printf("\ninvalid entry\n");}
    else if (a<100)
        {
    printf("UNIT 2:=   \n");
    scanf("%d",&b);
     if (b>100){printf("\ninvalid entry\n");}
    else if (b<100)
        {
    printf("UNIT 3:=   \n");
    scanf("%d",&c);
     if (c>100){printf("\ninvalid entry\n");}
    else if (c<100)
        {
    printf("UNIT 4:=    \n");
    scanf("%d",&d);
     if (d>100){printf("\ninvalid entry\n");}
    else if (d<100)
        {
    printf("UNIT 5:=    \n");
    scanf("%d",&e);
     if (e>100){printf("\ninvalid entry\n");}
    else if (e<100)
        {
    printf("UNIT 6:=     \n");
    scanf("%d",&f);
     if (f>100){printf("\ninvalid entry\n");}
    else if (f<100)
        {
    printf("UNIT 7:=     \n");
    scanf("%d",&g);
     if (g>100){printf("\ninvalid entry\n");}
    else if (g<100)
        {
    printf("UNIT 8:=     \n");
    scanf("%d",&h);
     if (h>100){printf("\ninvalid entry\n");}
    else if (h<100)
        {
    printf("UNIT 9:=     \n");
    scanf("%d",&i);
     if (i>100){printf("\ninvalid entry\n");}
    else if (i<100)
        {
    printf("UNIT 10:=    \n");
    scanf("%d",&j);
     if (j>100){printf("\ninvalid entry\n");}
    else if (j<100)
        {
    sum=a+b+c+d+e+f+g+h+i+j;
    avg=sum/nounits;
    entries=a||b||c||c||d||e||f||g||h||i||j;

        }}}}}}}}}}



    if (sum>nounits*100){printf("cornfirm your entries and retry");}
        {
    printf("YOUR AVERAGE MARK IS : %.2f\n",avg);
        }
     if (avg>75)
     {
         printf("YOU HAVE AN    %c    \n\n**NICE WORK THE WORLD AWAITS FOR YOU**\n\n",'A');
     }
    else if (avg>65 && avg<75)
     {
        printf("GRADE:=    %c      \n\n**YOU HAVE TRIED**\n\n",'B');
     }
    else if (avg>55 && avg<65)
     {
        printf("GRADE:=    %c      \n\n**KIDOGO UPATE SUP**\n\n",'C');
     }
    else if (avg>45 && avg<55)
     {
        printf("GRADE:=    %c      \n\n**WE NAKUSHUKU SANA**\n\n",'D');
     }
     else if (avg>35 && avg<45)
     {
        printf("GRADE:=    %c      \n\n**FANYA AJE ....NILETEE DOOH ZA RESITS...**\n\n",'E');
     }
      else if (avg<35)
     {
        printf("GRADE:=    %c      \n\n**WEWE APO BACK LEFT NA MA TORTOISE**\n\n",'F');
     }

*/
