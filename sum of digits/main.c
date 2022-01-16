 #include <stdio.h>
int main (void)
{
int number, right_digit,sum=0;
printf ("Enter your number.\n");
scanf ("%i", &number);
while ( number != 0) {
right_digit = number % 10;
number /= 10;
sum += right_digit;
printf ("the sum off the digits is: %d\n", sum);

}
printf ("\n");
return 0;
}
