#include <stdio.h>
#include <stdlib.h>
int sum;
int main()
{
    int num = 1, sum = 0;
do
{
 sum = sum + num;
 num = num + num;
}
while(num <2);
printf("The sum = %d", sum);
}
