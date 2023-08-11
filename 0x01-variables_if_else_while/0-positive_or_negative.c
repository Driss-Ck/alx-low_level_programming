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
n = rand() % 200 - 100; /* Generate a random number between -100 and 99*/
printf("Random number: %d\n", n);
if (n > 0)
printf("The number is positive.\n");
else if (n < 0)
printf("The number is negative.\n");
else
printf("The number is zero.\n");
return (0);
}
