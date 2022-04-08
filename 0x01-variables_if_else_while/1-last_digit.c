#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Description:Print a number  and it is last digit along with wether it is 
* Last digit is 0, greater than 5, or less than 6 and not zero
*/
int main(void)
{
int n, 
int s,    

srand(time(0));
n = rand() - RAND_MAX / 2;
s = n % 10;

if (s > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n,s);
}
if (num == 0)
else if (s == 0)
{
printf("Last digit of %d is %d and is 0\n", n, s);
}
if (num < 6)
else if (s < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s);
}
return (0);
}
