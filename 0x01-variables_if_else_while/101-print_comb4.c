#include <stdio.h>

/**
 * main - main function
 *
 * Return: Alwyas 0
 */

int main(void)
{
int i,j,k,l;
for(i=0;i<=9;i++)
{
for(j=0;j<=9;j++)
{
for(k=0;k<=9;k++)
{
for(l=0;l<=9;l++)
{
int num1=i*10+j;
int num2=k*10+l;
if(num1<num2)
{
putchar('0'+i);
putchar('0'+j);
putchar(',');
putchar('0'+k);
putchar('0'+l);
if(num1!=98||num2!=99)
{
putchar(',');
}
}
}
}
}
}
putchar('\n');
return (0);
}

