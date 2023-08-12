#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0 (indicating success)
 */
int main(void)
{
int n, m;
srand(time(0)); /* Seed the random number generator */
n = rand() - RAND_MAX / 2;
m = n % 10; /* Get the last digit of n using the modulo operator */
if (m < 6 && m != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
else if (m == 0)
printf("Last digit of %d is 0 and is 0\n", n);
else if (m > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, m);
return (0); /*  Indicate successful execution */
}

