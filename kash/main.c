#include <stdio.h>
#include <stdlib.h>
const BAL=3000 ,mshwari_bal=5000;
const PIN=0000;
const CREDIT=1000;

int main()
{
    int amount,send_money,withdraw,pin,Products_and_services,My_account,Loans,Bal,bal,account_number,INQUIRIES,MENU,menu1,airtime;
    int menu1a,credit,menu1b,menu1bA,Bundle,MENU3,MENU3a;

  printf("1.SEND MONEY\n");
  printf("2.WITHDRAW CASH\n");
  printf("3.BUY\n");
  printf("4.LOANS AND SAVINGS\n");
  scanf("%d",&MENU);
  switch(MENU)
{
    case 1:
        printf("ENTER AMOUNT YOU WISH TO SEND  \n");
        scanf("%d",&amount);
        if (BAL<amount)
        printf(" FAILED.YOU HAVE INSUFFICIENT CASH IN YOU ACOUNT TO SEND  Ksh.%dYOU BALANCE IS Ksh.%d\n",amount,BAL);


        else if(amount<BAL)

        printf("ENTER ACCOUNT NUMBER TO SEND TO \n");
        scanf("%d",&account_number);
        printf("ENTER YOUR PIN\n");
        scanf("%d",&pin);

        if (PIN!=pin)printf(" YOU HAVE ENTERED THE WRONG PIN,KINDLY TRY AGAIN\n");

        else printf("YOU HAVE SUCCESSFULLY SENT Ksh.%d TO PHONE NUMBER %d YOUR NEW BALANCE IS Ksh.%d\n",amount,account_number,BAL-amount);



    break;
    case 2:
          printf("ENTER THE AMOUNT YOU WISH TO WITHDRAW \n");
            scanf("%d",&withdraw);
            if (BAL<withdraw)
            printf("FAILED YOU HAVE INSUFFIVIENT FUNDS IN YOUR ACCOUNT TO WITHDRAW Ksh.%d.YOUR ACCOUNT BALANCE IS Ksh.%d\n",withdraw,BAL);

            else  if (BAL>withdraw)

            printf("ENTER YOUR PIN\n");
            scanf("%d",&pin);

            if (PIN!=pin) printf("YOU HAVE ENTERED THE WRONG PIN,KINDLY TRY AGAIN\n");
            else printf("QWELLOYDBCQJ23 CONFIRMED YOU HAVE SUCCESSFULY WITHDRAWN Ksh.%d.YOUR NEW ACCOUNT BALANCE IS Ksh.%d",withdraw,BAL-withdraw);

           break;
          case 3:
              printf("1.BUY AIRTIME\n");
              printf("2.BUY BUNDLES\n");
              printf("3.BUY MINUTES\n");
              printf("4.REEDEM POINTS\n");
              printf("5.INQUIRIES\n");
              scanf("%d",&menu1);
           switch(menu1)
              {
                 case 1:/*buy airtime*/
                     printf("1.BUY FOR MY NUMBER\n");
                     printf("2.BUY FOR OTHER NUMBER\n");
                     scanf("%d",&menu1a);
                    switch (menu1a)
                   {
                        case 1:
                           printf("ENTER AMOUNT TO TOP UP\n");
                           scanf("%d",&credit);
                           if (credit>BAL)
                             printf("TRANSANCTION FAILED. YOU HAVE INSUFFICIENT FUNDS IN YOUR ACCOUNT TO BUY AIRTIME WORTH %d. YOUR ACCOUNT BALANCE IS %d",credit,BAL);
                           else if (credit<BAL)
                           printf("ENTER PHONE NUMBER \n");
                           scanf("%d",&account_number);
                           printf("ENTER YOUR PIN\n");
                           scanf("%d",&pin);
                           if (PIN!=pin) printf("YOU HAVE ENTERED THE WRONG PIN,KINDLY TRY AGAIN\n");
                           else printf("QW56LLOYDYAA9 YOU HAVE SUCCESSFULLY RECHARGED AIRTIME THROUGH O-KASH WORTH Ksh.%d, YOUR NEW O-KASH BALANCE IS Ksh.%d\n",credit,BAL-credit);
                       break;
                       case 2:
                           printf("ENTER THE OTHER NUMBER TO TOP UP TO\n");
                           scanf("%d",&account_number);
                           printf("ENTER THE AMOUNT \n");
                           scanf("%d",&credit);
                            if (credit>BAL)
                           printf("TRANSANCTION FAILED. YOU HAVE INSUFFICIENT FUNDS IN YOUR ACCOUNT TO BUY AIRTIME WORTH Ksh.%d. YOUR ACCOUNT BALANCE IS Ksh.%d\n",credit,BAL);
                           else if (credit<BAL)
                           printf("ENTER YOUR PIN\n");
                           scanf("%d",&pin);\
                           if (PIN!=pin) printf("YOU HAVE ENTERED THE WRONG PIN,KINDLY TRY AGAIN\n\n  \n");
                           else printf("QW56LLOYDYAA9 YOU HAVE SUCCESSFULLY RECHARGED AIRTIME THROUGH O-KASH WORTH %d TO PHONE NUMBER %d YOUR NEW O-KASH BALANCE IS %d\n\n",credit,account_number,BAL-credit);
                   }
                 break ;
                 case 2:/*BUY BUNDLES*/
                     printf("1.BUNDLES WITH NO EXPIRY\n");
                     printf("2.TUNUKIWA BUNDLES\n");
                     printf("3.BUNDLES WITH EXPIRY\n");
                     scanf("%d",&menu1b);
                     switch (menu1b)
                       {
                        case 1://BUNDLES WITH NO EXPIRY
                            printf("1.BUY FOR MY NUMBER\n");
                            printf("2.BUY FOR OTHER NUMBER\n");
                            scanf("%d",&menu1bA);
                            switch(menu1bA)
                                   {
                                   case 1://BUY FOR MY NUMBER
                                   printf("ENTER YOUR NUMBER\n");
                                   scanf("%d",&account_number);
                                   printf("1.PURCHASE FROM O-KASH\n");
                                   printf("2.PURCHASE FROM AIRTIME\n");
                                   scanf("%d",&Bundle);
                                   switch (Bundle)
                                      { case 1:
                                          printf("ENTER AMOUNT YOU WISH TO SPEND\n");
                                          scanf("%d",&amount);
                                          if (BAL<amount)
                                          printf("FAILED.YOU HAVE INSUFFICIENT FUNDS IN YOUR ACCOUNT TO PURCHASE AIRTIME BUNDLE WORTH Ksh.%d  . YOUR O-KASH BALANCE IS %d\n",amount,BAL);
                                          else if(BAL>amount)
                                          {
                                          printf("ENTER YOU PIN\n");
                                          scanf("%d",&pin);
                                          if (PIN!=pin) printf("YOU HAVE ENTERED THE WRONG PIN,KINDLY TRY AGAIN\n\n  \n");
                                          else printf("YOU HAVE SUCCESSFULLY PURCHASED AIRTIME FOR BUNDLE PURCHASE WORTH %d, YOUR NEW O-KASH BALANCE IS %d\n",amount,BAL-amount);
                                          }
                                          break;
                                        case 2:
                                          printf("ENTER AMOUNT YOU WISH TO SPEND\n");
                                          scanf("%d",&amount);
                                          if (CREDIT<amount)printf("FAILED.YOU HAVE INSUFFICIENT FUNDS IN YOUR ACCOUNT TO PURCHASE AIRTIME BUNDLE WORTH Ksh.%d. YOUR AIRTIME BALANCE IS Ksh.%d\n",amount,CREDIT);
                                          else if (CREDIT>amount)
                                          {
                                          printf("ENTER YOU PIN\n");
                                          scanf("%d",&pin);
                                          if (PIN!=pin) printf("YOU HAVE ENTERED THE WRONG PIN,KINDLY TRY AGAIN\n\n  \n");
                                          else printf("YOU HAVE SUCCESSFULLY PURCHASED AIRTIME FOR BUNDLE PURCHASE WORTH %d, YOUR NEW AIRTIME BALANCE IS %d\n",amount,BAL-CREDIT);
                                          }
                                      }
                                   break;
                                   case 2://BUY FOR OTHER NUMBER
                                      printf("ENTER THE OTHER NUMBER\n");
                                      scanf("%d",&account_number);
                                      printf("1.PURCHASE FROM O-KASH\n");
                                      printf("2.PURCHASE FROM AIRTIME\n");
                                      scanf("%d",&Bundle);
                                      switch (Bundle)
                                      { case 1://PURCHASE FROM O-KASH
                                          printf("ENTER AMOUNT YOU WISH TO SPEND\n");
                                          scanf("%d",&amount);
                                          if (BAL<amount)
                                          printf("FAILED.YOU HAVE INSUFFICIENT FUNDS IN YOUR ACCOUNT TO PURCHASE AIRTIME BUNDLE WORTH Ksh.%d  . YOUR O-KASH BALANCE IS %d\n",amount,BAL);
                                          else if(BAL>amount)
                                          {
                                          printf("ENTER YOU PIN\n");
                                          scanf("%d",&pin);
                                          if (PIN!=pin) printf("YOU HAVE ENTERED THE WRONG PIN,KINDLY TRY AGAIN\n\n  \n");
                                          else printf("YOU HAVE SUCCESSFULLY PURCHASED AIRTIME FOR BUNDLE PURCHASE WORTH %d,TO TELEPHONE NUMBER %d,YOUR NEW O-KASH BALANCE IS %d\n",account_number,amount,BAL-amount);
                                          }
                                        break;
                                        case 2://PURCHASE FROM AIRTIME
                                           printf("ENTER AMOUNT YOU WISH TO SPEND\n");
                                          scanf("%d",&amount);
                                          if (CREDIT<amount)
                                          printf("FAILED.YOU HAVE INSUFFICIENT FUNDS IN YOUR ACCOUNT TO PURCHASE AIRTIME BUNDLE WORTH Ksh.%d  . YOUR AIRTIME BALANCE IS %d\n",amount,CREDIT);
                                          else if(CREDIT>amount)
                                          {
                                          printf("ENTER YOU PIN\n");
                                          scanf("%d",&pin);
                                          if (PIN!=pin) printf("YOU HAVE ENTERED THE WRONG PIN,KINDLY TRY AGAIN\n\n  \n");
                                          else printf("YOU HAVE SUCCESSFULLY PURCHASED AIRTIME FOR BUNDLE PURCHASE WORTH %d,TO TELEPHONE NUMBER %d,YOUR NEW AIRTIME BALANCE IS Ksh.%d\n",amount,account_number,CREDIT-amount);
                                          }

                                      }

                                 }
                         break;
                        case 2://TUNUKIWA BUNDLES
                            printf("SORRY THIS OFFER ISNT AVAILABLE AT THE MOMEMENT . THANK YOU  STAY CONNECTED\n");



                        break;
                        case 3://BUNDLES WITH EXPIRY
                            printf("WILL BE WORKED ON LATER \n");

                       }
                 break;
                 case 3://BUY MINUTES
                     printf("WILL BE DEALT WITH LATER\n");



                 break;
                 case 4://REDEEM POINTS
                     printf("WILL BE DEALT WITH LATER\n");

                }
     break;
     case 4://LOANS AND SAVINGS
     printf("1.M-SHWARI\n");
     printf("2.KCB BANKING\n");
     scanf("%d",&MENU3);
     switch(MENU3)
     {
       case 1://M-SHWARI
             printf("1.SEND  TO  M-SHWARI\n");
             printf("2.WITHDRAW  FROM  M-SHWARI\n");
             printf("3.LOCK SAVINGS ACCOUNT\n");
             printf("4.LOAN\n");
             printf("5.CHECK BALANCE\n");
             printf("6.MINI STATEMENT\n");
             scanf("%d",&MENU3a);
             switch(MENU3a)
              {
               case 1://SEND TO MSHWARI
                   printf("ENTER AMOUNT \n");
                   scanf("%d",&amount);
                   if (amount>BAL)
                    printf("TRANSACTION FAILED YOU HAVE INSUFFICIENT FUNDS IN YOUR ACCOUNT TO SEND Ksh:%d  TO MSHWARI. YOUR ACCOUNT BALANCE IS Ksh:%d .",amount,BAL);
                   else if(amount<BAL)
                  {
                   printf("ENTER YOUR PIN\n");
                   scanf("%d",&pin);
                   if (PIN!=pin) printf("YOU HAVE ENTERED THE WRONG PIN,KINDLY TRY AGAIN\t\n");
                   else
                   printf ("YOU HAVE SUCCESSFULLY TRANSFERED Ksh:%d TO  YOUR ACCOUNT TO YOUR MSHWARI ACCOUNT. YOUR NEW ACCOUNT BALANCE IS Ksh:%d AND YOUR NEW MSHWARI ACCOUNT BALANCE IS Ksh:%d",amount,BAL-amount,amount);
                  }
                break;
                case 2://WITHDRAW FROM MSHWARI
                   printf("ENTER AMOUNT \n");
                   scanf("%d",&amount);
                   if (amount>mshwari_bal)
                   printf("TRANSACTION FAILED YOU HAVE INSUFFICIENT FUNDS IN YOUR MSHWARI-ACCOUNT TO WITHDRAW Ksh.%d YOUR M-SHWARI ACCOUNT BALANCE IS Ksh.%d",amount,mshwari_bal);
                   else if (amount<mshwari_bal)
                   {
                     printf ("ENTER YOUR PIN\n");
                     scanf ("%d",&pin);
                     if (PIN!=pin) printf("YOU HAVE ENTERED THE WRONG PIN,KINDLY TRY AGAIN\t\n");
                     else printf ("YOU HAVE SUCCESSFULLY WITHDRAWN Ksh:%d FROM YOUR MSHWARI ACCOUNT\n YOUR NEW MPESA BALANCE IS Ksh:%d AND YOUR NEW MSHWARI ACCOUNT BALANCE IS Ksh:%d",amount,BAL+amount,mshwari_bal-amount);
                   }

             break;
                case 3://lock savings account

                break;
                case 4://LOAN

                break;
                case 5://Check balnce

                break;
                case 6://Mini statements
                    printf("")
  }
      break;
       case 2://KCB BANKING

     }

}

    return 0;
}
