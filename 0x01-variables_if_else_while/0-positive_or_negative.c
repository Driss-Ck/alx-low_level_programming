#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
int n;
srand(time(0)); /* Seed the random number generator with the current time*/
n = rand() - RAND_MAX / 2; /* Generate a random number between -100 and 99*/
if (n > 0)
printf("%d is positive", n);
else if (n < 0)
printf("%d is negative", n);
else
printf("%d is zero", n);
printf("\n");
return (0);
}
