#include <stdio.h>
#include <stdlib.h>

int choice;
int main()
{
   int amount1,amount2,amount3,amount4,amount5;
   char nameA[20];
   char nameB[20];
   char number[15];
   long int salary,grosspay,allowance;
   float paye,paye1,paye2,paye3,paye4,paye5,netpay,netpay1,netpay2,netpay3,netpay4,netpay5;
   printf ("ENTER YOUR SURNAME AND YOUR FIRST NAME ONLY:=  \n");
   scanf ("%s%s",nameA,nameB);
   printf("ENTER YOUR EMPLOYEE NUMBER\n");
   scanf("%s",number);
   printf("ENTER YOUR SALARY\n");
   scanf("%d",&salary);
   printf("ENTER YOUR HOUSE ALLOWANCE\n");
   scanf("%d",&allowance);
   if (salary<allowance||salary==allowance)
   {
       printf("INVALID ENTRY OF HOUSE ALLOWANCE\n\nCORNFRM YOUR ENTRY AND TRY AGAIN");
   }
   else{
   grosspay=salary+allowance;
   printf("YOUR GROSS PAY IS  %d\n",grosspay);
     if (grosspay<=10000)
       {
         paye = 0.0 * grosspay;
         netpay=grosspay-paye;
         printf("\n\nNAME := %s %s \n",nameA,nameB);
         printf("EMPLOYEE NUMBER:= %s \n",number);
         printf("YOUR PAYE IS: %f\n",paye);
         printf("YOUR NET PAY IS:%f\n",netpay);
         printf("salary:=%d\n",salary);



       }
    else if(grosspay>=10001 && grosspay<=60000)
      {
          amount1 = grosspay - 10000;
          paye1 =  0.1 * amount1;
          netpay1 = grosspay - paye1;
          printf("\n\nNAME := %s %s \n",nameA,nameB);
          printf("EMPLOYEE NUMBER:= %s \n",number);
          printf("YOUR SALARY IS : %d\n",salary);
          printf("YOUR PAYE IS: %.3f\n",paye1);
          printf("YOUR NET PAY IS : %.3f\n",netpay1);
      }
    else if(grosspay>=60001 && grosspay<=110000)
      {
          amount2 = grosspay - 60000;
          paye2 =(50000*0.1)+ (0.15*amount2);
          netpay2= grosspay - paye2;
          printf("\n\nNAME := %s %s \n",nameA,nameB);
          printf("EMPLOYEE NUMBER:= %s \n",number);
          printf("YOUR SALARY IS : %d\n",salary);
          printf("YOUR PAYE IS: %.3f\n",paye2);
          printf("YOUR NET PAY IS : %.3f\n",netpay2);
      }
    else if (grosspay>=110001 && grosspay<=160000)
      {
          amount3=grosspay-110000;
          paye3=(50000*.1)+(50000*.15)+(amount3*.2);
          netpay3=grosspay-paye3;
          printf("\n\nNAME := %s %s \n",nameA,nameB);
          printf("EMPLOYEE NUMBER:= %s \n",number);
          printf("YOUR SALARY IS : %d\n",salary);
          printf("YOUR PAYE IS: %.3f\n",paye3);
          printf("YOUR NET PAY IS : %.3f\n",netpay3);

      }
    else if (grosspay>=160001 && grosspay<=210000)
      {
          amount4=grosspay-160000;
          paye4=(50000*.1)+(50000*.15)+(50000*.2)+(amount4*.25);
          netpay4=grosspay-paye4;
          printf("\n\nNAME := %s %s \n",nameA,nameB);
          printf("EMPLOYEE NUMBER:= %s \n",number);
          printf("YOUR SALARY IS : %d\n",salary);
          printf("YOUR PAYE IS: %.3f\n",paye4);
          printf("YOUR NET PAY IS : %.3f\n",netpay4);
      }
    else if  (grosspay>=210001)
      {
          amount5=grosspay-210000;
          paye5=(50000*.1)+(50000*.15)+(50000*.2)+(50000*.25)+(amount5*.3);
          netpay5 = grosspay - paye5;
          printf("\n\nNAME := %s %s \n",nameA,nameB);
          printf("EMPLOYEE NUMBER:= %s \n",number);
          printf("YOUR SALARY IS : %d\n",salary);
          printf("YOUR PAYE IS: %.3f\n",paye5);
          printf("YOUR NET PAY IS : %.3f\n",netpay5);


      }
      }

return 0;
}
