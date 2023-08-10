#include <stdio.h>

/**
 * main - A program that prints the size of various types
 * Return: 0 (Success)
 */

int main(void)
{
printf("Size of a char: %lu bytes\n", sizeof(char));
printf("Size of an int: %lu bytes\n", sizeof(int));
printf("Size of long int: %lu bytes\n", sizeof(long));
printf("Size of long long int: %lu bytes\n", sizeof(long long));
printf("Size of float: %lu bytes\n", sizeof(float));
return (0);
}


