 #include <stdio.h>
int main (void)
{
int number, right_digit,sum;
printf ("Enter your number.\n");
scanf ("%i", &number);
while ( number != 0) {

right_digit = number % 10;
number /= 10;
printf ("%i", right_digit);
}
printf ("\n");
return 0;
}
