#include <stdio.h>

/**
 * main - main function
 *
 * Return: Alwyas 0
 */

int main(void)
{
int i,j,comma=0;
for(i=0;i<=99;i++)
{
for(j=i+1;j<=99;j++)
{
if(comma)
{
putchar(',');
putchar(' ');
}
else
{
comma=1;
}
putchar((i/10)+'0');
putchar((i%10)+'0');
putchar(' ');
putchar((j/10)+'0');
putchar((j%10)+'0');
}
}
putchar('\n');
return 0;
}

