 #include <stdio.h>
int main ()
{
int n, number; long long int factorial;
        while(number>0){
        printf ("What  factorial number do you want? ");
        scanf ("%i", &number);
         factorial = 1;
        for ( n = 1; n <= number; ++n )
         factorial *= n;
        printf ("Triangular/factorial  number of %i is %d \n", number,factorial);
        return 0;
        }
}
