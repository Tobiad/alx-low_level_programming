#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - assign a random number to the variable n each time it is executed
* if the number it's greater than 0: it's positive, if the number is 0: it's zero
* if the number is less than zero: it's negative, followed by a new line
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
} else if (n == 0)
{
printf("%d is zero\n", n);
} else
{
printf("%d is positive\n", n);
}
return (0);
}
