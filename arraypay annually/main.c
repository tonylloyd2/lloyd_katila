#include <stdio.h>
 #include <stdio.h>
int main() {
 float expenses[12]={10.3, 9, 7.5, 4.3, 10.5, 7.5, 7.5, 8, 9.9, 10.2, 11.5, 7.8};
 int count, month;
 float total;
 total=0.0 ;
 for (month = 0; month <12; month++)
 {
total+=expenses[month]; //same as total= total + expenses[month];
 }
 for (count=0; count <12; count++)
 printf ("Month %d = %.2f K$\n", count+1, expenses[count]);
 printf("Total = %.2f K$, Average = %.2f K$\n", total, total/12);
 return 0;
}
